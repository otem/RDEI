#include <EEPROM.h>
#include <SPI.h>


int chip_pin_one = 38;
int chip_pin_two = 39;
int gatePins[4] = {17,16,15,14};
//Encoder Btn
int extBtnPins[3] = {A21, A22,A11};
int extBtnSt[3];
int extBtnStPrev[3];
int btnThresh[3] = {290,390,390};
bool tempBtnDown;
bool gateBtnDown;
bool noteDown;
unsigned long initTmStp;
unsigned long gateBtnTmStp;
bool seqLengthMode;
//Encoder
int tempEncRotPin1 = 21;
int tempEncRotPin2 = 20;
volatile int tempLastEncoded = 0;
volatile long tempEncVal = 500;
int tempEncoded;
//Encoder 2
int seqEncRotPin1 = 19;
int seqEncRotPin2 = 18;
volatile int seqLastEncoded;
volatile long seqEncVal;
int seqEncoded;

int btnAnim;
unsigned long btnAnimTmStp;
bool randomizedRow[4] = {false,false,false,false};
bool recAutomation;

unsigned long blkTmr;
unsigned long blkTmrM;
int clkInPin = 22;
int seqSelPin = 23;
int analogPin = A10;
int analogValue; 
int analogValueLag;

int trigSetInput;
int prevTrigSetInput; 


bool internalClock;
int seqStep = 31;
bool gateMutes[4];
bool anyMuteDown;

int gateSteps[4];
int seqLengths[4] = {31,31,31,31};

int seqSpeeds[4] = {8,4,2,1};
int speedIndex[4] = {3,3,3,3};

int seqLengthLedRow;
int seqLengthLedCol;

int prevSeqStep = 1;
bool seqRunning;
unsigned long gateSentTime = -3000;
unsigned long prevGateSentTime;
unsigned long extrGtSntTm;
int cvStep;

int trigSet;
//[pattern][steps][gate]
bool trigs[4][32][4];
int cvVals[4][32][4];

bool cpyTrigs[4][32][4];
int cpyCvVals[4][32][4];

int gateOutNumber;
int seqPageMath[4] = {0,8,16,24};
unsigned long menuTimeStp;
bool menuSelect;
bool menuOpen;

unsigned long prevMetroTime;
unsigned long intervalTime = 500;
unsigned long intervalTmStp;

unsigned long clearPgTmStp[4];
bool gatesMutDwn[4];
bool allGatesOff = true;

//slave MIDI
byte counter; 
byte CLOCK = 248; 
byte START = 250; 
byte CONTINUE = 251; 
byte STOP = 252;


#define NUM_LED_COLUMNS (9)
#define NUM_LED_ROWS (4)
#define NUM_BTN_COLUMNS (9)
#define NUM_BTN_ROWS (4)
#define NUM_COLORS (1)

#define MAX_DEBOUNCE (3)

// Global variables
static bool LED_buffer[NUM_LED_COLUMNS][NUM_LED_ROWS];
static const uint8_t btncolumnpins[NUM_BTN_COLUMNS] = {9, 12, 25, 27, 29, 31, 33, 35, 37};
static const uint8_t btnrowpins[NUM_BTN_ROWS]       = {6,4,2,0};
static const uint8_t ledcolumnpins[NUM_LED_COLUMNS] = {8, 10, 24, 26, 28, 30, 32, 34, 36};
static const uint8_t ledRows[NUM_LED_ROWS]        = {7,5,3,1};

static int8_t debounce_count[NUM_BTN_COLUMNS][NUM_BTN_ROWS];

