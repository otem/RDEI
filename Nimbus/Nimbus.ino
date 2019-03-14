#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioSynthWaveform       voiceOneB;      //xy=387.5,590
AudioSynthWaveform       voiceTwoB;      //xy=387.5,624
AudioSynthWaveform       voiceTwoD;      //xy=389.5,1045
AudioSynthWaveform       voiceOneD;      //xy=390.5,1009
AudioSynthWaveform       voiceThreeB;    //xy=392.5,660
AudioSynthNoiseWhite     noiseVoiceB;    //xy=393.5,694
AudioSynthWaveform       voiceThreeD;    //xy=392.5,1080
AudioSynthNoiseWhite     noiseVoiceD;    //xy=392.5,1114
AudioSynthWaveform       voiceTwoC;      //xy=410.5,845
AudioSynthWaveform       voiceOneC;      //xy=411.5,810
AudioSynthNoiseWhite     noiseVoiceC;    //xy=411.5,917
AudioSynthWaveform       voiceThreeC;    //xy=414.5,881
AudioSynthWaveform       voiceOneA;      //xy=454.5,300
AudioSynthWaveform       voiceTwoA;      //xy=454.5,336
AudioSynthNoiseWhite     noiseVoiceA;    //xy=455.5,411
AudioSynthWaveform       voiceThreeA;    //xy=458.5,373
AudioMixer4              voiceMixerB;    //xy=567.5,655
AudioSynthWaveformDc     envelopeB;      //xy=577.5,600
AudioSynthWaveformDc     envelopeC;      //xy=578.5,817
AudioMixer4              voiceMixerC;    //xy=578.5,877
AudioMixer4              voiceMixerD;    //xy=579.5,1070
AudioSynthWaveformDc     envelopeD;      //xy=588.5,1006
AudioMixer4              voiceMixerA;    //xy=635.5,364
AudioSynthWaveformDc     envelopeA;      //xy=639.5,306
AudioEffectMultiply      multiplyB;      //xy=726.5,627
AudioEffectMultiply      multiplyC;      //xy=738.5,848
AudioEffectMultiply      multiplyD;      //xy=738.5,1035
AudioSynthWaveform       LFO1;           //xy=757.5,770
AudioEffectMultiply      multiplyA;      //xy=796.5,354
AudioSynthWaveformDc     filterEnvD;     //xy=819.5,1113
AudioSynthWaveformDc     filterEnvB;     //xy=849.5,675
AudioSynthWaveformDc     filterEnvA;     //xy=854.5,445
AudioSynthWaveformDc     filterEnvC;     //xy=860.5,892
AudioMixer4              filterModMixerD; //xy=977.5,1176
AudioMixer4              filterModMixerB; //xy=1002.5,727
AudioMixer4              filterModMixerA; //xy=1007.5,475
AudioMixer4              filterModMixerC; //xy=1012.5,950
AudioSynthWaveformDc     lfo2Amt;        //xy=1050.5,185
AudioSynthWaveformSine   LFO2;           //xy=1050.5,232
AudioFilterStateVariable filterA;        //xy=1172.5,434
AudioFilterStateVariable filterD;        //xy=1175.5,1097
AudioFilterStateVariable filterB;        //xy=1183.5,673
AudioAnalyzePeak         peakC;          //xy=1183.5,775
AudioFilterStateVariable filterC;        //xy=1183.5,865
AudioAnalyzePeak         peakD;          //xy=1183.5,1011
AudioAnalyzePeak         peakA;          //xy=1187.5,365
AudioAnalyzePeak         peakB;          //xy=1205.5,557
AudioMixer4              LfoMixer;       //xy=1207.5,235
AudioAnalyzePeak         lfoPeak;        //xy=1364.5,229
AudioMixer4              finalMixer;     //xy=1388.5,692
AudioAnalyzePeak         finalPeak;      //xy=1586.5,779
AudioOutputI2S           i2s1;           //xy=1592.5,691
AudioConnection          patchCord1(voiceOneB, 0, voiceMixerB, 0);
AudioConnection          patchCord2(voiceTwoB, 0, voiceMixerB, 1);
AudioConnection          patchCord3(voiceTwoD, 0, voiceMixerD, 1);
AudioConnection          patchCord4(voiceOneD, 0, voiceMixerD, 0);
AudioConnection          patchCord5(voiceThreeB, 0, voiceMixerB, 2);
AudioConnection          patchCord6(noiseVoiceB, 0, voiceMixerB, 3);
AudioConnection          patchCord7(voiceThreeD, 0, voiceMixerD, 2);
AudioConnection          patchCord8(noiseVoiceD, 0, voiceMixerD, 3);
AudioConnection          patchCord9(voiceTwoC, 0, voiceMixerC, 1);
AudioConnection          patchCord10(voiceOneC, 0, voiceMixerC, 0);
AudioConnection          patchCord11(noiseVoiceC, 0, voiceMixerC, 3);
AudioConnection          patchCord12(voiceThreeC, 0, voiceMixerC, 2);
AudioConnection          patchCord13(voiceOneA, 0, voiceMixerA, 0);
AudioConnection          patchCord14(voiceTwoA, 0, voiceMixerA, 1);
AudioConnection          patchCord15(noiseVoiceA, 0, voiceMixerA, 3);
AudioConnection          patchCord16(voiceThreeA, 0, voiceMixerA, 2);
AudioConnection          patchCord17(voiceMixerB, 0, multiplyB, 1);
AudioConnection          patchCord18(envelopeB, 0, multiplyB, 0);
AudioConnection          patchCord19(envelopeC, 0, multiplyC, 0);
AudioConnection          patchCord20(voiceMixerC, 0, multiplyC, 1);
AudioConnection          patchCord21(voiceMixerD, 0, multiplyD, 1);
AudioConnection          patchCord22(envelopeD, 0, multiplyD, 0);
AudioConnection          patchCord23(voiceMixerA, 0, multiplyA, 1);
AudioConnection          patchCord24(envelopeA, 0, multiplyA, 0);
AudioConnection          patchCord25(multiplyB, 0, filterB, 0);
AudioConnection          patchCord26(multiplyC, 0, filterC, 0);
AudioConnection          patchCord27(multiplyD, 0, filterD, 0);
AudioConnection          patchCord28(LFO1, 0, filterModMixerA, 1);
AudioConnection          patchCord29(LFO1, 0, filterModMixerB, 1);
AudioConnection          patchCord30(LFO1, 0, filterModMixerC, 1);
AudioConnection          patchCord31(LFO1, 0, filterModMixerD, 1);
AudioConnection          patchCord32(multiplyA, 0, filterA, 0);
AudioConnection          patchCord33(filterEnvD, 0, filterModMixerD, 0);
AudioConnection          patchCord34(filterEnvB, 0, filterModMixerB, 0);
AudioConnection          patchCord35(filterEnvA, 0, filterModMixerA, 0);
AudioConnection          patchCord36(filterEnvC, 0, filterModMixerC, 0);
AudioConnection          patchCord37(filterModMixerD, 0, filterD, 1);
AudioConnection          patchCord38(filterModMixerB, 0, filterB, 1);
AudioConnection          patchCord39(filterModMixerA, 0, filterA, 1);
AudioConnection          patchCord40(filterModMixerC, 0, filterC, 1);
AudioConnection          patchCord41(lfo2Amt, 0, LfoMixer, 0);
AudioConnection          patchCord42(LFO2, 0, LfoMixer, 1);
AudioConnection          patchCord43(filterA, 0, finalMixer, 0);
AudioConnection          patchCord44(filterA, 0, peakA, 0);
AudioConnection          patchCord45(filterD, 0, finalMixer, 3);
AudioConnection          patchCord46(filterD, 0, peakD, 0);
AudioConnection          patchCord47(filterB, 0, finalMixer, 1);
AudioConnection          patchCord48(filterB, 0, peakB, 0);
AudioConnection          patchCord49(filterC, 0, finalMixer, 2);
AudioConnection          patchCord50(filterC, 0, peakC, 0);
AudioConnection          patchCord51(LfoMixer, lfoPeak);
AudioConnection          patchCord52(finalMixer, 0, i2s1, 0);
AudioConnection          patchCord53(finalMixer, 0, i2s1, 1);
AudioConnection          patchCord54(finalMixer, finalPeak);
AudioControlSGTL5000     sgtl5000_1;     //xy=1371.5,273
// GUItool: end automatically generated code





