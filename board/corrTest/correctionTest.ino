#include <FastLED.h>
#define LED_PIN 2
#define NUM_LEDS 124

CRGB leds[NUM_LEDS];

void setup() {
    FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
    
    FastLED.setBrightness(250);
    FastLED.setCorrection(TypicalPixelString);
}

void loop() {
  fill_solid(leds, NUM_LEDS, CRGB::White);
  
  FastLED.setCorrection(UncorrectedColor);
  //leds[0] = CRGB::Red;
  FastLED.show();
  delay(2000);

  FastLED.setCorrection(TypicalLEDStrip);
  //leds[0] = CRGB::Green;
  FastLED.show();
  delay(2000);

  FastLED.setCorrection(TypicalPixelString);
  //leds[0] = CRGB::Blue;
  FastLED.show();
  delay(2000);
  
}