static void setuppins(){
  uint8_t i;
  // LED columns
  for (i = 0; i < NUM_LED_COLUMNS; i++){
    pinMode(ledcolumnpins[i], OUTPUT);
    digitalWrite(ledcolumnpins[i], HIGH);
  }
  // button columns
  for (i = 0; i < NUM_BTN_COLUMNS; i++){
    pinMode(btncolumnpins[i], OUTPUT);
    digitalWrite(btncolumnpins[i], HIGH);
  }
  // button row input lines
  for (i = 0; i < NUM_BTN_ROWS; i++){
    pinMode(btnrowpins[i], INPUT_PULLUP);
  }
  // LED drive lines
  for (i = 0; i < NUM_LED_ROWS; i++){
    pinMode(ledRows[i], OUTPUT);
    digitalWrite(ledRows[i], LOW);
  }
  // Initialize the debounce counter arrayz
  for (uint8_t i = 0; i < NUM_BTN_COLUMNS; i++){
    for (uint8_t j = 0; j < NUM_BTN_ROWS; j++){
      debounce_count[i][j] = 0;
    }
  }
}

void setup() {
  Serial.begin(9600);
  usbMIDI.setHandleRealTimeSystem(RealTimeSystem);
  pinMode(chip_pin_one, OUTPUT);
  pinMode(chip_pin_two, OUTPUT);
  SPI.begin();
  setuppins();
  for(int i=0; i<4; i++){
    pinMode(gatePins[i], OUTPUT);
  }
  //gate inputs
  pinMode(clkInPin, INPUT);
  pinMode(seqSelPin, INPUT);
  //CV 
  //analogWriteResolution(12);
  //CLKIN
  attachInterrupt(clkInPin, pulseInput, RISING);
  //ENCODER
  pinMode(tempEncRotPin1, INPUT); 
  pinMode(tempEncRotPin2, INPUT);
  digitalWrite(tempEncRotPin1, HIGH);
  digitalWrite(tempEncRotPin2, HIGH);
  attachInterrupt(tempEncRotPin1, updateTempo, CHANGE); 
  attachInterrupt(tempEncRotPin2, updateTempo, CHANGE);
  //ENCODER 2
  pinMode(seqEncRotPin1, INPUT); 
  pinMode(seqEncRotPin2, INPUT);
  digitalWrite(seqEncRotPin1, HIGH);
  digitalWrite(seqEncRotPin2, HIGH);
  attachInterrupt(seqEncRotPin1, updatePattern, CHANGE); 
  attachInterrupt(seqEncRotPin2, updatePattern, CHANGE);
  trigSetInput = (analogRead(seqSelPin)-260)/100;
  trigSetInput = constrain(trigSetInput, 0, 3);
  prevTrigSetInput = trigSetInput;
  analogValue = analogRead(analogPin);
  analogValueLag = analogValue;
  loadPreset();
}

void pulseInput(){
  intervalTime = millis() - extrGtSntTm;
  seqRunning = true;
  seqStep++;
  for(int i=0; i<4; i++){
    if(seqStep % seqSpeeds[speedIndex[i]] == 0){
      if(randomizedRow[i]){
        gateSteps[i] = random(0, seqLengths[i]);
      }else{
        gateSteps[i]++;
      }
    }
  }
  if(seqStep > 2){
    intervalTime = millis() - gateSentTime;
  }
  internalClock = false;  
}

void updateTempo(){
  int MSB = digitalRead(tempEncRotPin1); //MSB = most significant bit
  int LSB = digitalRead(tempEncRotPin2); //LSB = least significant bit
  tempEncoded = (MSB << 1) |LSB; //converting the 2 pin value to single number
  int sum  = (tempLastEncoded << 2) | tempEncoded; //adding it to the previous encoded value
  if(sum == 0b1101 || sum == 0b0100 || sum == 0b0010 || sum == 0b1011) tempEncVal ++;
  if(sum == 0b1110 || sum == 0b0111 || sum == 0b0001 || sum == 0b1000) tempEncVal --;
  if (tempEncVal < 0){
    tempEncVal = 0;
  }
  if(tempEncVal > 1000) tempEncVal = 1000;
  intervalTime = (1000 - tempEncVal) + 20;
  tempLastEncoded = tempEncoded; //store this value for next time
}