///////////////////////////////////////////////////////////////////////////////////////
//======================================PINS=========================================//

//======Teensy 

// 0  = Touch 1
// 1  = Touch 2
// 2  = Neos
// 3  = Osc One Shape
// 4  = Osc Two Shape
// 5  = Osc Three Shape
// 6  = AUDIO BOARD
// 7  = AUDIO BOARD
// 8  = LFO Shape
// 9  = AUDIO BOARD
// 10 = AUDIO BOARD
// 11 = AUDIO BOARD
// 12 = AUDIO BOARD

// 13 = AUDIO BOARD
// 14 = AUDIO BOARD
// 15 = Touch 3
// 16 = Touch 4
// 17 = Touch 5
// 18 = AUDIO BOARD
// 19 = AUDIO BOARD
// 20 = Encoder Btn
// 21 = Encoder Pin 1
// 22 = AUDIO BOARD
// 23 = AUDIO BOARD
// 24 = Encoder Pin 2
// 25 = Touch 6
// 26 = S0 - MUX
// 27 = S1 - MUX
// 28 = S2 - MUX
// 29 = S3 - MUX
// 30 = SIG - MUX
// 32 = Touch 7
// 33 = Touch 8 

//======Mux

// 0  = Osc One Vol
// 1  = Osc Two Vol
// 2  = Osc Three Vol
// 3  = Noise Vol
// 4  = LFO2 Freq
// 5  = LFO2 Amount
// 6  = Detune
// 7  = LFO1 Freq
// 8  = LFO1 Amt
// 9  = Amp Env Attack
// 10 = Amp Env Release
// 11 = Filter Env Attack
// 12 = Filter Env Release
// 13 = Filter Freq
// 14 = Filter Res
// 15 = Octave

