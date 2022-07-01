#include <FastLED.h>


#define LED_PIN     9
#define NUM_LEDS    4
#define BRIGHTNESS  50
#define LED_TYPE    WS2811
#define COLOR_ORDER GRB
CRGB leds[NUM_LEDS];

int ldrPin = A0;
int ldrPin2 = A1;
int ldrPin3 = A2;
#define NUM_LDR   3
int ldrRead;
int ldrRead2;
int ldrRead3;
int inverso;

void setup() {
  FastLED.addLeds<LED_TYPE, LED_PIN, COLOR_ORDER>(leds, NUM_LEDS).setCorrection( TypicalLEDStrip );
  FastLED.setBrightness(  BRIGHTNESS );
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop(){
 ldrRead = map(analogRead(ldrPin),400,1023,0,255);
 ldrRead2 = map(analogRead(ldrPin2),400,1023,0,255);
 ldrRead3 = map(analogRead(ldrPin3),400,1023,0,255);
 inverso = 255 - ((ldrRead + ldrRead2 + ldrRead3)/NUM_LDR); // dividir ldrRead pelo numero de ldr no sistema
 for (int i = 0; i < NUM_LEDS; i++) {
 leds[i].setRGB(255, 255, 255);
 FastLED.setBrightness(inverso);
 FastLED.show();
 Serial.println(inverso);
 }
}