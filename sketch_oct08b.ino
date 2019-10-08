/*
 * Digital Futures
 * Seamus Neufeld 
 * Light sensors linked with Servo
 */


#include <Servo.h> 
Servo myservo; //declares servo motor
void setup() {
  myservo.attach(9); //sets pin mode 0f pin 9 to the servo
  Serial.begin(9600); //declares serial monitor
}

void loop() {
   Serial.println(analogRead(0)); //prints serial of the analog input 0 
    if(analogRead(0) < 100) { //determines weather the light sensor is under 100
      digitalWrite(9, HIGH); //sets servo output to high
    }else{
  myservo.write(0); //sets servo position to 0

    }
}