///////////////////////////////////////////////////////////////////////////////////////










#include <Bounce.h>
#include <Adafruit_NeoPixel.h>
#include <Metro.h>

//Pixels
#define PIXEL_PIN 2
#define NUMPIXELS 12
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIXEL_PIN, NEO_GRB + NEO_KHZ800);

//Encoder
int encoderPin1 = 21;
int encoderPin2 = 24;
volatile int lastEncoded = 0;
volatile long encoderValue = 0;
int scaledEncVal;
int prevScaledEncVal;

//Touch Pins
bool noteTouched[8];
int noteTouchPins[8] = {0,1,15,16,17,25,32,33};
float noteCurrent[8];

//Switches/EncoderBtn
Bounce btnSwBouncers[5] = {
  Bounce(3,10),
  Bounce(4,10),
  Bounce(5,10),
  Bounce(8,10),
  Bounce(20,10),
};
int btnSwPins[5] = {3,4,5,8,20};

//Mux control pins
int s0 = 26;
int s1 = 27;
int s2 = 28;
int s3 = 29;
//Mux in "SIG" pin
int SIG_pin = 30;

//Knobs
float analogValues[16]; 
float analogValuesLag[16];


//FirstRunFlag
bool firstRun;

int menuCount;
int encoded;
unsigned long clearTimeStamp;

//preset stuff
const int chipSelect = 10;
int presetNumber = -1;
File myFile;
String fileNames[8] = {"1.txt","2.txt","3.txt","4.txt","5.txt","6.txt","7.txt","8.txt"};
bool paramLocks[16];

//sequencer
Metro metronome = Metro(500);
bool seqRunning;
int metroInterval = 300;
int seqStep;
int prevSeqStep;
int seqPage;
bool seqEditMode;
float seqFrequencies[4][8];
float seqFrequenciesTwo[4][8];
bool seqStepClearFlag;
unsigned long seqStepClearTimeStamp;
//float seqVelocities[4][8];
float currentSeqNote;
float currentSeqNoteTwo;
int seqLength;



//Synth Params

float rawVals[20];

float finalAmp;
float voiceAPeak;
float voiceBPeak;
float voiceCPeak;
float voiceDPeak;

int scale;
float noteFrequencies[8][8] = {
  //Amin
  {220.00,246.94,261.63,293.66,329.63,349.23,392.00,440.00},
  //Bmin
  {246.94,277.18,293.66,329.63,369.99,392.00,440.00,493.88},
  //Cmin
  {261.63,293.66,311.13,349.23,392.00,415.30,466.16,523.25},
  //Dmin
  {293.66,329.63,349.23,392.00,440.00,466.16,523.25,587.33},
  //Emin
  {329.63,369.99,392.00,440.00,493.88,523.25,587.33,659.25},
  //Fmin
  {349.23,392.00,415.30,466.16,523.25,554.37,622.25,698.46},
  //Gmin
  {392.00,440.00,466.16,523.25,587.33,622.25,698.46,783.99},
  //Chrom
  {220.00,233.08,246.94,261.63,277.18,293.66,311.13,329.63},
};
int noteMIDINumbers[8][8] = {
  //Amin
  {57,59,60,62,64,65,67,69},
  //Bmin
  {59,61,62,64,66,67,69,71},
  //Cmin
  {60,62,63,65,67,68,70,72},
  //Dmin
  {62,64,65,67,69,70,72,74},
  //Emin
  {64,66,67,69,71,72,74,76},
  //Fmin
  {65,67,68,70,72,73,75,77},
  //Gmin
  {67,69,70,72,74,75,77,79},
  //Chrom
  {57,58,59,60,61,62,63,64},
};

float frequency;

int attackTime = 10;
int releaseTime = 10;
float lfoAmt;
float lfoFreq;
int lfoTimeMathArray[5] = {250, 500, 1000, 2000, 4000};
int lfoIndex;
float seqInterval;
float lfoTwoAmt;
float lfoTwoFreq;
float lfoPitchMod;
float octave[4] = {.25,.5,1,2};
int midiOctave[4] = {-24, -12, 0, 12};
int octaveKey;
int filterFreq;
float filterRes;
float masterDetune;
float plusDetune;
float minusDetune;
unsigned long filterEnvAttack;
unsigned long filterEnvRelease;

float voices[4];
float VoiceFreq[4];
float VoiceVel[4];
float voiceMod;

float ampArray[4];
int voiceNum;
//float currentVel;

uint32_t indicatorColor[2] = {
  pixels.Color(255,255,0),
  pixels.Color(255,0,0)
};
int indicatorIndex;




