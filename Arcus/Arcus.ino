#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioSynthWaveform       snareSMod;      //xy=66,311.96427059173584
AudioSynthWaveform       snareNAmpMod;   //xy=94.0000114440918,254.96426916122437
AudioSynthNoiseWhite     snareN;         //xy=111.00001525878906,217.71426725387573
AudioSynthWaveformModulated snareS;   //xy=194.7500114440918,318.2142701148987
AudioSynthWaveformDc     snareSEnv;            //xy=199.7500114440918,360.7142701148987
AudioEffectMultiply      snareNMulti;    //xy=246.25003814697266,226.71426844596863
AudioSynthWaveformDc     snareNEnv;            //xy=254.75000762939453,266.96426939964294
AudioEffectMultiply      snareSMult;      //xy=352.2500114440918,334.4642701148987
AudioEffectMultiply      snareNMultF;      //xy=401.00000762939453,249.4642686843872
AudioSynthWaveformDc     hhEnv;          //xy=416.32140350341797,415.6427822113037
AudioSynthNoiseWhite     hhNoise;        //xy=418.32140350341797,376.6427822113037
AudioSynthSimpleDrum     kickClick;      //xy=517.1785736083984,134.92853355407715
AudioSynthSimpleDrum     kickOne;        //xy=519.1785736083984,100.92853355407715
AudioPlaySdRaw           playSdRaw1;     //xy=532.8571270533971,527.1428428377425
AudioSynthWaveformDc     sampleEnv;            //xy=538.57139478411,587.142841407231
AudioMixer4              snareMixer;     //xy=556.0000076293945,275.21427059173584
AudioEffectMultiply      hhMulti;        //xy=556.321403503418,399.6427822113037
AudioInputI2S            i2s2;           //xy=621.4285354614258,681.4285926818848
AudioMixer4              kickMixer;      //xy=663.1785736083984,136.17853546142578
AudioFilterStateVariable hhFilter;       //xy=688.3214111328125,392.1427803039551
AudioFilterStateVariable snareFilter;    //xy=711.2500076293945,280.7142696380615
AudioEffectMultiply      sampMulti;      //xy=737.1428527832031,561.4285583496094
AudioSynthSimpleDrum     tom;          //xy=745.2857273646763,489.99997111729203
AudioMixer4              extMixer;         //xy=787.1428527832031,704.2856826782227
AudioMixer4              drumMixer;     //xy=915.8214569091797,302.57140731811523
AudioMixer4              drumInstMixer;         //xy=967.142857142857,564.2857110159737
AudioRecordQueue         queue1;         //xy=975.7142868041992,775.7142872810364
AudioAnalyzePeak         peak1;          //xy=977.1428031921387,719.9999771118164
AudioEffectBitcrusher    bitcrusher1;    //xy=1098.5714111328125,442.85716342926025
AudioFilterStateVariable delayFilter;        //xy=1233.392910003662,586.2499732971191
AudioEffectDelay         delay1;         //xy=1234.642910003662,698.7499694824219
AudioMixer4              delayMixer;         //xy=1243.392910003662,498.7499694824219
AudioFilterStateVariable globalFilter;        //xy=1427.1427841186523,501.4285583496094
AudioSynthWaveform       pulseOut;      //xy=1482.8571428571427,571.4285714285713
AudioMixer4              pulseOutMixer;         //xy=1648.5714721679688,522.8571395874023
AudioOutputI2S           i2s1;           //xy=1814.285717010498,464.28577995300293
AudioConnection          patchCord1(snareSMod, 0, snareS, 0);
AudioConnection          patchCord2(snareNAmpMod, 0, snareNMulti, 1);
AudioConnection          patchCord3(snareN, 0, snareNMulti, 0);
AudioConnection          patchCord4(snareS, 0, snareSMult, 0);
AudioConnection          patchCord5(snareSEnv, 0, snareSMult, 1);
AudioConnection          patchCord6(snareNMulti, 0, snareNMultF, 0);
AudioConnection          patchCord7(snareNEnv, 0, snareNMultF, 1);
AudioConnection          patchCord8(snareSMult, 0, snareMixer, 1);
AudioConnection          patchCord9(snareNMultF, 0, snareMixer, 0);
AudioConnection          patchCord10(hhEnv, 0, hhMulti, 1);
AudioConnection          patchCord11(hhNoise, 0, hhMulti, 0);
AudioConnection          patchCord12(kickClick, 0, kickMixer, 1);
AudioConnection          patchCord13(kickOne, 0, kickMixer, 0);
AudioConnection          patchCord14(playSdRaw1, 0, sampMulti, 0);
AudioConnection          patchCord15(sampleEnv, 0, sampMulti, 1);
AudioConnection          patchCord16(snareMixer, 0, snareFilter, 0);
AudioConnection          patchCord17(hhMulti, 0, hhFilter, 0);
AudioConnection          patchCord18(i2s2, 0, extMixer, 0);
AudioConnection          patchCord19(i2s2, 0, drumInstMixer, 2);
AudioConnection          patchCord20(i2s2, 1, extMixer, 1);
AudioConnection          patchCord21(kickMixer, 0, drumMixer, 0);
AudioConnection          patchCord22(hhFilter, 2, drumMixer, 2);
AudioConnection          patchCord23(snareFilter, 1, drumMixer, 1);
AudioConnection          patchCord24(sampMulti, 0, drumInstMixer, 1);
AudioConnection          patchCord25(tom, 0, drumMixer, 3);
AudioConnection          patchCord26(extMixer, queue1);
AudioConnection          patchCord27(extMixer, peak1);
AudioConnection          patchCord28(extMixer, 0, drumInstMixer, 3);
AudioConnection          patchCord29(drumMixer, 0, drumInstMixer, 0);
AudioConnection          patchCord30(drumInstMixer, bitcrusher1);
AudioConnection          patchCord31(bitcrusher1, 0, delayMixer, 0);
AudioConnection          patchCord32(delayFilter, 0, delayMixer, 3);
AudioConnection          patchCord33(delay1, 0, delayFilter, 0);
AudioConnection          patchCord34(delayMixer, delay1);
AudioConnection          patchCord35(delayMixer, 0, globalFilter, 0);
AudioConnection          patchCord36(globalFilter, 0, pulseOutMixer, 0);
AudioConnection          patchCord37(globalFilter, 0, i2s1, 0);
AudioConnection          patchCord38(pulseOut, 0, pulseOutMixer, 1);
AudioConnection          patchCord39(pulseOutMixer, 0, i2s1, 1);
AudioControlSGTL5000     sgtl5000_1;     //xy=1564.2856903076172,354.2857303619385
// GUItool: end automatically generated code




