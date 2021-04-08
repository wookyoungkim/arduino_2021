void setup() {
  Serial.begin(9600);
  // 5~12 port를 input mode로 
  for (int i=5; i<13; i++) {
    pinMode(i, INPUT);
  }
}

void loop() {
  for (int i=5; i<13; i++) {
    if (digitalRead(i) == LOW) {
      Serial.print("Button ");
      Serial.print(i-4);
      Serial.println(" is on");
    }
  }
  delay(200);
}