void setup() {

  AudioMemory(64);
  sgtl5000_1.enable();
  sgtl5000_1.volume(.8);

  Serial.begin(9600);

  //MIDI
  usbMIDI.setHandleNoteOff(OnNoteOff);
  usbMIDI.setHandleNoteOn(OnNoteOn);
  usbMIDI.setHandleControlChange(OnControlChange);

  //SD
  SPI.setMOSI(7);  // Audio shield has MOSI on pin 7
  SPI.setSCK(14);  // Audio shield has SCK on pin 14
  Serial.print("Initializing SD card...");
  if (!SD.begin(chipSelect)) {
    Serial.println("initialization failed!");
    return;
  }
  Serial.println("initialization done."); 



  //lfoMixer
  LfoMixer.gain(0,.5);
  LfoMixer.gain(1,.5);

  lfo2Amt.amplitude(1);
  LFO2.amplitude(1);
  LFO2.frequency(1);

  //finalMixer
  finalMixer.gain(0,.25);
  finalMixer.gain(1,.25);
  finalMixer.gain(2,.25);
  finalMixer.gain(3,.25);

  //Voice 1
  voiceOneA.amplitude(.25);
  voiceOneB.amplitude(.25);
  voiceOneC.amplitude(.25);
  voiceOneD.amplitude(.25);
  //Voice 2
  voiceTwoA.amplitude(.25);
  voiceTwoB.amplitude(.25);
  voiceTwoC.amplitude(.25);
  voiceTwoD.amplitude(.25);
  //Voice 3
  voiceThreeA.amplitude(.25);
  voiceThreeB.amplitude(.25);
  voiceThreeC.amplitude(.25);
  voiceThreeD.amplitude(.25);
  //noise
  noiseVoiceA.amplitude(.125);
  noiseVoiceB.amplitude(.125);
  noiseVoiceC.amplitude(.125);
  noiseVoiceD.amplitude(.125);
  //LFO
  LFO1.begin(.7,.5,WAVEFORM_SAWTOOTH_REVERSE);

  //filter
  filterA.octaveControl(2.5);
  filterB.octaveControl(2.5);
  filterC.octaveControl(2.5);
  filterD.octaveControl(2.5);



  //ENCODER KNOB
  pinMode(encoderPin1, INPUT); 
  pinMode(encoderPin2, INPUT);
  digitalWrite(encoderPin1, HIGH);
  digitalWrite(encoderPin2, HIGH);
  attachInterrupt(21, updateEncoder, CHANGE); 
  attachInterrupt(24, updateEncoder, CHANGE);

  //Pixels
  pixels.begin();
  pixels.setBrightness(200);


  //pixelDance
  for (int i = 0; i < NUMPIXELS; ++i){
    pixels.setPixelColor(i, pixels.Color(0, 100, 255));
    pixels.show();
    delay(100);
  }

  //Switches/EncoderBtn
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(20, INPUT_PULLUP);

  //Mux
  pinMode(s0, OUTPUT); 
  pinMode(s1, OUTPUT); 
  pinMode(s2, OUTPUT); 
  pinMode(s3, OUTPUT); 
  pinMode(SIG_pin, INPUT);
  digitalWrite(s0, LOW);
  digitalWrite(s1, LOW);
  digitalWrite(s2, LOW);
  digitalWrite(s3, LOW);

  firstRun = true;

}

