/*
 * Digital Futures
 * Seamus Neufeld, Connor  
 * USELESS ROBOT (PROJECT OOF) Turns a light Swtich On and OFf
 */


#include <Servo.h> 
Servo myservo; //declares servo motor
void setup() {
  myservo.attach(9); //sets pin mode of pin 9 to the servo
  pinMode(13, OUTPUT); //sets pin 13 to output
}

void loop() {
  myservo.write(10); //turns servo to the first position
  digitalWrite(13, HIGH); //turns DC motor on
  delay(1000); //delays the next two functions
  digitalWrite(13, LOW); // turns DC motor off
  myservo.write(80); //turns servo to the second position
  delay(1000); //delays the next two functions
}
