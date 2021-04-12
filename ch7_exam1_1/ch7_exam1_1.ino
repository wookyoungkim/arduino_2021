void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(5, INPUT);
  for (int i=9; i<13; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  // default OFF 상태로 만들기
  for(int i=9; i<13; i++){
    digitalWrite(i, 1);
  }
  if (digitalRead(5) == LOW) {
    for (int i=9; i<13; i++){
      digitalWrite(i, 0);
      Serial.print("LED ");
      Serial.print(i-8);
      Serial.println(" is on");
      delay(500);
    }
  }
}