void loop(){

  usbMIDI.read();
  
  //VoicePixels
  if (seqEditMode || seqRunning){
    pixels.setPixelColor(seqPage + 8,pixels.Color(0,0,255));
  }else{
    pixels.setPixelColor(8,pixels.Color(255*voiceAPeak,0,0));
    pixels.setPixelColor(9,pixels.Color(0,255*voiceBPeak,0));
    pixels.setPixelColor(10,pixels.Color(0,0,255*voiceCPeak));
    pixels.setPixelColor(11,pixels.Color(255*voiceDPeak,255*voiceDPeak,0));
  }

  //BtnPixels
  if (menuCount > 0){
    //menu stuff
    switch (menuCount) {
      case 1:
        //Loading Presets
        for (int i = 0; i < 8; ++i){
          pixels.setPixelColor(i, pixels.Color(0, 255, 0));
          pixels.setPixelColor(presetNumber, pixels.Color(0, 0, 255));
        }
        break;
      case 2:
        //Saving Presets
        for (int i = 0; i < 8; ++i){
          pixels.setPixelColor(i, pixels.Color(255, 0, 0));
          pixels.setPixelColor(presetNumber, pixels.Color(0, 0, 255));
        }
        break;
      case 3:
        //scale
        pixels.setPixelColor(scale, pixels.Color(0, 0, 255));
        break;
    }
  }else{
    if (!seqRunning){
      //Normal amp stuff
      for (int i = 0; i < 8; ++i){
        pixels.setPixelColor(i, pixels.Color(0,0,255*finalAmp));
      }
    }
  }
  pixels.show();

  //Note Touches
  for (int i = 0; i < 8; ++i){
    noteCurrent[i] = smoothRead(noteTouchPins[i]);

    if (noteCurrent[i] > 1000 && noteTouched[i] == false){
      if (menuCount == 1){
        presetNumber = i;
        loadPreset(i);
      }else if(menuCount == 2){
        presetNumber = i;
        savePreset(i);
      }else if(menuCount == 3){
        scale = i;
      }else if(menuCount == 4){
        //enter seq steps


        if(seqFrequencies[seqPage][seqStep % 8] || seqFrequenciesTwo[seqPage][seqStep % 8]){
          seqStepClearTimeStamp = millis();
          seqStepClearFlag = true;
        }
        //store step * octave
        frequency = noteFrequencies[scale][i]; 
        startVoice(frequency, 1); 
        //mono or poly - 2 note max
        if (!seqFrequencies[seqPage][seqStep % 8]){
          seqFrequencies[seqPage][seqStep % 8] = noteFrequencies[scale][i] * octave[octaveKey];
        }else if(!seqFrequenciesTwo[seqPage][seqStep % 8]){
          seqFrequenciesTwo[seqPage][seqStep % 8] = noteFrequencies[scale][i] * octave[octaveKey];
        }

      }else{
        //just play the note
        frequency = noteFrequencies[scale][i]; 
        startVoice(frequency, 1);
        usbMIDI.sendNoteOn(noteMIDINumbers[scale][i] + midiOctave[octaveKey], 127, 1);  
      }

      noteTouched[i] = true;

    }else if (noteCurrent[i] < 1000 && noteTouched[i] == true){
      if (menuCount > 0 && menuCount < 4){
        menuCount = 0;
      }else{
        seqStepClearFlag = false;
        //End normal note
        frequency = noteFrequencies[scale][i]; 
        endVoice(frequency);
        usbMIDI.sendNoteOff(noteMIDINumbers[scale][i] + midiOctave[octaveKey], 99, 1);  
      }
      noteTouched[i] = false;
    }
  }  

  //Sequencer Metro
  if (seqRunning){
    if (metronome.check() == 1) {
      seqStep++;
      LFO1.phase(180);
    }
  }

  //Sequencer
  if (seqEditMode || seqRunning){
    //One action Per Step
    if(abs(seqStep - prevSeqStep) > 0){
      neoPixelsOff();
      indicatorIndex = 0;

      if (seqRunning){
        if (seqStep > (seqLength - 1)){
          seqStep = 0;
        }
      }else{
        if (seqStep > 31){
          seqStep = 0;
        }
      }

      if (seqPage > 3){
        seqPage = 0;
      } 
      
      seqPage = seqStep/8;

      if (currentSeqNote > 0){
        endVoice(currentSeqNote);
      }
      if (currentSeqNoteTwo > 0){
        endVoice(currentSeqNoteTwo);
      }

      if(seqFrequencies[seqPage][seqStep % 8]){
        startVoice(seqFrequencies[seqPage][seqStep % 8], 1);
        currentSeqNote = seqFrequencies[seqPage][seqStep % 8];
      }
      if(seqFrequenciesTwo[seqPage][seqStep % 8]){
        startVoice(seqFrequenciesTwo[seqPage][seqStep % 8], 1);
        currentSeqNoteTwo = seqFrequenciesTwo[seqPage][seqStep % 8];
      }

      prevSeqStep = seqStep;
    }
    if (menuCount == 4 || menuCount == 0){
      for (int i = 0; i < 8; ++i){
        //background blue
        //pixels.setPixelColor(i, pixels.Color(0,0,20));
        //Green/teal if there is a note(s) stored
        if (seqFrequencies[seqPage][i] && seqFrequenciesTwo[seqPage][i]){
          pixels.setPixelColor(i, pixels.Color(100,255,0));
        }else if (seqFrequencies[seqPage][i]){
          pixels.setPixelColor(i, pixels.Color(0,255,0));
        }
        //Indicate the step you are on
        pixels.setPixelColor(seqStep % 8, indicatorColor[indicatorIndex]);
      }
    }
  }

  //clearStep
  if(menuCount == 4 && seqStepClearFlag){
    if (abs(millis() - seqStepClearTimeStamp) > 2000){
      Serial.println("clearStep");

      endVoice(seqFrequencies[seqPage][seqStep % 8]);
      seqFrequencies[seqPage][seqStep % 8] = 0;
      
      endVoice(seqFrequenciesTwo[seqPage][seqStep % 8]);
      seqFrequenciesTwo[seqPage][seqStep % 8] = 0;


      seqStepClearFlag = false;
      seqStepClearTimeStamp = millis();
      indicatorIndex = 1;
    }
  }
  
  //Encoder
  if (abs(scaledEncVal - prevScaledEncVal) > 0){
    if (seqEditMode){
      seqStep = scaledEncVal; //Step Selection
    }else if (seqRunning){
      seqInterval = 2000 - encoderValue;
      metronome.interval(seqInterval); //Speed
      lfoFreq = (1/seqInterval)*lfoTimeMathArray[lfoIndex];
    }
    prevScaledEncVal = scaledEncVal;
  }

  //Knobs
  for (int i = 0; i < 16; ++i){
    setMuxPin(i);
    analogValues[i] = analogRead(SIG_pin);

    if ((abs(analogValues[i] - analogValuesLag[i]) > 1) || firstRun){

      if (paramLocks[i] && (abs(analogValues[i] - rawVals[i]) < 20)) {
        paramLocks[i] = false;
      }
      if (!paramLocks[i]){

        rawVals[i] = analogValues[i];

        setSynthParams(i, analogValues[i]);
        
      }
      analogValuesLag[i] = analogValues[i];
    }
  }

  //Switches/EncoderBtn
  for (int i = 0; i < 5; ++i){
    if (btnSwBouncers[i].update() || firstRun){
      if (i<4){
        rawVals[i + 16] = digitalRead(btnSwPins[i]);
      }
      switch (i) {
        case 0:
          setVoceOneShape(digitalRead(btnSwPins[i]));
          break;
        case 1:
          setVoceTwoShape(digitalRead(btnSwPins[i]));
          break;
        case 2:
          setVoceThreeShape(digitalRead(btnSwPins[i]));
            break;
        case 3:
          setLfoShape(digitalRead(btnSwPins[i]));
          break;
        case 4:
            if (!digitalRead(btnSwPins[i])){
              clearTimeStamp = millis();

              neoPixelsOff();
              menuCount++;
              if (menuCount > 4){
                menuCount = 0;
                checkSeqStart();
              }
         
              if (menuCount == 4){
                seqRunning = false;
                seqEditMode = true;
              }else{
                seqEditMode = false;
              }
            }
          break;
      }
    }
  }
  //CrearEverything
  if ((abs(millis() - clearTimeStamp) > 2000) && !digitalRead(20)){
    clearEverything();
    clearTimeStamp = millis();
  }

  //Voice Stuff
  for (int i = 0; i < 4; ++i){

    if(i == 0){//VoiceA
      voiceOneA.frequency(VoiceFreq[i] * octave[octaveKey] * lfoPitchMod);
      voiceTwoA.frequency(VoiceFreq[i] * octave[octaveKey] * plusDetune * lfoPitchMod);
      voiceThreeA.frequency(VoiceFreq[i] * octave[octaveKey] * minusDetune * lfoPitchMod); 
      //Env
      if(voices[i]){
        envelopeA.amplitude(VoiceVel[i], attackTime);
        filterEnvA.amplitude(VoiceVel[i],filterEnvAttack);
      }else{
        envelopeA.amplitude(0, releaseTime);
        filterEnvA.amplitude(-1,filterEnvRelease);
      }
    }else if(i == 1){//VoiceB
      voiceOneB.frequency(VoiceFreq[i] * octave[octaveKey] * lfoPitchMod);
      voiceTwoB.frequency(VoiceFreq[i] * octave[octaveKey] * plusDetune * lfoPitchMod);
      voiceThreeB.frequency(VoiceFreq[i] * octave[octaveKey] * minusDetune * lfoPitchMod); 
      //Env
      if(voices[i]){
        envelopeB.amplitude(VoiceVel[i], attackTime);
        filterEnvB.amplitude(VoiceVel[i],filterEnvAttack);
      }else{
        envelopeB.amplitude(0, releaseTime);
        filterEnvB.amplitude(-1,filterEnvRelease);
      }      
    }else if(i == 2){//VoiceC
      voiceOneC.frequency(VoiceFreq[i] * octave[octaveKey] * lfoPitchMod);
      voiceTwoC.frequency(VoiceFreq[i] * octave[octaveKey] * plusDetune * lfoPitchMod);
      voiceThreeC.frequency(VoiceFreq[i] * octave[octaveKey] * minusDetune * lfoPitchMod); 
      //Env
      if(voices[i]){
        envelopeC.amplitude(VoiceVel[i], attackTime);
        filterEnvC.amplitude(VoiceVel[i],filterEnvAttack);
      }else{
        envelopeC.amplitude(0, releaseTime);
        filterEnvC.amplitude(-1,filterEnvRelease);
      }      
    }else if(i == 3){//VoiceD
      voiceOneD.frequency(VoiceFreq[i] * octave[octaveKey] * lfoPitchMod);
      voiceTwoD.frequency(VoiceFreq[i] * octave[octaveKey] * plusDetune * lfoPitchMod);
      voiceThreeD.frequency(VoiceFreq[i] * octave[octaveKey] * minusDetune * lfoPitchMod); 
      //Env
      if(voices[i]){
        envelopeD.amplitude(VoiceVel[i], attackTime);
        filterEnvD.amplitude(VoiceVel[i],filterEnvAttack);
      }else{
        envelopeD.amplitude(0, releaseTime);
        filterEnvD.amplitude(-1,filterEnvRelease);
      }      
    }
  } 

  //LFO
  LFO1.frequency(lfoFreq);
  LFO1.amplitude(lfoAmt);
  //Filter
  filterA.frequency(filterFreq);
  filterA.resonance(filterRes);
  filterB.frequency(filterFreq);
  filterB.resonance(filterRes);  
  filterC.frequency(filterFreq);
  filterC.resonance(filterRes); 
  filterD.frequency(filterFreq);
  filterD.resonance(filterRes); 
  //LFO2
  if(lfoPeak.available()){
    lfoPitchMod = lfoPeak.read() + .5;
  } 
  //voiceA
  if (peakA.available()){
    voiceAPeak = peakA.read();
    ampArray[0] = voiceAPeak;
  }
  //voiceB
  if (peakB.available()){
    voiceBPeak = peakB.read();
     ampArray[1] = voiceBPeak;
  }
  //voiceC
  if (peakC.available()){
    voiceCPeak = peakC.read();
    ampArray[2] = voiceCPeak;
  }
  //voiceD
  if (peakD.available()){
    voiceDPeak = peakD.read();
    ampArray[3] = voiceDPeak;
  }
  //FinalPeak
  if (finalPeak.available()){
    finalAmp = finalPeak.read();
  }

  firstRun = false;

}

