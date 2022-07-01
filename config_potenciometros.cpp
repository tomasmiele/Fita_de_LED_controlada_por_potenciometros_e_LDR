#include <FastLED.h>

#define LED_PIN     9
#define NUM_LEDS    4
#define BRIGHTNESS  50
#define LED_TYPE    WS2811
#define COLOR_ORDER GRB
CRGB leds[NUM_LEDS];

int potPin = A0;
int potPin2 = A1;
int potPin3 = A2;
int r;
int g;
int b;

void setup() {
  FastLED.addLeds<LED_TYPE, LED_PIN, COLOR_ORDER>(leds, NUM_LEDS).setCorrection( TypicalLEDStrip );
  FastLED.setBrightness( BRIGHTNESS );
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  r = map(analogRead(potPin),0,1023,0,255);
  g = map(analogRead(potPin2),0,1023,0,255);
  b = map(analogRead(potPin3),0,1023,0,255);
  for (int i = 0; i < NUM_LEDS; i++) {
  leds[i].setRGB(r, g, b);
  FastLED.show();
  Serial.println(analogRead(r));
  Serial.println(analogRead(g));
  Serial.println(analogRead(b));
  Serial.println("\n\n");
  delay(2000);
  }
}