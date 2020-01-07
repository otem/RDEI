#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioSynthWaveform       lfoPitch2;      //xy=92,363
AudioSynthWaveform       lfoPitch4;      //xy=92,845
AudioSynthWaveform       lfoPitch6;      //xy=92,1343
AudioSynthWaveform       lfoPitch8;      //xy=92,1825
AudioSynthWaveform       lfoPitch1;      //xy=138,129
AudioSynthWaveform       lfoPitch3;      //xy=138,611
AudioSynthWaveform       lfoPitch5;      //xy=138,1109
AudioSynthWaveform       lfoPitch7;      //xy=138,1592
AudioSynthWaveformDc     dc2;            //xy=258,374
AudioSynthWaveformDc     dc4;            //xy=258,857
AudioSynthWaveformDc     dc6;            //xy=258,1355
AudioSynthWaveformDc     dc8;            //xy=258,1837
AudioSynthWaveformDc     dc1;            //xy=304,141
AudioSynthWaveformDc     dc3;            //xy=304,623
AudioSynthWaveformDc     dc5;            //xy=304,1121
AudioSynthWaveformDc     dc7;            //xy=304,1604
AudioSynthWaveform       tri2;           //xy=315,334
AudioSynthWaveformModulated sawB2;          //xy=316,297
AudioSynthWaveform       tri4;           //xy=315,817
AudioSynthWaveformModulated sawA2;          //xy=318,264
AudioSynthWaveformModulated sawB4;          //xy=316,779
AudioSynthWaveform       tri6;           //xy=315,1315
AudioSynthWaveformModulated sawA4;          //xy=318,746
AudioSynthWaveformModulated sawB6;          //xy=316,1277
AudioSynthWaveform       tri8;           //xy=315,1797
AudioSynthWaveformModulated sawA6;          //xy=318,1244
AudioSynthWaveformModulated sawB8;          //xy=316,1760
AudioSynthWaveformModulated sawA8;          //xy=318,1726
AudioSynthWaveformModulated modu2;          //xy=324,444
AudioSynthWaveformModulated modu4;          //xy=324,926
AudioSynthWaveformModulated modu6;          //xy=324,1424
AudioSynthWaveformModulated modu8;          //xy=324,1907
AudioSynthWaveformModulated sawB1;          //xy=362,64
AudioSynthWaveform       tri1;           //xy=362,101
AudioSynthWaveformModulated sawB3;          //xy=362,546
AudioSynthWaveform       tri3;           //xy=362,583
AudioSynthWaveformModulated sawA1;          //xy=365,30
AudioSynthWaveformModulated sawB5;          //xy=362,1044
AudioSynthWaveform       tri5;           //xy=362,1081
AudioSynthWaveformModulated sawA3;          //xy=365,513
AudioSynthWaveformModulated sawB7;          //xy=362,1526
AudioSynthWaveform       tri7;           //xy=362,1564
AudioSynthWaveformModulated sawA5;          //xy=365,1011
AudioSynthWaveformModulated sawA7;          //xy=365,1493
AudioSynthWaveformModulated modu1;          //xy=371,210
AudioSynthWaveformModulated modu3;          //xy=371,693
AudioSynthWaveformModulated modu5;          //xy=371,1191
AudioSynthWaveformModulated modu7;          //xy=371,1673
AudioEffectEnvelope      filEnv2;        //xy=384,382
AudioEffectEnvelope      filEnv4;        //xy=384,864
AudioEffectEnvelope      filEnv6;        //xy=384,1362
AudioEffectEnvelope      filEnv8;        //xy=384,1845
AudioEffectEnvelope      filEnv1;        //xy=430,149
AudioEffectEnvelope      filEnv3;        //xy=430,631
AudioEffectEnvelope      filEnv5;        //xy=430,1129
AudioEffectEnvelope      filEnv7;        //xy=430,1611
AudioMixer4              fmixer2;        //xy=449,283
AudioMixer4              fmixer4;        //xy=449,765
AudioMixer4              fmixer6;        //xy=449,1263
AudioMixer4              fmixer8;        //xy=449,1746
AudioEffectMultiply      mult2;          //xy=475,442
AudioEffectMultiply      mult4;          //xy=475,924
AudioEffectMultiply      mult6;          //xy=475,1422
AudioEffectMultiply      mult8;          //xy=475,1905
AudioMixer4              fmixer1;        //xy=495,50
AudioMixer4              fmixer3;        //xy=495,532
AudioMixer4              fmixer5;        //xy=495,1030
AudioMixer4              fmixer7;        //xy=495,1512
AudioEffectMultiply      mult1;          //xy=522,209
AudioEffectMultiply      mult3;          //xy=522,691
AudioEffectMultiply      mult5;          //xy=522,1189
AudioEffectMultiply      mult7;          //xy=522,1671
AudioFilterStateVariable filter2;        //xy=599,333
AudioFilterStateVariable filter4;        //xy=599,816
AudioFilterStateVariable filter6;        //xy=599,1314
AudioFilterStateVariable filter8;        //xy=599,1796
AudioSynthWaveformSineModulated carA2;          //xy=613,448
AudioSynthWaveformSineModulated carA4;          //xy=613,931
AudioSynthWaveformSineModulated carA6;          //xy=613,1429
AudioSynthWaveformSineModulated carA8;          //xy=613,1911
AudioFilterStateVariable filter1;        //xy=646,100
AudioFilterStateVariable filter3;        //xy=646,582
AudioFilterStateVariable filter5;        //xy=646,1080
AudioFilterStateVariable filter7;        //xy=646,1563
AudioSynthWaveformSineModulated carA1;          //xy=659,215
AudioSynthWaveformSineModulated carA3;          //xy=659,697
AudioSynthWaveformSineModulated carA5;          //xy=659,1195
AudioSynthWaveformSineModulated carA7;          //xy=659,1678
AudioMixer4              voiceMixer2;    //xy=899,405
AudioMixer4              voiceMixer4;    //xy=899,887
AudioMixer4              voiceMixer6;    //xy=899,1385
AudioMixer4              voiceMixer8;    //xy=899,1868
AudioMixer4              voiceMixer1;    //xy=945,172
AudioMixer4              voiceMixer3;    //xy=945,654
AudioMixer4              voiceMixer5;    //xy=945,1152
AudioMixer4              voiceMixer7;    //xy=945,1634
AudioEffectEnvelope      envelope2;      //xy=1074,406
AudioEffectEnvelope      envelope4;      //xy=1074,889
AudioEffectEnvelope      envelope6;      //xy=1074,1387
AudioEffectEnvelope      envelope8;      //xy=1074,1869
AudioEffectEnvelope      envelope1;      //xy=1120,173
AudioEffectEnvelope      envelope3;      //xy=1120,655
AudioEffectEnvelope      envelope5;      //xy=1120,1153
AudioEffectEnvelope      envelope7;      //xy=1120,1636
AudioAnalyzePeak         vPeak2;         //xy=1221,344
AudioAnalyzePeak         vPeak4;         //xy=1221,826
AudioAnalyzePeak         vPeak6;         //xy=1221,1324
AudioAnalyzePeak         vPeak8;         //xy=1221,1807
AudioAnalyzePeak         vPeak1;         //xy=1268,111
AudioAnalyzePeak         vPeak3;         //xy=1268,593
AudioAnalyzePeak         vPeak5;         //xy=1268,1091
AudioAnalyzePeak         vPeak7;         //xy=1268,1573
AudioMixer4              preMix2;        //xy=1682,814
AudioMixer4              preMix1;        //xy=1715,520
AudioMixer4              finalMixer;     //xy=1848,595
AudioEffectFreeverb      freeverb1;      //xy=1923,665
AudioMixer4              verbMixer;      //xy=2011,599
AudioOutputAnalogStereo  dacs1;          //xy=2144,562
AudioConnection          patchCord1(lfoPitch2, 0, modu2, 0);
AudioConnection          patchCord2(lfoPitch2, 0, sawA2, 0);
AudioConnection          patchCord3(lfoPitch4, 0, modu4, 0);
AudioConnection          patchCord4(lfoPitch4, 0, sawA4, 0);
AudioConnection          patchCord5(lfoPitch6, 0, modu6, 0);
AudioConnection          patchCord6(lfoPitch6, 0, sawA6, 0);
AudioConnection          patchCord7(lfoPitch8, 0, modu8, 0);
AudioConnection          patchCord8(lfoPitch8, 0, sawA8, 0);
AudioConnection          patchCord9(lfoPitch1, 0, modu1, 0);
AudioConnection          patchCord10(lfoPitch1, 0, sawA1, 0);
AudioConnection          patchCord11(lfoPitch3, 0, modu3, 0);
AudioConnection          patchCord12(lfoPitch3, 0, sawA3, 0);
AudioConnection          patchCord13(lfoPitch5, 0, modu5, 0);
AudioConnection          patchCord14(lfoPitch5, 0, sawA5, 0);
AudioConnection          patchCord15(lfoPitch7, 0, modu7, 0);
AudioConnection          patchCord16(lfoPitch7, 0, sawA7, 0);
AudioConnection          patchCord17(dc2, filEnv2);
AudioConnection          patchCord18(dc4, filEnv4);
AudioConnection          patchCord19(dc6, filEnv6);
AudioConnection          patchCord20(dc8, filEnv8);
AudioConnection          patchCord21(dc1, filEnv1);
AudioConnection          patchCord22(dc3, filEnv3);
AudioConnection          patchCord23(dc5, filEnv5);
AudioConnection          patchCord24(dc7, filEnv7);
AudioConnection          patchCord25(tri2, 0, fmixer2, 2);
AudioConnection          patchCord26(sawB2, 0, fmixer2, 1);
AudioConnection          patchCord27(tri4, 0, fmixer4, 2);
AudioConnection          patchCord28(sawA2, 0, fmixer2, 0);
AudioConnection          patchCord29(sawB4, 0, fmixer4, 1);
AudioConnection          patchCord30(tri6, 0, fmixer6, 2);
AudioConnection          patchCord31(sawA4, 0, fmixer4, 0);
AudioConnection          patchCord32(sawB6, 0, fmixer6, 1);
AudioConnection          patchCord33(tri8, 0, fmixer8, 2);
AudioConnection          patchCord34(sawA6, 0, fmixer6, 0);
AudioConnection          patchCord35(sawB8, 0, fmixer8, 1);
AudioConnection          patchCord36(sawA8, 0, fmixer8, 0);
AudioConnection          patchCord37(modu2, 0, mult2, 1);
AudioConnection          patchCord38(modu4, 0, mult4, 1);
AudioConnection          patchCord39(modu6, 0, mult6, 1);
AudioConnection          patchCord40(modu8, 0, mult8, 1);
AudioConnection          patchCord41(sawB1, 0, fmixer1, 1);
AudioConnection          patchCord42(tri1, 0, fmixer1, 2);
AudioConnection          patchCord43(sawB3, 0, fmixer3, 1);
AudioConnection          patchCord44(tri3, 0, fmixer3, 2);
AudioConnection          patchCord45(sawA1, 0, fmixer1, 0);
AudioConnection          patchCord46(sawB5, 0, fmixer5, 1);
AudioConnection          patchCord47(tri5, 0, fmixer5, 2);
AudioConnection          patchCord48(sawA3, 0, fmixer3, 0);
AudioConnection          patchCord49(sawB7, 0, fmixer7, 1);
AudioConnection          patchCord50(tri7, 0, fmixer7, 2);
AudioConnection          patchCord51(sawA5, 0, fmixer5, 0);
AudioConnection          patchCord52(sawA7, 0, fmixer7, 0);
AudioConnection          patchCord53(modu1, 0, mult1, 1);
AudioConnection          patchCord54(modu3, 0, mult3, 1);
AudioConnection          patchCord55(modu5, 0, mult5, 1);
AudioConnection          patchCord56(modu7, 0, mult7, 1);
AudioConnection          patchCord57(filEnv2, 0, filter2, 1);
AudioConnection          patchCord58(filEnv2, 0, mult2, 0);
AudioConnection          patchCord59(filEnv4, 0, filter4, 1);
AudioConnection          patchCord60(filEnv4, 0, mult4, 0);
AudioConnection          patchCord61(filEnv6, 0, filter6, 1);
AudioConnection          patchCord62(filEnv6, 0, mult6, 0);
AudioConnection          patchCord63(filEnv8, 0, filter8, 1);
AudioConnection          patchCord64(filEnv8, 0, mult8, 0);
AudioConnection          patchCord65(filEnv1, 0, filter1, 1);
AudioConnection          patchCord66(filEnv1, 0, mult1, 0);
AudioConnection          patchCord67(filEnv3, 0, filter3, 1);
AudioConnection          patchCord68(filEnv3, 0, mult3, 0);
AudioConnection          patchCord69(filEnv5, 0, filter5, 1);
AudioConnection          patchCord70(filEnv5, 0, mult5, 0);
AudioConnection          patchCord71(filEnv7, 0, filter7, 1);
AudioConnection          patchCord72(filEnv7, 0, mult7, 0);
AudioConnection          patchCord73(fmixer2, 0, filter2, 0);
AudioConnection          patchCord74(fmixer4, 0, filter4, 0);
AudioConnection          patchCord75(fmixer6, 0, filter6, 0);
AudioConnection          patchCord76(fmixer8, 0, filter8, 0);
AudioConnection          patchCord77(mult2, carA2);
AudioConnection          patchCord78(mult4, carA4);
AudioConnection          patchCord79(mult6, carA6);
AudioConnection          patchCord80(mult8, carA8);
AudioConnection          patchCord81(fmixer1, 0, filter1, 0);
AudioConnection          patchCord82(fmixer3, 0, filter3, 0);
AudioConnection          patchCord83(fmixer5, 0, filter5, 0);
AudioConnection          patchCord84(fmixer7, 0, filter7, 0);
AudioConnection          patchCord85(mult1, carA1);
AudioConnection          patchCord86(mult3, carA3);
AudioConnection          patchCord87(mult5, carA5);
AudioConnection          patchCord88(mult7, carA7);
AudioConnection          patchCord89(filter2, 0, voiceMixer2, 0);
AudioConnection          patchCord90(filter4, 0, voiceMixer4, 0);
AudioConnection          patchCord91(filter6, 0, voiceMixer6, 0);
AudioConnection          patchCord92(filter8, 0, voiceMixer8, 0);
AudioConnection          patchCord93(carA2, 0, voiceMixer2, 2);
AudioConnection          patchCord94(carA4, 0, voiceMixer4, 2);
AudioConnection          patchCord95(carA6, 0, voiceMixer6, 2);
AudioConnection          patchCord96(carA8, 0, voiceMixer8, 2);
AudioConnection          patchCord97(filter1, 0, voiceMixer1, 0);
AudioConnection          patchCord98(filter3, 0, voiceMixer3, 0);
AudioConnection          patchCord99(filter5, 0, voiceMixer5, 0);
AudioConnection          patchCord100(filter7, 0, voiceMixer7, 0);
AudioConnection          patchCord101(carA1, 0, voiceMixer1, 2);
AudioConnection          patchCord102(carA3, 0, voiceMixer3, 2);
AudioConnection          patchCord103(carA5, 0, voiceMixer5, 2);
AudioConnection          patchCord104(carA7, 0, voiceMixer7, 2);
AudioConnection          patchCord105(voiceMixer2, envelope2);
AudioConnection          patchCord106(voiceMixer4, envelope4);
AudioConnection          patchCord107(voiceMixer6, envelope6);
AudioConnection          patchCord108(voiceMixer8, envelope8);
AudioConnection          patchCord109(voiceMixer1, envelope1);
AudioConnection          patchCord110(voiceMixer3, envelope3);
AudioConnection          patchCord111(voiceMixer5, envelope5);
AudioConnection          patchCord112(voiceMixer7, envelope7);
AudioConnection          patchCord113(envelope2, vPeak2);
AudioConnection          patchCord114(envelope2, 0, preMix1, 1);
AudioConnection          patchCord115(envelope4, vPeak4);
AudioConnection          patchCord116(envelope4, 0, preMix1, 3);
AudioConnection          patchCord117(envelope6, vPeak6);
AudioConnection          patchCord118(envelope6, 0, preMix2, 1);
AudioConnection          patchCord119(envelope8, vPeak8);
AudioConnection          patchCord120(envelope8, 0, preMix2, 3);
AudioConnection          patchCord121(envelope1, 0, preMix1, 0);
AudioConnection          patchCord122(envelope1, vPeak1);
AudioConnection          patchCord123(envelope3, vPeak3);
AudioConnection          patchCord124(envelope3, 0, preMix1, 2);
AudioConnection          patchCord125(envelope5, vPeak5);
AudioConnection          patchCord126(envelope5, 0, preMix2, 0);
AudioConnection          patchCord127(envelope7, vPeak7);
AudioConnection          patchCord128(envelope7, 0, preMix2, 2);
AudioConnection          patchCord129(preMix2, 0, finalMixer, 1);
AudioConnection          patchCord130(preMix1, 0, finalMixer, 0);
AudioConnection          patchCord131(finalMixer, 0, verbMixer, 0);
AudioConnection          patchCord132(finalMixer, freeverb1);
AudioConnection          patchCord133(freeverb1, 0, verbMixer, 1);
AudioConnection          patchCord134(verbMixer, 0, dacs1, 0);
AudioConnection          patchCord135(verbMixer, 0, dacs1, 1);
// GUItool: end automatically generated code





































