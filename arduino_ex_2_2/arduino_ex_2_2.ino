char c = 65;
int i = 65;
float f = 65;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void printInt(int num){
  Serial.print("Binary: ");
  Serial.println(num, BIN);
  Serial.print("Decimal: ");
  Serial.println(num, DEC);
  Serial.print("Hexadecimal: ");
  Serial.println(num, HEX);
  Serial.print("ASCII: ");
  Serial.write(num);
  Serial.println("\n");
  return;
}

void printFloat(float num){
  Serial.print("float Value: ");
  Serial.println(num);
  Serial.println();
  return;
}

void loop() {


  Serial.println("*** char Value ***");
  printInt(c);
  Serial.println("*** int Value ***");
  printInt(i);
  Serial.println("*** float Value ***");
  printFloat(f);

  delay(1000);

  i += 1;
  c += 1;
  f += 0.1;
}