//START MIDI
void OnControlChange(byte channel, byte control, byte value){
  setSynthParams(control-1, value * 8.055);
  rawVals[control-1] = value * 8.055;
  paramLocks[control-1] = true;
}

void OnNoteOn(byte channel, byte note, byte velocity){
  float freq = 440.0 * powf(2.0, (float)(note - 69) * 0.08333333);
  float vel = (float)velocity/127;
  startVoice(freq, vel);
}

void OnNoteOff(byte channel, byte note, byte velocity){
  float freq = 440.0 * powf(2.0, (float)(note - 69) * 0.08333333);
  endVoice(freq);
}
//END MIDI


void startVoice(float frequency, float velocity){
  // for (int i = 0; i < 4; ++i){
  //   if (!voices[i]){
  //     voices[i] = frequency;
  //     VoiceFreq[i] = frequency;
  //     VoiceVel[i] = velocity;
  //     if (voices[i]){
  //       return;
  //     }
  //   }
  // }

  voiceNum = lowestAmp();
  //if voice is already in use scan to next voice
  for (int i = 0; i < 4; ++i){
    if (voices[voiceNum]){
      voiceNum++;
      if (voiceNum > 3){
        voiceNum = 0;
      }
    }
  }
  //Assign (unused voice || lowest voice)
  voices[voiceNum] = frequency;
  VoiceFreq[voiceNum] = voices[voiceNum];
  VoiceVel[voiceNum] = velocity;

}

