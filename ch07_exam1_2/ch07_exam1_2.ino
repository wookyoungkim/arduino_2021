void setup() {
  Serial.begin(9600);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  for (int i=9; i<13; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  boolean value6 = digitalRead(6);
  boolean value7 = digitalRead(7);
  if (value6 == LOW) {
    // 1,2번 LED 켜고 3,4번 LED 끄기 
    digitalWrite(9,0);
    digitalWrite(10,0);
    digitalWrite(11,1);
    digitalWrite(12,1);
  } else if (value7 == LOW) {
    // 1,2번 LED 끄고 3,4번 LED 켜기
    digitalWrite(9,1);
    digitalWrite(10,1);
    digitalWrite(11,0);
    digitalWrite(12,0);
  }
}
