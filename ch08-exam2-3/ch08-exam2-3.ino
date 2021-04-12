int num[10][4] = {
    {0,0,0,0}, 
    {0,0,0,1}, 
    {0,0,1,0}, 
    {0,0,1,1},
    {0,1,0,0}, 
    {0,1,0,1}, 
    {0,1,1,0}, 
    {0,1,1,1}, 
    {1,0,0,0}, 
    {1,0,0,1}
};
int fnd1, fnd2;

void setup() {
  Serial.begin(9600);
  for (int i=5; i<13; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  long randNum = random(0,100);
  Serial.println(randNum);
  fnd1 = randNum % 10;
  randNum = int(randNum/10);
  fnd2 = randNum % 10;

  for (int i=0; i<4; i++){
    digitalWrite(i+5, num[fnd1][3-i]);
    digitalWrite(i+9, num[fnd2][3-i]);
  }
  delay(3000);
}
