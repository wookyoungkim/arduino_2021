#include <LiquidCrystal.h>
const int rs = 10, en = 9, d4 = 8, d5 = 7, d6 = 6, d7 = 5;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
unsigned long H, M, S, m;

void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.print("Timer: ");
}

void loop() {
  lcd.setCursor(0, 1);
  unsigned long current = millis();
  unsigned long readTime = current/1000;

  m = current%1000;
  S = readTime%60;
  M = (readTime/60)%60;
  H = (readTime/(60*60))%24; 
  
  Serial.print(H);
  Serial.print(":");
  Serial.print(M);
  Serial.print(":");
  Serial.print(S);
  Serial.print(".");
  Serial.println(m);
  
  lcd.print(H);
  lcd.print(":");
  lcd.print(M);
  lcd.print(":");
  lcd.print(S);
  lcd.print(".");
  lcd.print(m);
  
}
