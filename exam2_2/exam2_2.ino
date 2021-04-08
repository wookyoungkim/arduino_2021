void setup() {
  Serial.begin(9600);
  // 9,11 port를 input mode로 
  pinMode(9, INPUT);
  pinMode(11, INPUT);
}
byte count = 0;
void loop() {
  // 결과 저장할 boolean 배열 선언 
  if (digitalRead(9) == LOW) {
    delay(200);
    if(count == 0) {
      
    } else {
      count--;
    }
    Serial.println(count);
  }
  if (digitalRead(11) == LOW) {
    delay(200);
    if(count == 255) {
      
    } else {
      count--;
    }
    Serial.println(count);
  }
}
