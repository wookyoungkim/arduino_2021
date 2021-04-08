void setup() {
  // digital port 5번부터 12번까지 디지털 출력으로 설정:
  for(int i=5; i<13; i++){
    pinMode(i, OUTPUT);
  }
}

void loop() {
  // default OFF 상태로 만들기
  for(int i=5; i<13; i++){
    digitalWrite(i, 1);
  }
  // 주어진 순서대로 on하기 
  int arr[8] = {5, 9, 6, 10, 7, 11, 8, 12};
  for(int i=0; i<8; i++) {
    digitalWrite(arr[i], 0);
    delay(500);
  }
}
