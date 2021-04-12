unsigned long fnd1, fnd2;
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

void setup() {
  Serial.begin(9600);
  for (int i=5; i<13; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {    
  unsigned long current = round(millis());
  current = int((((current+5)/10)*10)/1000);
  fnd1 = current%10;
  current = int(current/10);
  fnd2 = current%10;
  
  for (int i=0; i<4; i++){
    digitalWrite(i+5, num[fnd1][3-i]);
    digitalWrite(i+9, num[fnd2][3-i]);
  }
  delay(1000);
}