void updatePattern(){
  int MSB = digitalRead(seqEncRotPin1); //MSB = most significant bit
  int LSB = digitalRead(seqEncRotPin2); //LSB = least significant bit
  seqEncoded = (MSB << 1) |LSB; //converting the 2 pin value to single number
  int sum  = (seqLastEncoded << 2) | seqEncoded; //adding it to the previous encoded value
  if(sum == 0b1101 || sum == 0b0100 || sum == 0b0010 || sum == 0b1011) seqEncVal ++;
  if(sum == 0b1110 || sum == 0b0111 || sum == 0b0001 || sum == 0b1000) seqEncVal --;
  if (seqEncVal < 0){
    seqEncVal = 0;
  }
  if(seqLengthMode){
    if(seqEncVal > 124) seqEncVal = 124;
    lightsOut();
    lightUntil((seqEncVal/4)%8,seqEncVal/32); 
    seqLengths[gateOutNumber] = seqEncVal/4;
  }else{
    if(seqEncVal > 12) seqEncVal = 12;
    trigSet = seqEncVal/4;
    menuSelect = true;
    menuTimeStp = millis();   
    lightsOut();
    lightPattern(trigSet);
  }
  seqLastEncoded = seqEncoded; //store this value for next time
}
void MCP4922_write(int cs_pin, byte dac, int value) {
  byte low = value & 0xff;
  byte high = (value >> 8) & 0x0f;
  dac = (dac & 1) << 7;
  digitalWrite(cs_pin, LOW);
  SPI.transfer(dac | 0x30 | high);
  SPI.transfer(low);
  digitalWrite(cs_pin, HIGH);
}

static void scan(){
  static uint8_t current = 0;
  uint8_t val;
  uint8_t i, j;

  // Select current columns
  digitalWrite(btncolumnpins[current], LOW);
  digitalWrite(ledcolumnpins[current], LOW);

  // output LED row values
  for (i = 0; i < NUM_LED_ROWS; i++){
    if (LED_buffer[current][i]){
      digitalWrite(ledRows[i], HIGH);
    }
  }
  delay(1);
  // Read the button inputs
  for ( j = 0; j < NUM_BTN_ROWS; j++){
    val = digitalRead(btnrowpins[j]);
    if (val == LOW){
      // active low: val is low when btn is pressed
      if ( debounce_count[current][j] < MAX_DEBOUNCE){
        debounce_count[current][j]++;
        if ( debounce_count[current][j] == MAX_DEBOUNCE ){
          Serial.println("btn Down: ");
          //mute column
          if(current == 0){
            gateMutes[j] = !gateMutes[j];
            gatesMutDwn[j] = true;
            clearPgTmStp[j] = millis();
            anyMuteDown = true;
          }else{
            //menu stuff
            if(menuOpen){
              if(current == 1){
                switch (j) {
                  case 0:
                    //copy
                    for(int i=0; i<32; i++){           
                      cpyTrigs[0][i][0] = trigs[trigSet][i][gateOutNumber];
                      cpyCvVals[0][i][0] = cvVals[trigSet][i][gateOutNumber];
                    }
                    btnAnim = 1;
                    btnAnimTmStp = millis();
                    break;
                  case 1:
                    //paste
                    for(int i=0; i<32; i++){           
                      trigs[trigSet][i][gateOutNumber] = cpyTrigs[0][i][0];
                      cvVals[trigSet][i][gateOutNumber] = cpyCvVals[0][i][0];
                    }
                    btnAnim = 2;
                    btnAnimTmStp = millis();
                    break;
                  case 3:
                    //save
                    savePreset();
                    btnAnim = 3;
                    btnAnimTmStp = millis();
                    break;
                }
              }else if (current == 2){
                recAutomation = !recAutomation;
                recAutomation ? btnAnim = 4 : btnAnim = 0;
              }else if(current == 3){
                speedIndex[j] = 0;
              }else if(current == 4){
                speedIndex[j] = 1;
              }else if(current == 5){
                speedIndex[j] = 2;
              }else if(current == 6){
                speedIndex[j] = 3;
              }else if(current == 8){
                randomizedRow[j] = !randomizedRow[j];
              }
            }else{
              //normal step edit
              LED_buffer[current][j] = !LED_buffer[current][j];
              trigs[trigSet][(current-1)+seqPageMath[j]][gateOutNumber] = !trigs[trigSet][(current-1)+seqPageMath[j]][gateOutNumber];
              noteDown = true;
              if(trigs[trigSet][(current-1)+seqPageMath[j]][gateOutNumber]){
                cvStep = (current-1)+seqPageMath[j];
                digitalWrite(gatePins[gateOutNumber], HIGH);
              }
            }
          }
        }
      }
    }else{
      if ( debounce_count[current][j] > 0){
        debounce_count[current][j]--;
        if ( debounce_count[current][j] == 0 ){
          // If you want to do something when a key is released, do it here:
          if(current == 0){
            gatesMutDwn[j] = false;
            anyMuteDown = false;
          }else{
            noteDown = false;
            digitalWrite(gatePins[gateOutNumber], LOW);
          }
        }
      }
    }
  }
  delay(1);
  digitalWrite(btncolumnpins[current], HIGH);
  digitalWrite(ledcolumnpins[current], HIGH);

  for (i = 0; i < NUM_LED_ROWS; i++){
    digitalWrite(ledRows[i], LOW);
  }
  current++;
  if (current >= NUM_LED_COLUMNS){
    current = 0;
  }
}

