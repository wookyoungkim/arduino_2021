void setup() {
  Serial.begin(9600);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  for (int i=9; i<13; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  if (digitalRead(5) == LOW) {
    for (int i=9; i<13; i++){
      digitalWrite(i, 0);
      Serial.print("LED ");
      Serial.print(i-8);
      Serial.println(" is on");
      delay(200);
    }
  } else if (digitalRead(6) == LOW) {
    for (int i=12; i>8; i--){
      digitalWrite(i, 1);
      Serial.print("LED ");
      Serial.print(i-8);
      Serial.println(" is off");
      delay(200);
      }
  }
}