///////////////////////////////////////////////////////////////////////////////////////
//======================================PCB_PINS=========================================//
//Teensy 3.6 usb midi
//Touch === 30,29,23,22,19,18,1,0
//Knobs === A12,A13,A6,A7,A14,A15,A16,A17,A18,A19,A20,A10
//Switch == 25,13,14
//LEDS ==== 28
//Encoder = 26,27
//CLK ===== 16,17

#include <EEPROM.h>
#include <Bounce.h>
#define FASTLED_ALLOW_INTERRUPTS 0
#include <FastLED.h>

//leds
#define DATA_PIN 28
#define NUM_LEDS 8
#define COLOR_ORDER RGB
CRGB leds[NUM_LEDS];

int temp;
//Encoder
int encoderPin1 = 26;
int encoderPin2 = 27;
volatile int lastEncoded = 0;
volatile long encoderValue = 0;
int scaledEncVal;
int prevScaledEncVal;
int encoded;

int ClkOutPin = 16;
int ClkInPin = 17;
float voices[8];
bool voiceUsed[8];
int voiceNum;


Bounce swBouncers[4] = {
  Bounce(25,100),
  Bounce(13,100),
  Bounce(14,100),
  Bounce(ClkInPin,15),

};
int swPins[3] = {25,13,14};