void loop() {
  //MIDI CLOCK
  usbMIDI.read();
  //Enoder Btns + Func Btn
  for(int i=0; i<3; i++){
    extBtnSt[i] = analogRead(extBtnPins[i]);
    if(abs(extBtnSt[i] - extBtnStPrev[i]) > 100){
      if(extBtnSt[i] < 2){
        // Serial.print("btnDown: ");
        // Serial.println(i);
        if(i == 0){
          tempBtnDown = true;
          initTmStp = millis();
          internalClock = !internalClock;
          if(!internalClock){
            gateSentTime = millis() - 3000;
          }
        }else if (i==1){
          if(seqLengthMode){
            lightsOut();
            seqLengthMode = false;
            menuSelect = false;
          }else{
            gateBtnDown = true;
            gateBtnTmStp = millis();
            gateOutNumber++;
            if(gateOutNumber > 3){
              gateOutNumber = 0;
            }
            lightsOut();
            menuSelect = true;
            menuTimeStp = millis();  
            lightRow(gateOutNumber);
          }
        }else if(i==2){
          menuOpen = true;
          lightsOut();
        }
      }else{
        if(i==0){
          tempBtnDown = false;
        }else if(i==1){
          gateBtnDown = false;
        }else if(i==2){
          menuOpen = false;
          btnAnim = 0;
          recAutomation = false;
        }
      }
      extBtnStPrev[i] = extBtnSt[i];
    }
  }
  //Reset Everything
  if(tempBtnDown && (millis() - initTmStp) > 1000){
    initAll();
  }
  //Reset Current Page
  for(int i=0; i<4; i++){
    if(gatesMutDwn[i] && (millis() - clearPgTmStp[i]) > 3000){
      initPage(i);
    }
  }
  //Seq Length Mode
  if(gateBtnDown && (millis() - gateBtnTmStp) > 300 && !seqLengthMode){
    seqLengthMode = true;
    gateOutNumber--; 
    if(gateOutNumber < 0){
      gateOutNumber = 3;
    }
    seqEncVal = seqLengths[gateOutNumber]*4;
    seqLastEncoded = seqEncVal;
    lightsOut();
    lightUntil((seqLengths[gateOutNumber])%8,seqLengths[gateOutNumber]/8);
    gateBtnTmStp = millis();
  }
  //CV into trigset
  trigSetInput = (analogRead(seqSelPin)-350)/62;
  trigSetInput = constrain(trigSetInput, 0, 3);
  if(abs(trigSetInput - prevTrigSetInput) > 0){
    //Serial.print("CV Pattern Set Change: ");Serial.println(trigSetInput);
    trigSet = trigSetInput; 
    menuSelect = true;
    menuTimeStp = millis();   
    lightsOut();
    lightPattern(trigSet);           
    prevTrigSetInput = trigSetInput; 
  }
  //ALl Btns
  scan();
  //CV Knob
  analogValue = analogRead(analogPin);
  if(abs(analogValue - analogValueLag) > 1){
    if(seqRunning && recAutomation){
      cvVals[trigSet][gateSteps[gateOutNumber]][gateOutNumber] = analogValue;
      knobtoDac();
    }else if(noteDown){
      cvVals[trigSet][cvStep][gateOutNumber] = analogValue;
      knobtoDac();
    }
    analogValueLag = analogValue;
  }


  
  //Internal Metro
  if(internalClock){
    if(millis() - prevMetroTime > intervalTime){
      seqStep++;
      for(int i=0; i<4; i++){
        if(seqStep % seqSpeeds[speedIndex[i]] == 0){
          if(randomizedRow[i]){
            gateSteps[i] = random(0, seqLengths[i]);
          }else{
            gateSteps[i]++;
          }
        }
      }
      seqRunning = true;
      prevMetroTime = millis();
    } 
  }

  //Sequencer
  if(abs(seqStep - prevSeqStep) > 0 && seqRunning){
    allGatesOff = true;
    if(seqStep > 31) seqStep = 0;

    for(int i=0; i<4; i++){
      if(gateSteps[i] > seqLengths[i]) gateSteps[i] = 0;
    }

    if(!menuSelect && !seqLengthMode && !menuOpen){
      lightsOut();
      lightActiveSteps();
      for(int i=0; i<4; i++){
        if(i==gateOutNumber){
          lightSingle(gateSteps[i]%8,gateSteps[i]/8);
        }
      }
    }
    //turn gates off if on
    for(int i=0; i<4; i++){
      if(seqStep % seqSpeeds[speedIndex[i]] == 0){
        digitalWriteFast(gatePins[i], LOW);
      }
    }
    delay(1);
    //gate outs
    for(int i=0; i<4; i++){
      if(trigs[trigSet][gateSteps[i]][i] && !gateMutes[i]){
        digitalWriteFast(gatePins[i], HIGH);
      }
    }
    //cv outs
    if(cvVals[trigSet][gateSteps[0]][0] > 0 && !gateMutes[0]){
      MCP4922_write(chip_pin_two, 1, cvVals[trigSet][gateSteps[0]][0]*4);
    }
    if(cvVals[trigSet][gateSteps[1]][1] > 0 && !gateMutes[1]){
      MCP4922_write(chip_pin_one, 1, cvVals[trigSet][gateSteps[1]][1]*4);
    }
    if(cvVals[trigSet][gateSteps[2]][2] > 0 && !gateMutes[2]){
      MCP4922_write(chip_pin_one, 0, cvVals[trigSet][gateSteps[2]][2]*4);
    }
    if(cvVals[trigSet][gateSteps[3]][3] > 0 && !gateMutes[3]){
      MCP4922_write(chip_pin_two, 0, cvVals[trigSet][gateSteps[3]][3]*4);
    }

    gateSentTime = millis();
    extrGtSntTm = gateSentTime;
    prevSeqStep = seqStep;
  }

  //LED Stuff
  if(menuOpen){
    if(btnAnim !=0){
      if(millis() > blkTmrM+100){
        switch (btnAnim) {
            case 1:
              LED_buffer[1][0] = !LED_buffer[1][0];
              break;
            case 2:
              LED_buffer[1][1] = !LED_buffer[1][1];
              break;
            case 3:
              LED_buffer[1][3] = !LED_buffer[1][3];
              break;
            case 4:
              LED_buffer[2][0] = !LED_buffer[2][0];
              break;
        }
        blkTmrM = millis();
      }
      if(millis() > btnAnimTmStp + 500 && btnAnim != 4){
        btnAnim = 0;
      }
    }else{
      LED_buffer[1][0] = true;
      LED_buffer[1][1] = true;
      LED_buffer[1][3] = true;
      //LED_buffer[2][0] = recAutomation;    
      for(int r=0; r<4; r++){
        randomizedRow[r] ? LED_buffer[8][r] = true : LED_buffer[8][r] = false;
        for(int c=0; c<4; c++){
          if(speedIndex[c] >= r){
            LED_buffer[r+3][c] = true;
          }else{
            LED_buffer[r+3][c] = false;
          }  
        }
      }
    }
  }
  //reset seq
  if(millis() > gateSentTime + 3000 && !menuSelect && !seqLengthMode && !menuOpen){
    lightsOut();
    resetSeq();
    lightActiveSteps();
    extrGtSntTm = 0;
  }
  if(millis() > menuTimeStp + 300){
    menuSelect = false;
  }
  //Mute Leds
  for(int i=0; i<4; i++){
    if(!gateMutes[i] && i != gateOutNumber){
      LED_buffer[0][i] = true;
    }else if(!gateMutes[i] && gateOutNumber == i){
      if(millis() > blkTmr+200){
        LED_buffer[0][i] = !LED_buffer[0][i];
        blkTmr = millis();
      }
    }else if(gateMutes[i] && i == gateOutNumber){
      if(millis() > blkTmrM+100){
        LED_buffer[0][i] = !LED_buffer[0][i];
        blkTmrM = millis();
      }
    }else{
      LED_buffer[0][i] = false;
    }
  }
}
void knobtoDac(){
  switch (gateOutNumber) {
   case 0:
     MCP4922_write(chip_pin_two, 1, analogValue*4);
     break;
   case 1:
     MCP4922_write(chip_pin_one, 1, analogValue*4);
     break;
   case 2:
     MCP4922_write(chip_pin_one, 0, analogValue*4);
     break;
   case 3:
     MCP4922_write(chip_pin_two, 0, analogValue*4);
     break;
  }
}
void savePreset(){
  int trigSpot = 0;
  int cvSpot = 512;
  int lengthSpot = 1025;
  int randomizeSpot = 1029;
  int speedSpot = 1033;
  for(int i=0; i<4; i++){
    EEPROM.write(i+lengthSpot, seqLengths[i]);
    EEPROM.write(i+randomizeSpot, randomizedRow[i]);
    EEPROM.write(i+speedSpot, speedIndex[i]);
    for(int j=0; j<32; j++){
      for(int s=0; s<4; s++){
        EEPROM.write(trigSpot, trigs[i][j][s]);
        EEPROM.write(cvSpot, cvVals[i][j][s] / 4);
        trigSpot++;
        cvSpot++;
      } 
    }
  }
  EEPROM.write(1037, tempEncVal/4);
  Serial.println("done saving");
}
void loadPreset(){
  int trigSpot = 0;
  int cvSpot = 512;
  int lengthSpot = 1025;
  int randomizeSpot = 1029;
  int speedSpot = 1033;
  for(int i=0; i<4; i++){
    seqLengths[i] = EEPROM.read(i+lengthSpot);
    randomizedRow[i] = EEPROM.read(i+randomizeSpot);
    speedIndex[i] = EEPROM.read(i+speedSpot);
    for(int j=0; j<32; j++){
      for(int s=0; s<4; s++){
        trigs[i][j][s] = EEPROM.read(trigSpot);
        cvVals[i][j][s] = EEPROM.read(cvSpot) * 4;
        Serial.println(cvVals[i][j][s]);
        trigSpot++;
        cvSpot++;
      } 
    }
  }
  tempEncVal = EEPROM.read(1037) * 4;
  if(tempEncVal > 1000) tempEncVal = 1000;
  intervalTime = (1000 - tempEncVal) + 20;
  tempLastEncoded = tempEncoded;
  Serial.println("done loading");
}
void resetSeq(){
  seqStep = 31;
  for(int i=0; i<4; i++){
    gateSteps[i] = 31;
    if(allGatesOff){
      digitalWriteFast(gatePins[i], LOW);  
    }
  }
  allGatesOff = false;
  prevSeqStep = 1;
  seqRunning = false;
  internalClock = false;
}
void initAll(){
  Serial.println("clear everything");
  lightsOut();
  lightAll();
  for(int i=0; i<4; i++){
    gateMutes[i] = false;
    seqLengths[i] = 31;
    randomizedRow[i] = false;
    for(int j=0; j<32; j++){
      for(int s=0; s<4; s++){
        trigs[i][j][s] = false;
        cvVals[i][j][s] = 0;
      } 
    }
  }
  seqEncVal = 0;
  seqLastEncoded = seqEncVal;
  gateOutNumber = 0;
  resetSeq();
  gateSentTime = millis() - 3000;
}
void initPage(int gateNumber){
  Serial.println("clear page");
  lightsOut();
  lightAll();
  for(int j=0; j<32; j++){
    for(int s=0; s<4; s++){
      trigs[trigSet][j][gateNumber] = false;
      cvVals[trigSet][j][gateNumber] = 0;
    } 
  }
  gateMutes[gateNumber] = false;
}