///Arcus
///Teensy 3.2
//USB Type: Serial + MIDI
///////////////////////////////////////////////////////////////////////////////////////
//===================================================================================//


#define FASTLED_ALLOW_INTERRUPTS 0
#include <FastLED.h>
#include <Metro.h>

//SD
#define SDCARD_CS_PIN    10
#define SDCARD_MOSI_PIN  7
#define SDCARD_SCK_PIN   14

//peak detect stuff
float thresholdMin = .5; // minimum reading, avoid noise and false starts
const int peakTrackMillis = 2;
const int aftershockMillis = 15; // 5aftershocks & vibration reject

//leds
#define DATA_PIN 0
#define NUM_LEDS 32
#define COLOR_ORDER GRB
CRGB leds[NUM_LEDS];
int blinkBrightness;

//Mux control pins
int s0 = 2;
int s1 = 3;
int s2 = 4;
int s3 = 5;
//Mux in "SIG" pin
int SIG_pin = 1;
int SIG_pin_two = 15;
unsigned long readTime;
unsigned long prevReadTime;
bool readFlag;
int readCount = 0;

//btns
int btnStatus[16];
int prevBtnStatus[16];
int extBtnStatus[2] = {1,1};
int prevExtBtnStatus[2] = {1,1};


bool transportDown;
bool btnDown;
unsigned long clearTimeStamp;
unsigned long menuTmStp;
//Knobs
float analogValues[16]; 
float analogValuesLag[16];
bool analogOpen[16];
unsigned long analogOpenTime[16];

//DrumVars
bool firstRun = true;
//Levels
float levels[5];
//Decays
int decays[5];
//Pitchs
float pitches[5];
int samplePitch;
//fx sends
float fxSendAmt[5];
// int for bits
int crushBits = 44100;

//seqTriggers//params
bool trigs[5][64];
float params[5][64][7];
int instIndex;
int prevInstIndex = -1;

//sample names
const char *wavSamples[16] = {
  "1.RAW","2.RAW","3.RAW","4.RAW",
  "5.RAW","6.RAW","7.RAW","8.RAW",
  "9.RAW","10.RAW","11.RAW","12.RAW",
  "13.RAW","14.RAW","15.RAW","16.RAW",
};
bool sampleSlot[16];
bool recSampMode;
bool recArmed;
int sampIndex;
float extPeakVal;
bool peakReached;
bool recording;
File frec;
unsigned long recTimeStamp;
unsigned long peakTimeStamp;


//sequencer
Metro metronome = Metro(300);
int metroInt = 300;
int seqStep;
int prevSeqStep;
int ledSeqStep;
int seqPage;
int seqPageArray[4] = {0,16,32,48};
bool recAutMode = false;
bool seqPlaying = false;
bool pageChange;
int stepLimit = 15;
int syncNumber = 7;
//slave pulse
bool slaveClock;
unsigned long lastPulse;
bool doubleStep;
unsigned long intervalTime;
//slave MIDI
byte counter; 
byte CLOCK = 248; 
byte START = 250; 
byte CONTINUE = 251; 
byte STOP = 252; 
//Master pulse
bool sendPulse;
bool receivePulse;
unsigned long pulseSentTime;
bool pulseSent;


int colorArray[5][3] = {
  {255,0,0,},
  {0,255,255},
  {255,0,255},
  {255,255,0},
  {0,0,255},
};

//preset stuff
const int chipSelect = 10;
int presetNumber = -1;
File myFile;
String fileNames[4] = {"1.txt","2.txt","3.txt","4.txt"};
int currentPreset;
bool presetLoading;
float inputOne;
float inputTwo;