float analogValues[12]; 
float analogValuesLag[12];
bool knobLocks[12];
int analogPins[12] = {A12,A13,A6,A7,A14,A15,A16,A17,A18,A19,A20,A10};
int knobThresh = 8;

bool noteTouched[8] = {false};
int noteTouchPins[8] = {30,29,23,22,19,18,1,0};
float envTrig[8];
float currentYPos[8];
float scaledYpos[8];
float prevScaledYpos[8];
bool allOff[8] = {false};

//Synth Paramaters
bool unisonMode;
bool glide;
bool yToMix;
bool yToFilter;
bool yTolfoOneSpeed;
bool ytoLfoOneAmt;
bool yTofilEnvAttack;
bool ytofilEnvDecay;
float glideSpeed = 1.1;

float lfo2PeakVals[8];
float lfo2PeakMult;

float verbMix;
float lfoOneAmt;
float lfoOneFreq;
bool superLfo;
int superIndex;
float filEnvDecay;
float filEnvAttack;
float voiceMixerVal[8];


int octIndex;
int fmIndex;
float filterMulti;
float fmMulti;
float detuneAmt[8] = {1,1,1,1,1,1,1,1};


float voicePeaks[8];

int lfoTimeMathArray[5] = {250, 500, 1000, 2000, 4000};
int lfoIndex;
bool loopEnv;

float fmRatioArray[9] = {
  .25,.5,.75,1,2,4,8,16,20
};
float octArray[5] = {
  .25,.5,1,2,4
};
bool firstRun = true;


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
float newFreq = 220;
float oldFreq = 220;
float colorArray[8][3]{
  {255, 119, 0},
  {255,238,0},
  {101,255,0},
  {0,255,106},
  {0,199,255},
  {8,0,255},
  {238,0,255},
  {255,0,0},
};
int blinkBrightness;
int blinkControl;
bool lightStepZero;

float frequency[8];
float noTouchVal[8];

float onAvgVals[8][20];
int onAvgCnt;
float onAvgerages[8];

//PRESETS
int paramVals[24];
int presetNum;
bool presetLoaded;
bool presetLoading;
bool savePresetCheck;

//Sequencer
bool slaveFlag;
unsigned long pulseInStamp;
bool doubleStep;
unsigned long doubleInterval = 200;
bool pulseInR;
unsigned long pulseSentTime;
bool tapTempoFlag = false;
int tapTempoAmount;
unsigned long tapTempTimeStamp[4];
//slave MIDI
byte counter; 
byte CLOCK = 248; 
byte START = 250; 
byte CONTINUE = 251; 
byte STOP = 252; 

