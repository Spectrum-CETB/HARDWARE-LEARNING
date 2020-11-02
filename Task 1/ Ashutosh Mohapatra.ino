#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
void setup() {
  lcd.begin(16, 2);
  lcd.print("Temperature in C");
}
void loop() {
  float t;
  float input = analogRead(A5);
  input=input/1024;
  input=input*5;
  t=(input-0.4971)*100;
  lcd.setCursor(0,1);
  lcd.print(t);
}
