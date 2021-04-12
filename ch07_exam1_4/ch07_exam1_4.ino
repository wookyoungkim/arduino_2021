void setup() {
  Serial.begin(9600);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  for (int i=9; i<13; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  if (digitalRead(7) == LOW) {
    for (int i=9; i<13; i++) {
      digitalWrite(i, 0);
    }
  } else if (digitalRead(8) == LOW) {
    for (int i=9; i<13; i++) {
      digitalWrite(i, 1);
    }
  }
}