// [step] [note] extra
int seqNotes[32][9];
// [step] [knob]
int seqParams[32][14];
// [step] [yPos]
float seqYpos[32][8];


float metroInterval = 300;
bool pressStart;
bool seqRunning = false;
int seqStep;
int prevSeqStep;
int seqPage;
bool seqStepClearFlag;
unsigned long seqStepClearTimeStamp;
bool stepActive[8];
int seqLength = 7;
int seqLengthArray[4] = {7,15,23,31};

unsigned long prevMetroTime;

//Menu
bool menuActive;
bool seqEditActive;
int menuPage;
unsigned long clearTimeStamp;




//peaks
AudioAnalyzePeak *peaks[8] = {
  &vPeak1,&vPeak2,&vPeak3,&vPeak4,
  &vPeak5,&vPeak6,&vPeak7,&vPeak8,
};
//envelopes
AudioEffectEnvelope *envs[8] = {
  &envelope1,&envelope2,&envelope3,&envelope4,
  &envelope5,&envelope6,&envelope7,&envelope8,
};
//modulators
AudioSynthWaveformModulated *mods[8] = {
  &modu1,&modu2,&modu3,&modu4,
  &modu5,&modu6,&modu7,&modu8,  
};
//carriers
AudioSynthWaveformSineModulated *cars[8] = {
  &carA1,&carA2,&carA3,&carA4,
  &carA5,&carA6,&carA7,&carA8,
};
//sawsA
AudioSynthWaveformModulated *sawsA[8] = {
  &sawA1,&sawA2,&sawA3,&sawA4,
  &sawA5,&sawA6,&sawA7,&sawA8,
};
//sawsB
AudioSynthWaveformModulated *sawsB[8] = {
  &sawB1,&sawB2,&sawB3,&sawB4,
  &sawB5,&sawB6,&sawB7,&sawB8,
};
//Triangles
AudioSynthWaveform *trinagles[8] = {
  &tri1,&tri2,&tri3,&tri4,
  &tri5,&tri6,&tri7,&tri8,
};
//Filters
AudioFilterStateVariable *filters[8] = {
  &filter1,&filter2,&filter3,&filter4,
  &filter5,&filter6,&filter7,&filter8,
};
//VoiceMixers
AudioMixer4 *voiceMixers[8] = {
  &voiceMixer1,&voiceMixer2,&voiceMixer3,&voiceMixer4,
  &voiceMixer5,&voiceMixer6,&voiceMixer7,&voiceMixer8,
};
//lfoPitch
AudioSynthWaveform *pitchLfos[8] = {
  &lfoPitch1,&lfoPitch2,&lfoPitch3,&lfoPitch4,
  &lfoPitch5,&lfoPitch6,&lfoPitch7,&lfoPitch8,
};
//envFilter
AudioEffectEnvelope *filEnv[8] = {
  &filEnv1,&filEnv2,&filEnv3,&filEnv4,
  &filEnv5,&filEnv6,&filEnv7,&filEnv8,
};

AudioSynthWaveformDc *dcs[8] = {
  &dc1,&dc2,&dc3,&dc4,
  &dc5,&dc6,&dc7,&dc8,
};


String paramNames[24]{
  "Main Vol: ","Attack: ","Decay: ","Octave: ","FM Index: ",
  "Voice Mix: ", "Filter: ","Lfo One Speed: ","Lfo One Amt: ",
  "Filter Env Attack: ", "Filter Env Decay: ",
  "Verb: ", "Lfo Audio Rate: ","Filter Env Loop: ","Y to Mix: ",
  "Y to Filter: ", "Y to Lfo One Speed: ", "Y to Lfo One Amt: ",
  "Y to Lfo 2 Attack: ", "Y to Lfo 2 Decay: ", "Unison Detune: ",
  "Unison Glide Amt: ", "Unison On: ", "Glide On: "
};


void setup() {
  Serial.begin(9600); 

  AudioMemory(48);

  usbMIDI.setHandleRealTimeSystem(RealTimeSystem);
  usbMIDI.setHandleNoteOff(OnNoteOff);
  usbMIDI.setHandleNoteOn(OnNoteOn);
  usbMIDI.setHandleControlChange(OnControlChange);

  for(int i=0; i<8; i++){
    //Envelopes
    envs[i]->delay(0);
    envs[i]->decay(0);
    envs[i]->hold(0);
    envs[i]->sustain(1);
    envs[i]->releaseNoteOn(2);
    //Filter Envs
    filEnv[i]->delay(0);
    filEnv[i]->attack(0);
    filEnv[i]->decay(1000);
    filEnv[i]->hold(0);
    filEnv[i]->sustain(0);
    filEnv[i]->releaseNoteOn(2);


    //modulators
    mods[i]->begin(1,0,WAVEFORM_SINE);
    //Carriers
    cars[i]->amplitude(1);
    cars[i]->mod_index(65535.0);
    //Saws
    sawsA[i]->begin(.25,0,WAVEFORM_SQUARE);
    sawsA[i]->frequencyModulation(12);
    sawsB[i]->begin(.25,0,WAVEFORM_SAWTOOTH);
    trinagles[i]->begin(.25,0,WAVEFORM_TRIANGLE);
    //Filters
    filters[i]->resonance(1.5);
    filters[i]->octaveControl(7);
    //lfos
    pitchLfos[i]->begin(0,0,WAVEFORM_SINE);
    dcs[i]->amplitude(1);
  }  

  //Mixers
  preMix1.gain(0,.25);
  preMix1.gain(1,.25);
  preMix1.gain(2,.25);
  preMix1.gain(3,.25);
  preMix2.gain(0,.25);
  preMix2.gain(1,.25);
  preMix2.gain(2,.25);
  preMix2.gain(3,.25);

  finalMixer.gain(0,.5);
  finalMixer.gain(1,.5);
  finalMixer.gain(2,.5);
  //Verb
  freeverb1.roomsize(1);
  freeverb1.damping(.5);

  pinMode(25, INPUT_PULLUP);
  pinMode(13, INPUT_PULLUP);
  pinMode(14, INPUT_PULLUP);
  pinMode(ClkInPin, INPUT);

  //ENCODER KNOB
  pinMode(encoderPin1, INPUT); 
  pinMode(encoderPin2, INPUT);
  digitalWrite(encoderPin1, HIGH);
  digitalWrite(encoderPin2, HIGH);
  attachInterrupt(encoderPin1, updateEncoder, CHANGE); 
  attachInterrupt(encoderPin2, updateEncoder, CHANGE);

  LEDS.addLeds<APA106,DATA_PIN,COLOR_ORDER>(leds,NUM_LEDS);
  LEDS.setBrightness(40);
  for(int i=0; i<NUM_LEDS; i++){
    leds[i] = CRGB::Black;
  }   
  //led starup
  for(int i=0; i<NUM_LEDS; i++){
    leds[i].setRGB(colorArray[i][0],colorArray[i][1],colorArray[i][2]);
    delay(100);
    FastLED.show();
  }
  for(int i=0; i<NUM_LEDS; i++){
    leds[i] = CRGB::Black;
  }  
  //CLKIN
  attachInterrupt(ClkInPin, pulseInput, CHANGE);
  //CLKOUT
  pinMode(ClkOutPin, OUTPUT);
  
  for(int i=0; i<8; i++){
    noTouchVal[i] = touchRead(noteTouchPins[i]);
    currentYPos[i] = noTouchVal[i];
  }
}



