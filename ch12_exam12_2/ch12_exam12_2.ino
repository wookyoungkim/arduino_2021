#include <LiquidCrystal.h>
const int rs = 10, en = 9, d4 = 8, d5 = 7, d6 = 6, d7 = 5;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int timer;

void setup() {
  lcd.begin(16, 2);
  lcd.print("Timer: ");
}

void loop() {
  lcd.setCursor(0, 1);
  lcd.print(timer);

  timer += 1;
  delay(100);

  if (timer >= 999) {
    timer = 0;
  }
}
