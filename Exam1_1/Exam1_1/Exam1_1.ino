void setup() {
  // 4번째 LED -> digital port 8 설정 
  pinMode(8, OUTPUT);

}

void loop() {
  // LOW -> 0.5초 delay -> HIGH -> 0.5초 delay
  digitalWrite(8, 0);
  Serial.println("LED 4 is on");
  delay(500);
  digitalWrite(8, 1);
  Serial.println("LED 4 is on");
  delay(500);
}
