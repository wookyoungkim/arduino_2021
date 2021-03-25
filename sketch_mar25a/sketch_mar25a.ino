int time = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  Serial.print(time);
  Serial.println(" sec");
  delay(1000);
  time += 1;
}