void setup() {
  Serial.begin(9600);  
  
  LEDS.addLeds<WS2812,DATA_PIN,COLOR_ORDER>(leds,NUM_LEDS);
  LEDS.setBrightness(128);

  
  //MIDI CLOCK
  usbMIDI.setHandleRealTimeSystem(RealTimeSystem);
  AudioMemory(116);
  
  //Kick
  kickOne.frequency(60);
  kickOne.length(1000);
  kickOne.secondMix(.5);
  kickOne.pitchMod(.7);
  kickClick.frequency(1000);
  kickClick.length(10);
  kickClick.pitchMod(.9);  
  //Snare
  snareN.amplitude(1);
  snareNAmpMod.begin(1,40,WAVEFORM_SAWTOOTH_REVERSE);
  snareSMod.begin(.7,50,WAVEFORM_SAWTOOTH_REVERSE);
  snareS.begin(1,50,WAVEFORM_SQUARE);
  snareFilter.frequency(1500);
  snareFilter.resonance(2);
  //High Hat
  hhNoise.amplitude(.7);
  hhFilter.frequency(2000);
  hhFilter.resonance(4);
  //Tom
  tom.frequency(200);
  tom.length(500);
  tom.secondMix(1);
  tom.pitchMod(.55);

  //Bits
  bitcrusher1.bits(16);
  bitcrusher1.sampleRate(44100);
  //Delay
  delayMixer.gain(3,0);
  delayFilter.frequency(5000);
  //Global Filter
  globalFilter.frequency(15000);
  globalFilter.resonance(2);

  //pulse Out
  pulseOut.begin(1, 30, WAVEFORM_PULSE); 
  pulseOut.pulseWidth(0);
  //Initialize values 
  for(int i=0; i<5; i++){
      levels[i] = 1;
      pitches[i] = 1;
      decays[i] = 200;
  }


  SPI.setMOSI(SDCARD_MOSI_PIN);
  SPI.setSCK(SDCARD_SCK_PIN);
  if (!(SD.begin(SDCARD_CS_PIN))) {
    // stop here, but print a message repetitively
    while (1) {
      Serial.println("Unable to access the SD card");
      delay(500);
    }
  }
  for(int i=0; i<16; i++){
    if (SD.exists(wavSamples[i])) {
      sampleSlot[i] = true;
    }
  }
  //peak mixer settings
  sendPulseCheck();
  receivePulseCheck();
  resetSeq();

  sgtl5000_1.enable();
  //sgtl5000_1.volume(.1);
  sgtl5000_1.lineOutLevel(29);
  sgtl5000_1.adcHighPassFilterDisable();


  //Mux
  pinMode(s0, OUTPUT); 
  pinMode(s1, OUTPUT); 
  pinMode(s2, OUTPUT); 
  pinMode(s3, OUTPUT); 
  pinMode(SIG_pin, INPUT);
  pinMode(SIG_pin_two, INPUT);
  digitalWrite(s0, LOW);
  digitalWrite(s1, LOW);
  digitalWrite(s2, LOW);
  digitalWrite(s3, LOW);
  

  //led starup
  for(int i=0; i<NUM_LEDS; i++){
    leds[i].setRGB(0,0,255);
    delay(30);
    FastLED.show();
  }
  for(int i=0; i<NUM_LEDS; i++){
    leds[i] = CRGB::Black;
  }
}
void checkSeqStep(int inst){
  if(seqStep > -1){
    if (seqPlaying && params[inst][seqStep][0] > 0 && !(analogOpen[0] && instIndex == inst)){
      levels[inst] = params[inst][seqStep][0];
    }
    if (seqPlaying && params[inst][seqStep][1] > 0 && !(analogOpen[1] && instIndex == inst)){
      decays[inst] = params[inst][seqStep][1];
    }
    if (seqPlaying && params[inst][seqStep][2] > 0 && !(analogOpen[2] && instIndex == inst)){
      pitches[inst] = params[inst][seqStep][2];
    }
  }
}
void playKick(){
  checkSeqStep(0);
  drumMixer.gain(0,levels[0]);
  kickOne.frequency((30*pitches[0]) + 20);
  kickClick.frequency(1000*pitches[0]);
  kickOne.length(decays[0]);
  kickClick.length((decays[0] / 100)+1);
  kickOne.noteOn();
  kickClick.noteOn();
}
void playSnare(){
  checkSeqStep(1);
  drumMixer.gain(1,levels[1]/3);
  snareFilter.frequency((3000 * pitches[1]) + 50);
  snareSMod.frequency(50 * pitches[1]);
  snareS.frequency(150 * pitches[1]);
  snareNEnv.amplitude(1,0);
  snareNEnv.amplitude(0,decays[1]);  
  snareSEnv.amplitude(1,0);
  snareSEnv.amplitude(0,decays[1] / 3); 
}
void playHh(){
  checkSeqStep(2);
  hhFilter.frequency(pitches[2] * 5000);
  drumMixer.gain(2,levels[2]);
  hhEnv.amplitude(.3,0);
  hhEnv.amplitude(0,decays[2]);  
}
void playTom(){
  checkSeqStep(3);
  drumMixer.gain(3,levels[3]);
  tom.length(decays[3]);
  tom.frequency((500*pitches[3]) + 10);
  tom.noteOn();
}
void playSample(){
  checkSeqStep(4);
  drumInstMixer.gain(1,levels[4]);
  sampleEnv.amplitude(1,0);
  int playSampIndex = (pitches[4] - 1);
  playSdRaw1.stop();
  playSdRaw1.play(wavSamples[playSampIndex]);
  sampleEnv.amplitude(0,decays[4]);
}