void endVoice(float frequency){
  for (int i = 0; i < 4; ++i){
    if(VoiceFreq[i] == frequency){
      voices[i] = 0;
    }
  }
}

int lowestAmp(){
  int index = 0;
  for (int i = 0; i < 4; i++){
    if (ampArray[i] < ampArray[index]) {
      index = i;
    }
  }
  return index;
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
    {1,1,1,1}  //channel 15
  };

  //loop through the 4 sig
  for(int i = 0; i < 4; i ++){
    digitalWrite(controlPin[i], muxChannel[channel][i]);
  }
}
void loadPreset(int number){
  String currentPreset = fileNames[number];

  myFile = SD.open(currentPreset.c_str());

  if (myFile) {
    for (int i = 0; i < 20; i++) {
      int input = myFile.parseFloat();
      rawVals[i] = input;
      if (i < 16){
        paramLocks[i] = true;
      }
    }
    // close the file:
    myFile.close();
    //set all them params
    for (int i = 0; i < 20; ++i){ 
      setSynthParams(i, rawVals[i]);
    }
  } else {
    // if the file didn't open, print an error:
    Serial.println("error opening file");
  }
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
  if (myFile) {
    for (int i = 0; i < 20; ++i){
      myFile.println(rawVals[i]);
    }
    // close the file:
    myFile.close();
    Serial.print("wrote to file");
  } else {
    // if the file didn't open, print an error:
    Serial.println("error opening file");
  }
}

void neoPixelsOff(){
  for (int i = 0; i < 12; ++i){
    pixels.setPixelColor(i, pixels.Color(0, 0, 0));
  }
}

