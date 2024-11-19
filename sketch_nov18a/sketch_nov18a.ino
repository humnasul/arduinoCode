#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int num = 1;

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  lcd.print("HELLO WORLD!");
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.clear();
  lcd.print(num);
  num++;
  delay(500);
}