void checkCrushBus(int inst){
  if(seqStep > -1){
    if (seqPlaying && params[inst][seqStep][3] > 0 && !analogOpen[3]){
      fxSendAmt[0] = params[inst][seqStep][3];
    }
  }
  bitcrusher1.sampleRate(fxSendAmt[0]);
}
void checkDelayBus(int inst){
  if(seqStep > -1){
    if (seqPlaying && params[inst][seqStep][4] > 0 && !analogOpen[4]){
      fxSendAmt[1] = params[inst][seqStep][4];
    }
    if (seqPlaying && params[inst][seqStep][5] > 0 && !analogOpen[5]){
      fxSendAmt[2] = params[inst][seqStep][5];
    }  
  }
  delay1.delay(0,fxSendAmt[1]);
  delayMixer.gain(3,fxSendAmt[2]);
}
void checkGlobalFilterBus(int inst){
  if(seqStep > -1){
    if (seqPlaying && params[inst][seqStep][6] > 0 && !analogOpen[6]){
      fxSendAmt[3] = params[inst][seqStep][6];
    } 
  }
  globalFilter.frequency((fxSendAmt[3] * 12)+60);
}

void setLevels(float value){
  levels[instIndex] = value / 1023;
  if(seqStep > -1){
    //if(recAutMode && !seqPlaying && btnDown){
    if(!seqPlaying && btnDown){
      params[instIndex][seqStep][0] = levels[instIndex];
    }else if(seqPlaying && recAutMode){
      params[instIndex][seqStep][0] = levels[instIndex];
    }
  }
}
void setDecays(int value){
  decays[instIndex] = value;
  if(seqStep > -1){
    if(!seqPlaying && btnDown){
      params[instIndex][seqStep][1] = decays[instIndex];
    }else if(seqPlaying && recAutMode){
      params[instIndex][seqStep][1] = decays[instIndex];
    }
  }
}
void setPitches(float value){
  pitches[instIndex] = value / 511;
  if(instIndex == 4){
    samplePitch = value / 63.9;
    pitches[instIndex] = samplePitch + 1;
  }
  if(seqStep > -1){
    if(!seqPlaying && btnDown){
      params[instIndex][seqStep][2] = pitches[instIndex];
    }else if(seqPlaying && recAutMode){
      params[instIndex][seqStep][2] = pitches[instIndex];
    }
  }
}
void setfxSend(int knob, int paramNumber, float value, int scaler){
  fxSendAmt[knob] = value / scaler;
  if(seqStep > -1){
    if(!seqPlaying && btnDown){
      for(int i=0; i<5; i++){
        params[i][seqStep][paramNumber] = fxSendAmt[knob];
      }
    }else if(seqPlaying && recAutMode){
      for(int i=0; i<5; i++){
        params[i][seqStep][paramNumber] = fxSendAmt[knob];
      }
    }
  }
}


