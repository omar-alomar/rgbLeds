#include <FastLED.h>
#define LED_PIN 2
#define NUM_LEDS 166

CRGB leds[NUM_LEDS];

uint8_t hue = 0;

void setup() {
    FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
    
    FastLED.setBrightness(250);
    FastLED.setCorrection(TypicalLEDStrip);
}

void loop() {
  for (int i = 0; i < NUM_LEDS; i++) {
    //leds[i] = CHSV(hue, 255, 255);
    leds[i] = CHSV(hue + (i*2), 255, 255);
  }

  EVERY_N_MILLISECONDS(4){
    hue++;
  }

  FastLED.show();
}