/*
 * Digital Futures
 * Seamus Neufeld 
 * Light sensors linked with LEDs
 */

void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  //declares pin modes
  
  Serial.begin(9600);
  //declares serial monitor

}

void loop() {
    Serial.println(analogRead(0)); //prints serial of the analog input 0 
    if(analogRead(0) < 100) { //determines weather the light is on or off
      digitalWrite(13, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);//turns light on or off
    }else if (analogRead(0) < 300) {
      digitalWrite(13, LOW);
      digitalWrite(12, HIGH);
      digitalWrite(11, LOW);
    }else if (analogRead(0) < 900) {
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(11, HIGH);
    }
}