void loop() {
  usbMIDI.read();
  checkDelayBus(0);
  checkCrushBus(0);
  checkGlobalFilterBus(0);

  readTime = millis();
  setMuxPin(readCount);
  
  if((readTime - prevReadTime) > 5){
    analogValues[readCount] = analogRead(SIG_pin_two);
    btnStatus[readCount] = digitalRead(SIG_pin);   
    if(readCount == 9 || readCount == 10){
      extBtnStatus[readCount-9] = digitalRead(SIG_pin_two);
    }
    readCount++;
    if(readCount > 15){
      readCount = 0;
    }
    prevReadTime = readTime;
  }
  
  //Record Samples
  if(recSampMode){
    if(peak1.available()){
      extPeakVal = peak1.read();
      int ledPeak = extPeakVal * 16;
      int ledThresh = constrain(thresholdMin * 16,0,15);

      for(int i=0; i<16; i++){
        if(i<ledPeak){
          leds[i+16].setRGB(255,0,0);
        }else{
          leds[i+16].setRGB(0,0,0);
        }
        if(sampleSlot[i]){
          leds[i].setRGB(0,0,255);
        }else{
          leds[i].setRGB(0,0,0);
        }
        leds[sampIndex].setRGB(255,0,0);
      }
      if(recording){
        leds[ledThresh+16].setRGB(0,blinkBrightness,0);
      }else{
        if(peakReached){
          leds[ledThresh+16].setRGB(0,255,255);
        }else{
          leds[ledThresh+16].setRGB(255,255,0);
        }
        peakDetect(extPeakVal);
      }
    }
  }
  
  if(recArmed){
    if(peakReached){
      startRecording(sampIndex);
      recArmed = false;
      recording = true;
      recTimeStamp = millis();
    }
  }
  if(recording){
    continueRecording();
  }
  if((millis() - recTimeStamp > 2000) && recording){
    stopRecording();
  }

  //mux
  if(!recording){
    for (int i = 0; i < 16; ++i){
      //btns
      if ((abs(btnStatus[i] - prevBtnStatus[i]) > 0)){
        if(recSampMode){
          if (btnStatus[i] == LOW && prevBtnStatus[i] == HIGH){
            sampIndex = i;
            //delete sample if present
            if (SD.exists(wavSamples[sampIndex]) && !recording) {
              Serial.print("Deleted: ");
              Serial.println(sampIndex);
              SD.remove(wavSamples[sampIndex]);
              sampleSlot[sampIndex] = false;
            }
            lightsOut(32);
            leds[sampIndex+16].setRGB(255, 0, 0);
            recArmed = true;
            peakReached = false;
          }
        }else{
          if (btnStatus[i] == LOW && prevBtnStatus[i] == HIGH){
            if(transportDown){
              if(i == 0){
                seqPlaying = !seqPlaying;
                countSteps();
                resetSeq();                  
              }
              if(i > 3 && i < 8){
                syncSettings(i);
              }else if (i > 7 && i < 12){
                savePreset(i-8);
                currentPreset = i-8;
              }else if (i > 11){
                for(int i=0; i<4; i++){
                  leds[i+28].setRGB(0,0,0);    
                }
                loadPreset(i-12);
                currentPreset = i-12;
              }
            }else{
              if(!trigs[instIndex][i+seqPage]){
                if(!presetLoading){
                  switch (instIndex) {
                    case 0:
                      playKick();
                      break;
                    case 1:
                      playSnare();
                      break;
                    case 2:
                      playHh();
                      break;  
                    case 3:
                      playTom();
                      break;  
                    case 4:
                      playSample();
                      break;  
                  }              
                }
                if(!seqPlaying){
                  seqStep = i+seqPage;
                  //Serial.print("setStep: ");
                  btnDown = true;
                }
              }
              trigs[instIndex][i+seqPage] = !trigs[instIndex][i+seqPage];
            }
          }else{
            btnDown = false;
            leds[i+16].setRGB(0, 0, 0);
          }
        }
        prevBtnStatus[i] = btnStatus[i];
      }
      // Knobs
      if(i<9){
        if ((abs(analogValues[i] - analogValuesLag[i]) > 20) || (!seqPlaying && recAutMode)){
          analogOpen[i] = true;
        }
        
        if ((analogOpen[i] && (abs(analogValues[i] - analogValuesLag[i]) > 3)) || firstRun || (btnDown && i < 7)){
          analogOpenTime[i] = millis();
          // Serial.print(i);
          // Serial.print(" : ");
          // Serial.println(analogValues[i]);
          switch (i) {
            case 0:
              //Level
              setLevels(analogValues[i]);
              break;
            case 1:
              //Decay
              setDecays(analogValues[i]);
              break;
            case 2:
              //Pitch
              setPitches(analogValues[i]);
              break; 
            case 3:
              //Bit Crush
              crushBits = ((1023 - analogValues[i]) * 43.10);
              setfxSend(0,3,crushBits, 1);
              break;
            case 4: 
              //Delay Time
              setfxSend(1,4,analogValues[i], 4);
              break;
            case 5: 
              //Delay Feedback
              setfxSend(2,5,analogValues[i], 1023);
              break;
            case 6:
              //Global Filter, fxknob, param, value, scaler
              setfxSend(3,6,analogValues[i], 1);
              break;
            case 7:
              if(recSampMode){
                //Input Volume
                extMixer.gain(0,analogValues[i]/511);
                extMixer.gain(1,analogValues[i]/511);
              }else{
                //BPM / seq page
                if(!seqPlaying && !recAutMode){
                  ledSeqStep = constrain(analogValues[i] / 255.75,0,3);
                  seqPage = seqPageArray[ledSeqStep];
                  pageChange = true;
                }else{
                  if(!slaveClock){
                    metroInt = map(analogValues[i], 0, 1023, 500, 75);;
                    metronome.interval(metroInt);
                  }
                }
              }
              break;
            case 8:           
              if(recSampMode){
                thresholdMin = analogValues[i] / 1023;
              }else{
                thresholdMin = .5;
                //inst select
                instIndex = analogValues[i]/204;
                instIndex = constrain(instIndex, 0, 4);
              }
              break;
          }
        }
        analogValuesLag[i] = analogValues[i];
      }
      //ext btns
      if(i < 2){
        if ((abs(extBtnStatus[i] - prevExtBtnStatus[i]) > 0)){
          if (extBtnStatus[i] == LOW && prevExtBtnStatus[i] == HIGH){
            if(transportDown){
              clearTimeStamp = millis();
              menuTmStp = millis();
              lightsOut(32); 
              transportDown = false; 
              lightInst();   
            }else{
              if(i==0){ //rec btn
                clearTimeStamp = millis();
                if(!seqPlaying){
                  //Sample Mode
                  lightsOut(32);
                  recSampMode = !recSampMode;
                  seqPlaying = false;
                  recAutMode = false;
                  peakReached = false;

                  if(recSampMode){
                    lightsOut(32);
                    drumInstMixer.gain(2,0);
                    drumInstMixer.gain(3,1);
                  }else{
                    receivePulseCheck();
                    lightInst();
                  }
                  Serial.print("Rec Sample Mode: ");
                  Serial.println(recSampMode);                  
                }else{ 
                  //rec automation mode
                  lightsOut(32);
                  recAutMode = !recAutMode;
                  lightInst();
                  if(!recAutMode){
                    peakReached = false;
                    recArmed = false;
                  }
                }
              }else if (i==1){//play btn
                menuTmStp = millis();
                if(recSampMode){
                  recSampMode = false;
                  lightsOut(32);
                  receivePulseCheck();
                  lightInst();
                }else{
                  seqPlaying = !seqPlaying;
                  countSteps();
                  resetSeq();                  
                }
              }
            }
          }
          prevExtBtnStatus[i] = extBtnStatus[i];
        }
        if((extBtnStatus[0] == LOW && prevExtBtnStatus[0] == LOW) && (millis() - clearTimeStamp) > 1000){
          clearEverything();
        } 
        if((extBtnStatus[1] == LOW && prevExtBtnStatus[1] == LOW) && (millis() - menuTmStp) > 1000){
          lightsOut(32);
          transportDown = true;
          recSampMode = false;
          seqPlaying = false;
        } 
      }
    }
  }
  for(int i=0; i<16; i++){
    if(analogOpen[i] && abs(millis() - analogOpenTime[i]) > 300){
      analogOpen[i] = false;
    }
  }

  //Pulse Sync
  if(!recSampMode){
    if(peak1.available()){
      extPeakVal = peak1.read();
      peakDetect(extPeakVal);
    }
  }

  //Sequencer //&& !slaveClock
  if(seqPlaying && !slaveClock){
    if (metronome.check() == 1) {
      seqStep++;
      ledSeqStep++;
    }
  }
  //Slave Double Time
  if(millis() >= (lastPulse + intervalTime/2) && receivePulse && doubleStep){
    seqStep++;
    ledSeqStep++;
    doubleStep = false;
  }

  if((abs(seqStep - prevSeqStep) > 0) || pageChange){
    //Serial.println(seqStep);
    if (seqStep > stepLimit && seqPlaying){
      seqStep = 0;
    }  
    if(ledSeqStep > 15){
      ledSeqStep = 0;
    }
    //set seqPage
    if(seqPlaying){
      if(seqStep < 16){
        seqPage = 0;
      }else if(seqStep > 15 && seqStep < 32){
        seqPage = 16;
      }else if(seqStep > 31 && seqStep < 48){
        seqPage = 32;
      }else if(seqStep > 47){
        seqPage = 48;
      }
    }
    if(!transportDown){
      lightsOut(32);
      //background color for inst
      lightInst();
      //seq step
      if(ledSeqStep == -1){
        leds[0].setRGB(255,255,255);
      }else{
        leds[ledSeqStep].setRGB(255,255,255);
      }
    }
    //play sounds
    if(seqPlaying){
      if(!presetLoading){
        if(trigs[0][seqStep]){ playKick(); }
        if(trigs[1][seqStep]){ playSnare(); }
        if(trigs[2][seqStep]){ playHh(); }
        if(trigs[3][seqStep]){ playTom(); }
        if(trigs[4][seqStep]){ playSample(); }
      }
      //pulse out
      if(sendPulse && seqStep % 2 == 0){
        pulseOut.pulseWidth(1);
        pulseSentTime = millis();
        pulseSent = true;
      }
    }

    prevSeqStep = seqStep;
    pageChange = false;
  }

  if(abs(millis() - pulseSentTime > 15)){
    if(pulseSent){
      pulseOut.pulseWidth(0);
      pulseSent = false;
    }
  }

  //blink
  blinkBrightness = 128+127*cos(2*PI/500*millis());

  //transport down LEDS
  if(transportDown){
    if(seqPlaying){
      leds[0].setRGB(blinkBrightness,0,0);
    }else{
      leds[0].setRGB(255,0,0);
    }
    //Sync
    if(syncNumber == 4){
      leds[4].setRGB(blinkBrightness,0,0);
    }else{
      leds[4].setRGB(255,0,0);
    }
    if(syncNumber == 5){
      leds[5].setRGB(0,blinkBrightness,0);
    }else{
      leds[5].setRGB(0,255,0);
    }
    if(syncNumber == 6){
      leds[6].setRGB(0,0,blinkBrightness);
    }else{
      leds[6].setRGB(0,0,255);
    }
    if(syncNumber == 7){
      leds[7].setRGB(0,blinkBrightness,blinkBrightness);
    }else{
      leds[7].setRGB(0,255,255);
    }
    //Load//Save
    for(int i=0; i<16; i++){
      if(i > 7 && i < 12){
        leds[i].setRGB(0,255,0); 
      }else if(i > 11){
        leds[i].setRGB(255,0,0); 
      }
      leds[currentPreset+28].setRGB(0,0,255);
    }
  }
  if(!transportDown){
    //Inst Colos
    if(abs(instIndex - prevInstIndex) > 0){
      lightsOut(32);
      lightInst();
      prevInstIndex = instIndex;
    }
    //Rec Blink
    if(recAutMode){
      for(int i=0; i<16; i++){
        if(i !=ledSeqStep){
          leds[i].setRGB(0,blinkBrightness,0);
        }
      }  
    }
    //light active step
    if(!recSampMode){
      for(int i=0; i<16; i++){
        if(trigs[instIndex][i+seqPage]){
          leds[i+16].setRGB(0,0,255);
        }
      }
    }
  }

  //turn off slave clock
  if(abs(millis() - lastPulse > 2000) && slaveClock){
    seqPlaying = false;
    slaveClock = false;
    intervalTime = 200;
    resetSeq();
  }
  //turn off peak led
  if(abs(millis() - peakTimeStamp > 1000) && peakReached && recSampMode){
    peakReached = false;
    peakTimeStamp = millis();
  }
  
  firstRun = false;
  FastLED.show();
}
void resetSeq(){
  metronome.reset();
  ledSeqStep = -1;
  seqStep = -1;
  seqPage = 0;
}
void countSteps(){
  bool steps16 = false;
  bool steps32 = false;
  bool steps48 = false;
  bool steps64 = false;
  for(int i=0; i<5; i++){
    for(int j=0; j<64; j++){
      if(j<16){
        if(trigs[i][j]) steps16 = true;
      }
      if(j > 15 && j < 32){
        if(trigs[i][j]) steps32 = true;
      }
      if(j > 31 && j < 48){
        if(trigs[i][j]) steps48 = true;
      }
      if(j > 47){
        if(trigs[i][j]) steps64 = true;
      }
    }
  }
  if(steps16) stepLimit = 15;
  if(steps32) stepLimit = 31;
  if(steps48) stepLimit = 47;
  if(steps64) stepLimit = 63;
  Serial.println(stepLimit);
}
void syncSettings(int syncCase){
  lightsOut(32);
  seqPlaying = false;
  resetSeq();
  if(syncCase == 4){
    for(int i=0; i<16; i++){
      leds[i].setRGB(0,0,255); 
      leds[i+16].setRGB(0,0,255); 
      FastLED.show();
      delay(50);
    }
    sendPulse = true;
    receivePulse = false;
  }else if (syncCase == 5){
    for(int i=15; i>0; i--){
      leds[i].setRGB(255,0,0); 
      leds[i+16].setRGB(255,0,0); 
      FastLED.show();
      delay(50);
    }
    receivePulse = true;
    sendPulse = false;
  }else if(syncCase == 6){
    for(int i=0; i<16; i++){
      leds[i].setRGB(0,0,255); 
      leds[i+16].setRGB(0,0,255); 
      FastLED.show();
      delay(25);
    }
    lightsOut(32);
    for(int i=15; i>0; i--){
      leds[i].setRGB(255,0,0); 
      leds[i+16].setRGB(255,0,0); 
      FastLED.show();
      delay(25);
    }
    sendPulse = true;
    receivePulse = true;
  }else{
    for(int i=0; i<32; i++){
      leds[i].setRGB(0,0,255);
      FastLED.show();
    }
    delay(500);
    sendPulse = false;
    receivePulse = false;
  }
  lightsOut(32);
  sendPulseCheck();
  receivePulseCheck();
  //lightInst();
  //transportDown = false;
  syncNumber = syncCase;
}
void receivePulseCheck(){
  if(receivePulse){
    drumInstMixer.gain(2,1);
    drumInstMixer.gain(3,0);
    extMixer.gain(0,0);
    extMixer.gain(1,1);
  }else{
    drumInstMixer.gain(2,0);
    drumInstMixer.gain(3,1);
    extMixer.gain(0,1);
    extMixer.gain(1,1);
  }
}
void sendPulseCheck(){
  if(sendPulse){
    pulseOutMixer.gain(0,0);
    pulseOutMixer.gain(1,.75);  
  }else{
    pulseOutMixer.gain(0,1);
    pulseOutMixer.gain(1,0);
  }
}