void pulseInput(){
 static unsigned long last_interrupt_time = 0;
 unsigned long interrupt_time = millis();
 if (interrupt_time - last_interrupt_time > 30){
  if(slaveFlag){
    doubleInterval = millis() - pulseInStamp;
  }
  pulseInStamp = millis();
  slaveFlag = true;
  seqRunning = true;
  doubleStep = true;
  seqStep++;
 }
 last_interrupt_time = interrupt_time;
}

void loop() {
  //Serial.println(AudioMemoryUsageMax());

  //MIDI In
  usbMIDI.read();

  //loopEnv
  if(loopEnv){
    for(int i=0; i<8; i++){
      if(filEnv[i]->isSustain()){
        filEnv[i]->noteOn();
      }
    }
  }



  //Blink
  blinkBrightness = 128+127*cos(2*PI/metroInterval*millis());
  //BlnkConst
  blinkControl = 128+127*cos(2*PI/500*millis());

  //Encoder Knob
  if (abs(scaledEncVal - prevScaledEncVal) > 0){
    if(menuActive && !seqEditActive){
      menuPage = scaledEncVal;
      savePresetCheck = false;
      lightsOut();
    }else if (menuActive && seqEditActive){
      seqStep = scaledEncVal;
    }
    prevScaledEncVal = scaledEncVal;
  }

  //Clock
  if((seqRunning && !slaveFlag)){
    if(millis() - prevMetroTime > metroInterval){
      seqStep++;
      prevMetroTime = millis();
    }
  }

  //Slave Double Time
  if(millis() >= (pulseInStamp + doubleInterval/2) && slaveFlag && doubleStep){
    seqStep++;
    doubleStep = false;
  }


  //Sequencer
  if(seqEditActive || seqRunning){
    if(!presetLoading){
      if(abs(seqStep - prevSeqStep) > 0){
        if(slaveFlag && seqStep % 2 == 0){
          digitalWrite(ClkOutPin, HIGH);
        }else if(!slaveFlag){
          digitalWrite(ClkOutPin, HIGH);
        }
        if (seqRunning){
          if (seqStep > seqLength){
            seqStep = 0;
          }
        }else{
          if (seqStep > 31){
            seqStep = 0;
          }
        }
        
        seqPage = (seqStep/8)*8;

        if(!menuActive || (menuActive && seqEditActive)){
          lightsOut();
          leds[seqStep%8].setRGB(100,100,100);
        }
        
        //Notes Off
        seqNotesOff();

        //Notes On   
        for(int s=0; s<8; s++){
          if(seqNotes[seqStep][s]){
            int noteRef = seqNotes[seqStep][s]-1;
            frequency[s] = noteFrequencies[scale][noteRef];
            if(unisonMode){
              newFreq = frequency[s];
              for (int j = 0; j < 8; ++j){
                envs[j]->noteOn();
                filEnv[j]->noteOn();
              }                 
            }else{
              envs[s]->noteOn();
              filEnv[s]->noteOn();
              stepActive[s] = true;
            }
          }
        }
        //Params
        if(!seqEditActive){
          for(int i=0; i<14; i++){
            if(seqParams[seqStep][i]){
              if(i>11){
                setSynthParams(i, seqParams[seqStep][i]-1);
              }else{
                setSynthParams(i, seqParams[seqStep][i]);
              }
            }
          }
        }

        prevSeqStep = seqStep;
      }else{
        digitalWrite(ClkOutPin, LOW);
      }
    }
    //Seq lights
    if(!menuActive || (menuActive && seqEditActive)){
      for(int s=0; s<8; s++){
        for(int i=0; i<8; i++){
          if(seqNotes[s+seqPage][i]){
            if(seqStep%8 == s){
              leds[s].setRGB(255,255,0);
            }else{
              leds[s].setRGB(colorArray[(seqPage/8)+4][0],colorArray[(seqPage/8)+4][1],colorArray[(seqPage/8)+4][2]);
            }
          }
        }
      }
    }
  }

  //Encoder Btn
  if(swBouncers[0].update() && digitalRead(swPins[0]) == 0){
      if((millis() - clearTimeStamp) < 300){
        clearEverything();
      }else{
        clearTimeStamp = millis();
        if(!seqEditActive){
          menuActive = !menuActive;
          savePresetCheck = false;
          if(menuActive) lightsOut();//menuDisplay();
        }else{
          knobThresh = 8;
          seqEditActive = false;
          lightsOut();
          //menuDisplay();
          seqNotesOff();
        }
      }
  }
  //Switches
  for(int i=1; i<3; i++){
    if (swBouncers[i].update() || firstRun){
      paramVals[i+11] = digitalRead(swPins[i]);
      setSynthParams(i+11,paramVals[i+11]);
      //Seq Param Automation
      if(seqEditActive){
        seqParams[seqStep][i+11] = paramVals[i+11]+1;
      }
    }
  }

  //Knobs
  for (int i = 0; i < 12; ++i){
    analogValues[i] = analogRead(analogPins[i]);
    if ((abs(analogValues[i] - analogValuesLag[i]) > knobThresh) || firstRun){
      if(knobLocks[i] && (abs((analogValues[i]/4) - paramVals[i]) < 20)){
        knobLocks[i] = false;
      }  
      if(!knobLocks[i]){
        if(menuActive && menuPage == 4 && i==3 && unisonMode){
            paramVals[20] = analogValues[i] / 4;
            setSynthParams(20, paramVals[20]);
        }else if (menuActive && menuPage == 4 && i==4 && unisonMode){
          paramVals[21] = analogValues[i] / 4;
          setSynthParams(21, paramVals[21]);
        }else{
          paramVals[i] = analogValues[i] / 4;
          setSynthParams(i, paramVals[i]);
        }
        if(seqEditActive){
          seqParams[seqStep][i] = paramVals[i];
        }
      }
      //save Seq Automation
      analogValuesLag[i] = analogValues[i];
    }
  } 

  AudioNoInterrupts();
  for(int i=0; i<8; i++){
    mods[i]->frequency(frequency[i] * fmRatioArray[fmIndex] * octArray[octIndex]);
    cars[i]->frequency((frequency[i] * octArray[octIndex]));
    sawsA[i]->frequency(frequency[i] * octArray[octIndex]);
    sawsB[i]->frequency(frequency[i] * octArray[octIndex]);
    trinagles[i]->frequency((frequency[i] * octArray[octIndex])/2);
    if(!yToMix){
      voiceMixers[i]->gain(0,voiceMixerVal[i]);
      voiceMixers[i]->gain(2,1 - voiceMixerVal[i]);
    }
    if(!yToFilter){
      filters[i]->frequency(filterMulti);
      mods[i]->amplitude(fmMulti);
    }
    if(!ytoLfoOneAmt){
      if(superLfo){
        pitchLfos[i]->amplitude(lfoOneAmt);
      }else{
        pitchLfos[i]->amplitude(lfoOneAmt/100);
      }
    }
    if(!ytofilEnvDecay){
      filEnv[i]->decay(filEnvDecay);
    }
    if(!yTolfoOneSpeed){
      if(superLfo){
        pitchLfos[i]->frequency(frequency[i]*fmRatioArray[superIndex]* octArray[octIndex]);
      }else{
        pitchLfos[i]->frequency(lfoOneFreq);
      }
    }
    if(!yTofilEnvAttack){
      filEnv[i]->attack(filEnvAttack);
    }
  }
  verbMixer.gain(0,1 - verbMix);
  verbMixer.gain(1,verbMix);
  AudioInterrupts();


  //TOUCH STUFF
  for (int i = 0; i < 8; ++i){
    envTrig[i] = touchRead(noteTouchPins[i]);

    if ((envTrig[i] > noTouchVal[i]+100) && noteTouched[i] == false){
      noteTouched[i] = true;
      if(menuActive){
        menuActions(i);
      }else{
        AudioNoInterrupts();
        if(unisonMode){
          newFreq = noteFrequencies[scale][i];   
          for (int j = 0; j < 8; ++j){
            envs[j]->noteOn();
            filEnv[j]->noteOn();
            allOff[j] = false;
          } 
        }else{
          frequency[i] = noteFrequencies[scale][i];
          envs[i]->noteOn();
          filEnv[i]->noteOn();
        }
        AudioInterrupts();
      }
    }else if ((envTrig[i] < noTouchVal[i]+100) && noteTouched[i] == true){
      noteTouched[i] = false;
      if(!menuActive || (menuPage == 3 && seqEditActive)){
        AudioNoInterrupts();
        if(unisonMode){
          for (int j = 0; j < 8; ++j){
            if((envTrig[j] < noTouchVal[j]+100)){
              allOff[j] = true;
            }
          }
          if(allOff[0] && allOff[1] && allOff[2] && allOff[3] && allOff[4] && allOff[5] && allOff[6] && allOff[7]){
            for (int j = 0; j < 8; ++j){
              envs[j]->noteOff();
              //filEnv[j]->noteOff();
            }
          }
        }else{
          envs[i]->noteOff();
          //filEnv[i]->noteOff();
        }
        AudioInterrupts();
      }
    }

    if(glide){
      if(oldFreq < newFreq){
        oldFreq = oldFreq * glideSpeed;
      }else if(oldFreq > newFreq){
        oldFreq = oldFreq / glideSpeed;
      }
    }else{
      oldFreq = newFreq;
    }

    if(unisonMode){
      for(int k=0; k<8; k++){
        frequency[k] = oldFreq*detuneAmt[k];
      }
    }
    
    //Modulation Source
    if(seqNotes[seqStep][i] && seqRunning){
      scaledYpos[i] = mapfloat(seqYpos[seqStep][i], noTouchVal[i], 5000, .1, 2);
    }else{
      scaledYpos[i] = mapfloat(envTrig[i], noTouchVal[i], 5000, .1, 2);
    }

    if(noteTouched[i] || (seqNotes[seqStep][i] && noteTouched[i] && seqEditActive) || (seqNotes[seqStep][i] && seqRunning)){

      if(abs(scaledYpos[i] - prevScaledYpos[i]) < .5){
        if(seqEditActive){
          seqYpos[seqStep][i] = envTrig[i];
        }        
        //Voice Modulation
        AudioNoInterrupts();
        if(yToFilter){
          filters[i]->frequency(pow(filterMulti,scaledYpos[i]));
          mods[i]->amplitude(fmMulti*scaledYpos[i]);
        }
        if(yToMix){
          voiceMixers[i]->gain(0,scaledYpos[i]/2);
          voiceMixers[i]->gain(2,1 - (scaledYpos[i]/2));
        }      
        if(ytoLfoOneAmt){
          if(superLfo){
            pitchLfos[i]->amplitude(lfoOneAmt*scaledYpos[i]);
          }else{
            pitchLfos[i]->amplitude((lfoOneAmt/100)*scaledYpos[i]);
          }
        }
        if(ytofilEnvDecay){
          filEnv[i]->decay(filEnvDecay/scaledYpos[i]);
        }
        if(yTolfoOneSpeed){
          if(superLfo){
            pitchLfos[i]->frequency(frequency[i]*scaledYpos[i]*fmRatioArray[superIndex]* octArray[octIndex]);
          }else{
            pitchLfos[i]->frequency(pow(lfoOneFreq,scaledYpos[i]));
          }
        }
        if(yTofilEnvAttack){
          filEnv[i]->attack(filEnvAttack/scaledYpos[i]);
        }
        AudioInterrupts();
      }
      prevScaledYpos[i] = scaledYpos[i];
    }
  }

  //blink tap tempo
  if(menuActive){
    menuDisplay();
  }
  //Light notes//peaks
  for(int i=0; i<8; i++){
    if(peaks[i]->available()){
      voicePeaks[i] = peaks[i]->read();
      if(!menuActive && !seqRunning){
        leds[i].setRGB(colorArray[i][0]*voicePeaks[i],colorArray[i][1]*voicePeaks[i],colorArray[i][2]*voicePeaks[i]);
      }
    }else{
      if(!menuActive && !seqRunning){
        leds[i].setRGB(0,0,0);
      }
    }
  }
  //Save Preset Check
  if(savePresetCheck && menuActive && menuPage==1){
    leds[presetNum].setRGB(blinkBrightness, 0, 0); 
  }
  //Kill Slave
  if((millis() - pulseInStamp > 2000) && slaveFlag){
    doubleInterval = 200;
    slaveFlag = false;
    seqRunning = false;
    doubleStep = false;
    resetSeq();
    seqNotesOff();
  }

  FastLED.show();
  firstRun = false;
  
}
void OnControlChange(byte channel, byte control, byte value){
  //Serial.println("CC: "+String(control)+" Val: "+String(value));
  setSynthParams(control-1, value*2);
}

