/*
 * Digital Futures
 * Seamus Neufeld 
 * Button Controlling a Neo-pixel pattern
 * Code used from AdaFruit Neopixel's example strandTest
 */


#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
 #include <avr/power.h> 
#endif
#define LED_PIN    6
#define LED_COUNT 8

// Declare our NeoPixel strip object:
Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);
// Argument 1 = Number of pixels in NeoPixel strip
// Argument 2 = Arduino pin number (most are valid)
// Argument 3 = Pixel type flags, add together as needed:


void setup() {
  pinMode(13, INPUT);

#if defined(__AVR_ATtiny85__) && (F_CPU == 16000000)
  clock_prescale_set(clock_div_1);
#endif
 
  strip.begin();           // INITIALIZE NeoPixel strip object (REQUIRED)
  strip.show();            // Turn OFF all pixels ASAP
  strip.setBrightness(50); // Set BRIGHTNESS to about 1/5 (max = 255)
}


void loop() {
  if (digitalRead(13) == HIGH){
  colorWipe(strip.Color(0,   255,   255), 50); 
  colorWipe(strip.Color(255,   0,   255), 50); 
  colorWipe(strip.Color(0,   255,   255), 50); 

  }else{
    colorWipe(strip.Color(0,   0,   0), 50); 

  }
}
  
 
void colorWipe(uint32_t color, int wait) {
  for(int i=0; i<strip.numPixels(); i++) { // For each pixel in strip...
    strip.setPixelColor(i, color);         //  Set pixel's color (in RAM)
    strip.show();                          //  Update strip to match
    delay(wait);                           //  Pause for a moment
  }
}