void clearEverything(){
  Serial.println("clear");
  lightsOut(32);
  for(int i=0; i<5; i++){
    for(int j=0; j<64; j++){
      trigs[i][j] = false;
      for(int w=0; w<7; w++){
        params[i][j][w] = 0;
      }
    }
  }
  stepLimit = 15;
  recAutMode = false;
  recSampMode = false;
  clearTimeStamp = millis();
  lightInst();
  resetSeq();
}

void lightsOut(int number){
  for (int i = 0; i < number; ++i){
    leds[i].setRGB(0,0,0);
  }
}
void lightInst(){
  for(int i=0; i<16; i++){    
    if(i%4){
      leds[i].setRGB((colorArray[instIndex][0])*.2,(colorArray[instIndex][1])*.2,(colorArray[instIndex][2])*.2);
    }else{
      leds[i].setRGB(colorArray[instIndex][0],colorArray[instIndex][1],colorArray[instIndex][2]);
    }
  }
  if(ledSeqStep == -1){
    leds[0].setRGB(255,255,255);
  }else{
    leds[ledSeqStep].setRGB(255,255,255);
  }
}

void setMuxPin(int channel){
  int controlPin[] = {s0, s1, s2, s3};

    int muxChannel[16][4]={
        {0,0,0,0}, //channel 0
        {1,0,0,0}, //channel 1
        {0,1,0,0}, //channel 2
        {1,1,0,0}, //channel 3
        {0,0,1,0}, //channel 4
        {1,0,1,0}, //channel 5
        {0,1,1,0}, //channel 6
        {1,1,1,0}, //channel 7
        {0,0,0,1}, //channel 8
        {1,0,0,1}, //channel 9
        {0,1,0,1}, //channel 10
        {1,1,0,1}, //channel 11
        {0,0,1,1}, //channel 12
        {1,0,1,1}, //channel 13
        {0,1,1,1}, //channel 14
        {1,1,1,1},  //channel 15
    };

  //loop through the 4 sig
  for(int i = 0; i < 4; i ++){
    digitalWrite(controlPin[i], muxChannel[channel][i]);
  }
}
void startRecording(int wavIndex) {

  Serial.print("Start Recording:");
  Serial.println(wavSamples[wavIndex]);
  sampleSlot[wavIndex] = true;

  frec = SD.open(wavSamples[wavIndex], FILE_WRITE);
  if (frec) {
    queue1.begin();
  }

}
void continueRecording() {
  if (queue1.available() >= 2) {
    byte buffer[512];
    // Fetch 2 blocks from the audio library and copy
    // into a 512 byte buffer.  The Arduino SD library
    // is most efficient when full 512 byte sector size
    // writes are used.
    memcpy(buffer, queue1.readBuffer(), 256);
    queue1.freeBuffer();
    memcpy(buffer+256, queue1.readBuffer(), 256);
    queue1.freeBuffer();
    // write all 512 bytes to the SD card
    frec.write(buffer, 512);
  }
}
void stopRecording() {
  queue1.end();
  if(recording){
    while (queue1.available() > 0) {
      frec.write((byte*)queue1.readBuffer(), 256);
      queue1.freeBuffer();
    }
    frec.close();
  }
  recording = false;
  Serial.println("End Recording:");
}

