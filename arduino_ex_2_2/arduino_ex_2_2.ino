void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void printNum(int num){
  Serial.print("Binary: ");
  Serial.println(num, BIN);
  Serial.print("Decimal: ");
  Serial.println(num, DEC);
  Serial.print("Hexadecimal: ");
  Serial.println(num, HEX);
  Serial.print("ASCII: ");
  Serial.write(num);
  return;
}

void loop() {
  char c = 65;
  int i = 65;
  float f = 65;

  Serial.println("*** char Value ***");
  printNum(c);
  Serial.println("*** int Value ***");
  printNum(i);
  Serial.println("*** float Value ***");
  printNum(f);

  i += 1;
  c += 1;
  f += 0.1;
  
}
