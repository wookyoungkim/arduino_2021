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
  for (int i=0; i<10; i++) {
    for (int j=0; j<4; j++) {
      digitalWrite(j+5,num[i][3-j]);
      digitalWrite(j+9,num[i][3-j]);
    }
    delay(1000);
  }
}
