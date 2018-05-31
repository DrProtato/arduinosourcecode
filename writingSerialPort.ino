int aNumber = 1;
void setup() {
  Serial.begin(115200);

}

void loop() {
  Serial.println(aNumber);
  if(aNumber < 32767) {
    aNumber ++;
  }
  else {
    aNumber --;
  }
}
