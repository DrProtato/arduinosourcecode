int aNumber = 100;
void setup() { Serial.begin(115200);}
void loop() {
  if(digitalRead(7)){
  aNumber = aNumber + 1;
  tone(3, aNumber);
  delay(100);
  } 
  else if(aNumber > 100) {
    noTone(3);
    aNumber = aNumber - 1;
    }
     else {
       noTone(3);
      }
}
