#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
void setup() {
  lcd.begin(16, 2);
  lcd.print("Temperature in C");
}
void loop() {
  float temp;
  float read = analogRead(A0);
  read=read/1024;
  read=read*5;
  temp=(read-0.4971)*100;
  lcd.setCursor(0,1);
  lcd.print(temp);
}