void peakDetect(float voltage)
{
    // "static" variables keep their numbers between each run of this function
    static int state; // 0=idle, 1=looking for peak, 2=ignore aftershocks
    static int peak; // remember the highest reading
    static elapsedMillis msec; // timer to end states 1 and 2

    switch (state) {
    // IDLE state: wait for any reading is above threshold. Do not set
    // the threshold too low. You don't want to be too sensitive to slight
    // vibration.
    case 0:
      if (voltage > thresholdMin) {
          peak = voltage;
          msec = 0;
          state = 1;
      }
      return;

    // Peak Tracking state: capture largest reading
    case 1:
      if (voltage > peak) {
          peak = voltage;
      }
      if (msec >= peakTrackMillis) {
          peakReached = true;
          if(recSampMode){
            peakTimeStamp = millis();
          }

          if(!recSampMode && receivePulse){
            if(slaveClock){
              countSteps();
              intervalTime = millis() - lastPulse;
            }
            lastPulse = millis();
            slaveClock = true;
            seqPlaying = true;
            doubleStep = true;
            seqStep++;
            ledSeqStep++;
          }

          msec = 0;
          state = 2;
      }
      return;

    // Ignore Aftershock state: wait for things to be quiet again.
    default:
      if (voltage > thresholdMin) {
          msec = 0; // keep resetting timer if above threshold
      }
      else if (msec > aftershockMillis) {
          state = 0; // go back to idle when
      }
    }
}
void RealTimeSystem(byte realtimebyte) { 
  if(realtimebyte == START || realtimebyte == CONTINUE) { 
    //Serial.println("start");
    counter = 0;
    slaveClock = false;
    seqPlaying = false;
    resetSeq();    
  } 
  
  if(realtimebyte == 248) { 
    counter++; 
    if(counter == 6) {     
      counter = 0; 
    }  
    if(counter == 1){
      lastPulse = millis();
      slaveClock = true;
      seqPlaying = true;      
      seqStep++;
      ledSeqStep++; 
    }
  } 
  if(realtimebyte == STOP) {
    //Serial.println("stop");
    slaveClock = false;;
    seqPlaying = false;  
    resetSeq();
  } 
}