void OnNoteOn(byte channel, byte note, byte velocity){
  float freq = 440.0 * powf(2.0, (float)(note - 69) * 0.08333333);
  AudioNoInterrupts();
  voiceNum = lowestAmp();
  for(int i=0; i<8; i++){
    if (voiceUsed[voiceNum]){
      voiceNum++;
      if (voiceNum > 7){
        voiceNum = 0;
      }
    }
  }
  voiceUsed[voiceNum] = freq;
  frequency[voiceNum] = freq;

  if(unisonMode){
    newFreq = freq;
    for(int i=0; i<8; i++){
      envs[i]->noteOn();
      filEnv[i]->noteOn();
    }  
  }else{
    envs[voiceNum]->noteOn();
    filEnv[voiceNum]->noteOn();
  }
  AudioInterrupts();
}

void OnNoteOff(byte channel, byte note, byte velocity){
  float freq = 440.0 * powf(2.0, (float)(note - 69) * 0.08333333);
  AudioNoInterrupts();
  for (int i = 0; i < 8; ++i){
    if(unisonMode){
      if(newFreq == freq){
        voiceUsed[i] = 0;
        envs[i]->noteOff();
      }
    }else{
      if(frequency[i] == freq){
        voiceUsed[i] = 0;
        envs[i]->noteOff();
      }
    }
  }
  AudioInterrupts();
}

