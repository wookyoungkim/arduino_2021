void setup() {
  // put your setup code here, to run once:

}

void loop()
{
  byte data = 0b11110101;   // 데이터

  // 각 위치의 비트값 확인
  Serial.print("Bit Extraction : ");
  for(int i = 0; i < 8; i++){
      byte mask = 1 << i;
    byte result = (data & mask) >> i;
    Serial.print(result);
  }
  Serial.println();

  // 상위 4비트를 1로 설정
  Serial.print("Bit Set        : ");
  for(int i = 4; i < 8; i++){
    byte mask = 1 << i;
    data = data | mask;
  }
  Serial.println(data, BIN);
  // 하위 4비트를 반전
  Serial.print("Bit Inversion  : ");
  for(int i = 0; i < 4; i++){
    byte mask = 1 << i;
    data = data ^ mask;
  }
  Serial.println(data, BIN);

  // 하위 4비트를 0으로 설정
  Serial.print("Bit Clear      : ");
  for(int i = 0; i < 4; i++){
    byte mask = ~(1 << i);
    data = data & mask;
  }
  Serial.println(data, BIN);

  while(true);
}