void loadPreset(int number){
  playSdRaw1.stop();
  presetLoading = true;
  AudioNoInterrupts();
  //seqPlaying = false;
  String currentPreset = fileNames[number];

  myFile = SD.open(currentPreset.c_str());

  if (myFile) {
    for(int i=0; i<5; i++){
      for(int s=0; s<64; s++){
        inputOne = myFile.parseFloat();
        trigs[i][s] = inputOne;
        for(int p=0; p<7; p++){
          inputTwo = myFile.parseFloat();
          params[i][s][p] = inputTwo;
        }
      }
    }
    // close the file:
    myFile.close();
    countSteps();
  } else {
    // if the file didn't open, print an error:
    Serial.println("error opening file");
  }
  AudioInterrupts();
  presetLoading = false;
}

void savePreset(int number){
  String currentPreset = fileNames[number];
  //Remove File
  if (SD.exists(currentPreset.c_str())) {
    Serial.println("remove the file");
    SD.remove(currentPreset.c_str());
  }
  //open File
  myFile = SD.open(currentPreset.c_str(), FILE_WRITE);
  //if the file opened okay, write to it:

  // bool trigs[5][64];
  // float params[5][64][7];
  if (myFile) {
    for(int i=0; i<5; i++){
      for(int s=0; s<64; s++){
        myFile.println(trigs[i][s]);
        // Serial.print("trigs: ");
        // Serial.print(i);
        // Serial.print(" : ");
        // Serial.print(s);
        // Serial.print(" : ");
        // Serial.println(trigs[i][s]);
        for(int p=0; p<7; p++){
          myFile.println(params[i][s][p]);
          // Serial.print("params : ");
          // Serial.print(i);
          // Serial.print(" : ");
          // Serial.print(s);
          // Serial.print(" : ");
          // Serial.print(p);
          // Serial.print(" : ");
          // Serial.println(params[i][s][p]);
        }
      }
    }
    // close the file:
    myFile.close();
    Serial.print("wrote to file");
  } else {
    // if the file didn't open, print an error:
    Serial.println("error opening file");
  }
}