int lowestAmp(){
  int index = 0;
  for (int i = 0; i < 8; i++){
    if (voicePeaks[i] < voicePeaks[index]) {
      index = i;
    }
  }
  return index;
}


void seqNotesOff(){
  for(int s=0; s<8; s++){
    if(stepActive[s] || unisonMode){
      envs[s]->noteOff();
      //filEnv[s]->noteOff();
      stepActive[s] = false;
    }
  }
}
void resetSeq(){
  seqStep = seqLength;
  prevSeqStep = seqStep;
}

void menuDisplay(){
  //lightsOut();
  for(int i=0; i<8; i++){
    if(menuPage == 0){
      leds[i].setRGB(0,255,0);
    }else if(menuPage == 1){
      leds[i].setRGB(255,0,0);
    }
  }
  if(menuPage == 2){
    leds[scale].setRGB(255,255,0);  
  }  

  if(menuPage == 3 && !seqEditActive){
    if(tapTempoFlag){
      leds[1].setRGB(255,0,0);
    }else{
      if(seqRunning){
        leds[1].setRGB(blinkBrightness,0,blinkBrightness);
      }else{
        leds[1].setRGB(255,0,255); 
      }
    }
    for(int i=0; i<8; i++){
      for(int i=0; i<8; i++){
        if(seqRunning){
          leds[0].setRGB(0,255,0);
        }else{
          leds[0].setRGB(0,0,255);
        }
        leds[2].setRGB(255,255,255);

        if(i > 3){
          leds[i].setRGB(0,0,255);
        }
      }
      if(seqLength == 7){
        leds[4].setRGB(255,255,0);
      }else if(seqLength == 15){
        leds[5].setRGB(255,255,0);
      }else if(seqLength == 23){
        leds[6].setRGB(255,255,0);
      }else{
        leds[7].setRGB(255,255,0);
      }
    }
  }else if(menuPage == 3 && seqEditActive){
    if(lightStepZero){
      leds[0].setRGB(100,100,100);
      lightStepZero = false;
    }
  }
  if(menuPage == 0 || menuPage == 1){
    if(presetLoaded){
      leds[presetNum].setRGB(0,0,255);
    }
  }
  //Special Ypos
  if(menuPage == 4){
    unisonMode ? leds[0].setRGB(blinkControl,blinkControl,blinkControl) : leds[0].setRGB(255,255,255);
    glide ? leds[1].setRGB(0,blinkControl,blinkControl) : leds[1].setRGB(0,255,255);
    yToMix ? leds[2].setRGB(blinkControl,0,0) : leds[2].setRGB(255,0,0);
    yToFilter ? leds[3].setRGB(0,blinkControl,0) : leds[3].setRGB(0,255,0);
    yTolfoOneSpeed ? leds[4].setRGB(0,0,blinkControl) : leds[4].setRGB(0,0,255);
    ytoLfoOneAmt ? leds[5].setRGB(0,blinkControl,blinkControl) : leds[5].setRGB(0,255,255);
    yTofilEnvAttack ? leds[6].setRGB(blinkControl,0,blinkControl) : leds[6].setRGB(255,0,255);
    ytofilEnvDecay ? leds[7].setRGB(blinkControl,blinkControl,0) : leds[7].setRGB(255,255,0);
  }
}
void menuActions(int i){
  switch (menuPage) {
    case 0:
      loadPreset(i*24);
      presetNum = i;
      lightsOut();
      break;
    case 1:
      presetNum = i;
      if(savePresetCheck){
        savePreset(i*24);
        lightsOut();
        savePresetCheck = false;
      }else{
        savePresetCheck = true;
      }
      break;
    case 2:
      scale = i;
      lightsOut();
      break;
    case 3:
      if(seqEditActive){
        AudioNoInterrupts(); 
        if(unisonMode){
          newFreq = noteFrequencies[scale][i];
          for(int j=0; j<8; j++){
            envs[j]->noteOn();
            filEnv[j]->noteOn();
            allOff[j] = false;
          }
        }else{
          frequency[i] = noteFrequencies[scale][i];
          envs[i]->noteOn();
          filEnv[i]->noteOn();
        }
        AudioInterrupts();
        if(!seqNotes[seqStep][i]){
          seqNotes[seqStep][i] = i+1;
          leds[seqStep%8].setRGB(0,255,0);
        }else{
          seqNotes[seqStep][i] = false;
          seqNotesOff();
          if(!seqNotes[seqStep][i]){
            leds[seqStep%8].setRGB(100,100,100);
          }
        }
      }else{
        if(i == 0){
          seqRunning = !seqRunning;
          if(!seqRunning){
            for(int n=0; n<8; n++){
              AudioNoInterrupts(); 
              envs[n]->noteOff();
              AudioInterrupts();    
            }
          }else{
            resetSeq();
            pressStart = true;
          }
        }else if(i == 1){
          tapTempoFlag = true;
          tapTempTimeStamp[tapTempoAmount] = millis();
          tapTempoAmount++;
          if(tapTempoAmount > 3){
            float tapAverageOne;
            tapAverageOne = tapTempTimeStamp[1] - tapTempTimeStamp[0];
            float tapAverageTwo;
            tapAverageTwo = tapTempTimeStamp[2] - tapTempTimeStamp[1];
            float tapAverageThree;
            tapAverageThree = tapTempTimeStamp[3] - tapTempTimeStamp[2];
            float totalTapAverage;
            totalTapAverage = ((tapAverageOne+tapAverageTwo+tapAverageThree)/3);
            metroInterval = totalTapAverage;
            tapTempoAmount = 0;
            tapTempoFlag = false;
          } 
        }else if(i == 2){
          seqEditActive = true;
          seqRunning = false;
          encoderValue = 0;
          knobThresh = 20;
          lightStepZero = true;
        }else if(i > 3){
          seqLength = seqLengthArray[i-4];
        }
        lightsOut();
      }
      break;
    case 4:
      if(i==0) unisonMode ? setSynthParams(22,0) : setSynthParams(22,1);
      if(i==1) glide ? setSynthParams(23,0) : setSynthParams(23,1);
      if(i==2) yToMix ? setSynthParams(14,0) : setSynthParams(14,1);
      if(i==3) yToFilter ? setSynthParams(15,0) : setSynthParams(15,1);
      if(i==4) yTolfoOneSpeed ? setSynthParams(16,0) : setSynthParams(16,1);
      if(i==5) ytoLfoOneAmt ? setSynthParams(17,0) : setSynthParams(17,1);
      if(i==6) yTofilEnvAttack ? setSynthParams(18,0) : setSynthParams(18,1);
      if(i==7) ytofilEnvDecay ? setSynthParams(19,0) : setSynthParams(19,1);
      break;
  }
}
void lightsOut(){
  for(int i=0; i<8; i++){
    leds[i].setRGB(0,0,0);
  }
}
void loadPreset(int presetNumber){
  AudioNoInterrupts();
  presetLoading = true;
  for(int i=0; i<24; i++){
    if(i<8){
      filEnv[i]->noteOff();
      envs[i]->noteOff();
    }
    paramVals[i] = EEPROM.read(i+presetNumber);
    setSynthParams(i, EEPROM.read(i+presetNumber));
    Serial.println(paramNames[i] + String(paramVals[i]));

    if(i<12){
      knobLocks[i] = true;
    }
  }
  presetLoaded = true;
  presetLoading = false;
  menuActive = false;
  AudioInterrupts();
}
void savePreset(int presetNumber){
  AudioNoInterrupts();
  for(int i=0; i<24; i++){
    EEPROM.write(i+presetNumber, paramVals[i]);
    Serial.println(paramNames[i] + String(paramVals[i]));
  }
  presetLoaded = true;
  menuActive = false;
  AudioInterrupts();
}



