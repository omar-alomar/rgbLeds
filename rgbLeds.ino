#include <FastLED.h>
#define LED_PIN 2
#define NUM_LEDS 12

CRGB leds[NUM_LEDS];

viod setup() {
    FastLED.addLeds<WS2812, LED_PIN, RGB
}