void lightPattern(int column){
  for(int i=0; i<NUM_LED_ROWS; i++){
    LED_buffer[(column+1)+column][i] = true;
    LED_buffer[(column+2)+column][i] = true;
  }
}
void lightSingle(int column, int row){
  if(trigs[trigSet][gateSteps[gateOutNumber]][gateOutNumber]){
    LED_buffer[column+1][row] = false;
  }else{
    LED_buffer[column+1][row] = true;
  }
}
void lightRow(int row){
  for(int j=0; j<NUM_LED_COLUMNS; j++){
    LED_buffer[j][row] = true;
  }
}
void lightsOut(){
  for (int i = 0; i < NUM_LED_ROWS; i++){
    for(int j=0; j<NUM_LED_COLUMNS; j++){
      if(j > 0){
        LED_buffer[j][i] = false;
      }
    }
  }
}
void lightAll(){
  menuSelect = true;
  menuTimeStp = millis();
  for (int i = 0; i < NUM_LED_ROWS; i++){
    for(int j=0; j<NUM_LED_COLUMNS; j++){
      LED_buffer[j][i] = true;
    }
  }  
}
void lightActiveSteps(){
  for (int i = 0; i < NUM_LED_ROWS; i++){
    for(int j=0; j<NUM_LED_COLUMNS; j++){
      if(trigs[trigSet][j-1+seqPageMath[i]][gateOutNumber] && j > 0){
        LED_buffer[j][i] = true;
      }
    }
  }
}
void lightUntil(int col, int row){
  for(int i=0; i<8; i++){
    if(i <= col%8){
      LED_buffer[i+1][row] = true;
    }else{
      LED_buffer[i+1][row] = false;
    }
  }
  if(row == 1){
    lightRow(0); 
  }else if(row == 2){
    lightRow(0); 
    lightRow(1); 
  }else if(row == 3){
    lightRow(0); 
    lightRow(1);
    lightRow(2); 
  }
}
//MIDI CLOCK
void RealTimeSystem(byte realtimebyte) { 
  if(realtimebyte == START || realtimebyte == CONTINUE) { 
    counter = 0;
    seqRunning = false;
    resetSeq();    
  } 
  
  if(realtimebyte == 248) { 
    counter++; 
    if(counter == 6) {     
      counter = 0; 
    }   
    if(counter == 1){
      internalClock = false;
      intervalTime = millis() - extrGtSntTm;
      seqRunning = true;
      seqStep++;
      for(int i=0; i<4; i++){
        if(seqStep % seqSpeeds[speedIndex[i]] == 0){
          if(randomizedRow[i]){
            gateSteps[i] = random(0, seqLengths[i]);
          }else{
            gateSteps[i]++;
          }
        }
      }
    }
  } 
  if(realtimebyte == STOP) {
    resetSeq();
  } 
}