void setSynthParams(int paramNum, float paramVal){  
  // Serial.print(paramNum);
  // Serial.print(":: ");
  // Serial.println(paramVal);

  AudioNoInterrupts();
  if(paramNum < 12 || paramNum == 20 || paramNum == 21){
    paramVal = paramVal * 4; 
  }
  switch (paramNum) {
    case 0:
      //Main Vol
      finalMixer.gain(0,paramVal/1023);
      finalMixer.gain(1,paramVal/1023);
      break;
    case 1:
      //Attack
      for(int i=0; i<8; i++){
        envs[i]->attack((paramVal * 4) + 5);
      }
      break;
    case 2:
      //Decay
      for(int i=0; i<8; i++){
        envs[i]->release((paramVal * 4) + 5);
      }
      break;
    case 3:
      //Octave
      octIndex = paramVal / 204.6;
      octIndex = constrain(octIndex, 0, 4);
      break;
    case 4:
      //FM Index
      fmIndex = paramVal / 113.6;
      fmIndex = constrain(fmIndex, 0, 8);
      break;
    case 5:
      //VoiceMixer
      for(int i=0; i<8; i++){
        voiceMixerVal[i] = paramVal / 1023;
      }
      break;
    case 6:
      //Filter Res and FMAmp
      filterMulti = (paramVal*2)+10;
      fmMulti = (paramVal / 10230)+.01;
      break; 
    case 7:
      //LFO One Freq
      if(superLfo){
        superIndex = paramVal / 113.6;;
        superIndex = constrain(superIndex, 0, 8);
      }else{
        lfoOneFreq = paramVal / 128;
      }
      break;
    case 8:
      //LFO One Amt
      lfoOneAmt = paramVal/1023;
      break;
    case 9:
      //filter env Attack
      filEnvAttack = paramVal*4;
      break;  
    case 10:
      //filter env Decay
      filEnvDecay = paramVal*4;
      break;
    case 11:
      //Verb Mix
      verbMix = paramVal/3069;
      break;
    case 12:
      //LFO Audio Rate
      paramVal ? superLfo = true : superLfo = false;
      break;
    case 13:
      //filter env loop
      paramVal ? loopEnv = true : loopEnv = false;
      break;
    case 14:
      //Y-to-Mix
      paramVal ? yToMix = true : yToMix = false;
      paramVals[14] = yToMix;
      break;
    case 15:
      //Y-to-filter
      paramVal ? yToFilter = true : yToFilter = false;
      paramVals[15] = yToFilter;
      break;
    case 16:
      //Y-to-LFO One Speed
      paramVal ? yTolfoOneSpeed = true : yTolfoOneSpeed = false;
      paramVals[16] = yTolfoOneSpeed;
      break;
    case 17:
      //Y-to-LFO One Amt
      paramVal ? ytoLfoOneAmt = true : ytoLfoOneAmt = false;
      paramVals[17] = ytoLfoOneAmt;
      break;
    case 18:
      //Y-to-LFO Two Attack
      paramVal ? yTofilEnvAttack = true : yTofilEnvAttack = false;
      paramVals[18] = yTofilEnvAttack;
      break;
    case 19:
      //Y-to-LFO Two Decay
      paramVal ? ytofilEnvDecay = true : ytofilEnvDecay = false;
      paramVals[19] = ytofilEnvDecay;
      break;    
    case 20:
      //Unison Detune
      for(int i=0; i<8; i++){
        detuneAmt[i] = 1+(paramVal/(16368*(i+1)));
      }
      break;  
    case 21:
      //Unison Glide Speed
      glideSpeed = mapfloat(paramVal, 0, 1023, 1.0001, 1.01);
      break;
    case 22:
      //Unision On
      paramVal ? unisonMode = true : unisonMode = false;
      paramVals[22] = unisonMode;
      break;
    case 23:
      //Glide On
      paramVal ? glide = true : glide = false;
      paramVals[23] = glide;
      break;
  }

  AudioInterrupts();
}
void clearEverything(){
    firstRun = true;
    presetLoaded = false;
    clearTimeStamp = millis();
    seqRunning = false;
    //clear notes and params
    for(int s=0; s<32; s++){
      if(s<12){knobLocks[s] = false;}
      if(s<8){envs[s]->noteOff();}
      for(int a=0; a<14; a++){
        seqParams[s][a] = false;
      }
      for(int n=0; n<8; n++){
        seqNotes[s][n] = false;
        seqYpos[s][n] = false;
      }
    }
    seqNotesOff();
    slaveFlag = false;
    savePresetCheck = false;
    seqEditActive = false;
    knobThresh = 8;
    yToMix = false;
    yToFilter = false;
    yTofilEnvAttack = false;
    yTolfoOneSpeed = false;
    ytoLfoOneAmt = false;
    ytofilEnvDecay = false;
    unisonMode = false;
    glide = false;
    for(int i=0; i<8; i++){
      leds[i].setRGB(255,0,0);
      FastLED.show();
      delay(100);
      leds[i].setRGB(0,0,0);
      FastLED.show();
    }
    menuActive = false;
    lightsOut();
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
  if(menuActive && !seqEditActive){
    if(encoderValue > 16) encoderValue = 16;
  }else if(menuActive && seqEditActive){
    if (encoderValue > 124) encoderValue = 124;
  }

  
  scaledEncVal = encoderValue/4;

  lastEncoded = encoded; //store this value for next time
}

float mapfloat(float x, float in_min, float in_max, float out_min, float out_max)
{
 return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}


int average (float * array, int len){
  long sum = 0L ;
  for (int i = 0 ; i < len ; i++)
    sum += array [i];

  return  ((float) sum) / len;
}

void RealTimeSystem(byte realtimebyte) { 
  if(realtimebyte == START || realtimebyte == CONTINUE) { 
    counter = 0;
    slaveFlag = false;
    seqRunning = false;
    resetSeq();    
  } 
  
  if(realtimebyte == 248) { 
    counter++; 
    if(counter == 6) {     
      counter = 0; 
    }  
    if(counter == 1){
      pulseInStamp = millis();
      slaveFlag = true;
      seqRunning = true;      
      seqStep++;
    }
  } 
  if(realtimebyte == STOP) {
    seqNotesOff();
    slaveFlag = false;
    seqRunning = false;  
    resetSeq();
  } 
}

void printTouchInfoInfo(int touchPlate){
  Serial.print("Touch Change: ");
  Serial.print(touchPlate);
  Serial.print(" : ");
  Serial.print(noTouchVal[touchPlate]);
  Serial.print(" : ");
  Serial.println(currentYPos[touchPlate]);
}


