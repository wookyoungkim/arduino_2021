int timer;
void setup() {
  Serial.begin(9600);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  
  // 출력 초기화 
  digitalWrite(7,1);
  digitalWrite(8,1);
}

void loop() {
  if (timer == 10) {
    digitalWrite(7, 0);
    Serial.println("Relay 1 is ON");
  } else if (timer == 20) {
    digitalWrite(8, 0);
    Serial.println("Relay 2 is ON");
  } else if (timer == 30) {
    digitalWrite(7,1);
    digitalWrite(8,1);
    Serial.println("Relay 1,2 are OFF");
  }
  timer += 1;
  delay(1000);
}
