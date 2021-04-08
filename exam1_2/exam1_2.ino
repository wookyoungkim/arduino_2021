void setup() {
  // digital port 5번부터 12번까지 디지털 출력으로 설정 
  for(int i=5; i<13; i++){
    pinMode(i, OUTPUT);
  }
}

void loop() {
  // default OFF 상태로 만들기
  for(int i=5; i<13; i++){
    digitalWrite(i, 1);
  }
  // LED 1번부터 8번까지 순차적으로 1개씩 ON/OFF
  for(int i=5; i<13; i++){
    digitalWrite(i, 0);
    delay(1000);
    digitalWrite(i, 1);
    delay(1000);
  }
}
