#include <LiquidCrystal.h>
float a=0;
LiquidCrystal lcd = LiquidCrystal(2,3,7,6,5,4);
void setup() 
{
  lcd.begin(16, 2);
  Serial.begin(9600);
}
void loop() 
{
  a=analogRead(A5);
  a=a/1024;
  a=a*5;
  a=a-0.5;
  a=a*100;
  lcd.setCursor(0, 0);
  lcd.print("Temperature in C");
  lcd.setCursor(0, 1);
  lcd.print(a);
}
