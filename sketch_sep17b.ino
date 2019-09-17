/*
 * Digital Futures
 * Seamus Neufeld 
 * LED Blink and Fade
 * for loop is taken from the Analog Fade example within the IDE
 */

void setup() {
  pinMode(9, OUTPUT); 
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  //sets pins 9,12 and 13 to output

}

void loop() {
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    // sets the value (range from 0 to 255):
    analogWrite(9, fadeValue);
    // waits for 30 milliseconds to see the dimming effect
    delay(30);
  }
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
    // sets the value (range from 0 to 255):
    analogWrite(9, fadeValue);
    // waits for 30 milliseconds to see the dimming effect
    delay(30);
  }
  digitalWrite(13, HIGH); //sets pin 13 to on
  digitalWrite(12, HIGH); //sets pin 12 to on
  delay(500);
  digitalWrite(13, LOW); //sets pin 13 to off
  digitalWrite(12, LOW); //sets pin 13 to off
}
