/*
 * Digital Futures
 * Seamus Neufeld 
 * Light Sculpture
 * Tge for loop is taken from the Analog Fade example within the IDE
 */

void setup() {
    pinMode(11, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(6, OUTPUT);
//sets pins 11,10, 9 and 6 to output
}

void loop() {

for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 10) {
    // sets the value (range from 0 to 255):
    analogWrite(11, fadeValue);
    // waits for 30 milliseconds to see the dimming effect
    delay(10);
  }
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 3) {
    // sets the value (range from 0 to 255):
    analogWrite(11, fadeValue);
    // waits for 30 milliseconds to see the dimming effect
    delay(10);
  }

for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 10) {
    // sets the value (range from 0 to 255):
    analogWrite(10, fadeValue);
    // waits for 30 milliseconds to see the dimming effect
    delay(10);
  }
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 3) {
    // sets the value (range from 0 to 255):
    analogWrite(10, fadeValue);
    // waits for 30 milliseconds to see the dimming effect
    delay(10);
  }
for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 10) {
    // sets the value (range from 0 to 255):
    analogWrite(9, fadeValue);
    // waits for 30 milliseconds to see the dimming effect
    delay(10);
  }
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 3) {
    // sets the value (range from 0 to 255):
    analogWrite(9, fadeValue);
    // waits for 30 milliseconds to see the dimming effect
    delay(10);
  }

for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 10) {
    // sets the value (range from 0 to 255):
    analogWrite(6, fadeValue);
    // waits for 30 milliseconds to see the dimming effect
    delay(10);
  }
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 3) {
    // sets the value (range from 0 to 255):
    analogWrite(6, fadeValue);
    // waits for 30 milliseconds to see the dimming effect
    delay(10);
  }



  

}