void setVoceOneShape (bool saw){
  if (saw){
    voiceOneA.begin(WAVEFORM_SAWTOOTH);
    voiceOneB.begin(WAVEFORM_SAWTOOTH);
    voiceOneC.begin(WAVEFORM_SAWTOOTH);
    voiceOneD.begin(WAVEFORM_SAWTOOTH);
  }else{
    voiceOneA.begin(WAVEFORM_SQUARE);
    voiceOneB.begin(WAVEFORM_SQUARE);
    voiceOneC.begin(WAVEFORM_SQUARE);
    voiceOneD.begin(WAVEFORM_SQUARE);
  }
}
void setVoceTwoShape (bool saw){
  if (saw){
    voiceTwoA.begin(WAVEFORM_SAWTOOTH);
    voiceTwoB.begin(WAVEFORM_SAWTOOTH);
    voiceTwoC.begin(WAVEFORM_SAWTOOTH);
    voiceTwoD.begin(WAVEFORM_SAWTOOTH);
  }else{
    voiceTwoA.begin(WAVEFORM_SQUARE);
    voiceTwoB.begin(WAVEFORM_SQUARE);
    voiceTwoC.begin(WAVEFORM_SQUARE);
    voiceTwoD.begin(WAVEFORM_SQUARE);
  }
}
void setVoceThreeShape (bool saw){
  if (saw){
    voiceThreeA.begin(WAVEFORM_TRIANGLE);
    voiceThreeB.begin(WAVEFORM_TRIANGLE);
    voiceThreeC.begin(WAVEFORM_TRIANGLE);
    voiceThreeD.begin(WAVEFORM_TRIANGLE);
  }else{
    voiceThreeA.begin(WAVEFORM_SQUARE);
    voiceThreeB.begin(WAVEFORM_SQUARE);
    voiceThreeC.begin(WAVEFORM_SQUARE);
    voiceThreeD.begin(WAVEFORM_SQUARE);
  }
}
void setLfoShape(bool sine){
  if (sine){
    LFO1.begin(WAVEFORM_SINE);
  }else{
    LFO1.begin(WAVEFORM_SAWTOOTH_REVERSE);
  }
}
void clearEverything(){
  neoPixelsOff();
  menuCount = 0;
  seqRunning = false;
  firstRun = true;
  presetNumber = -1;
  for (int i = 0; i < 16; ++i){
    paramLocks[i] = false;
  }
  for (int z = 0; z < 4; ++z){
    voices[z] = 0;
    for (int j = 0; j < 8; ++j){
      seqFrequencies[z][j] = 0;
      seqFrequenciesTwo[z][j] = 0;
    }
  }
}
void checkSeqStart(){
  //Check if any notes were entered, if so start sequence
  //Also set seqLength based on notes entered
  for (int i = 0; i < 8; ++i){
    if (seqFrequencies[0][i]){
      seqLength = 8;
    }
  }
  for (int i = 0; i < 8; ++i){
    if (seqFrequencies[1][i]){
      seqLength = 16;
    }
  }
  for (int i = 0; i < 8; ++i){
    if (seqFrequencies[2][i]){
      seqLength = 24;
    }
  }
  for (int i = 0; i < 8; ++i){
    if (seqFrequencies[3][i]){
      seqLength = 32;
    }
  }    

  for (int i = 0; i < 4; ++i){
    voices[i] = 0;
    for (int k = 0; k < 8; ++k){
      if (seqFrequencies[i][k] > 0){
        seqRunning = true;
        break;
      }
    }
    if (seqRunning){
      break;
    }
  }
  
  if (seqInterval == 0){
    encoderValue = 1700;
    seqInterval = 300;
    metronome.interval(seqInterval);
  }else{
    encoderValue = 2000 - seqInterval;
  }
  
  lastEncoded = encoded;
  seqStep = 0;
  seqPage = 0;
  metronome.reset();
}

void updateEncoder(){
  int MSB = digitalRead(encoderPin1); //MSB = most significant bit
  int LSB = digitalRead(encoderPin2); //LSB = least significant bit

  encoded = (MSB << 1) |LSB; //converting the 2 pin value to single number
  int sum  = (lastEncoded << 2) | encoded; //adding it to the previous encoded value

  if(sum == 0b1101 || sum == 0b0100 || sum == 0b0010 || sum == 0b1011) encoderValue ++;
  if(sum == 0b1110 || sum == 0b0111 || sum == 0b0001 || sum == 0b1000) encoderValue --;
  

  if (encoderValue < 0){
    encoderValue = 0;
  }
  if (seqEditMode){
    if (encoderValue > 124){
      encoderValue = 124;
    }
  }else if(seqRunning){
    if (encoderValue > 2000){
      encoderValue = 2000;
    }
  }
  
  scaledEncVal = encoderValue/4;

  lastEncoded = encoded; //store this value for next time

}
int smoothRead(int pin){
  int vals[8]; //array that stores 8 readings.
  for(int i = 0; i < 8; i++){
    vals[i] = touchRead(pin); //takes 8 readings.
  }
  float smooth = (vals[0] + vals[1] + vals[2] + vals[3] + vals[4] + vals[5] + vals[6] + vals[7]) / 8;
  return smooth;
}

void setSynthParams(int number, float value){
  
  if (number < 4){
    voiceMixerA.gain(number, value/2046);
    voiceMixerB.gain(number, value/2046);
    voiceMixerC.gain(number, value/2046);
    voiceMixerD.gain(number, value/2046);
  }else if(number == 4){
      LFO2.frequency(value/130);
  }else if(number == 5){
      LFO2.amplitude(value/32736);
  }else if(number == 6){
    masterDetune = value;
    plusDetune = map(masterDetune, 0, 1023, 1, 1.5);
    minusDetune = map(masterDetune, 0, 1023, 1, .75);
  }else if(number == 7){

    if (seqRunning){
      lfoIndex = value/204.6;
      lfoIndex = constrain(lfoIndex, 0, 4);
      lfoFreq = (1/seqInterval)*lfoTimeMathArray[lfoIndex];
    }else{
      lfoFreq = value/120;
    }
  }else if(number == 8){
    lfoAmt = value/1023;
  }else if(number == 9){
    attackTime = value * 2;
  }else if(number == 10){
    releaseTime = value * 2;
  }else if(number == 11){
    filterEnvAttack = value * 2;
  }else if(number == 12){
    filterEnvRelease = value * 2;
  }else if(number == 13){
    filterFreq = (value * 10) + 100;
  }else if(number == 14){
    filterRes = (value / 255) + 1.10;
  }else if(number == 15){
    octaveKey = value/255;
    octaveKey = constrain(octaveKey, 0, 3);
  }else if(number == 16){
    setVoceOneShape(value);
  }else if(number == 17){
    setVoceTwoShape(value);
  }else if(number == 18){
    setVoceThreeShape(value);
  }else if (number == 19){
    setLfoShape(value);
  }
}
