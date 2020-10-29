#include <LiquidCrystal.h>
float t=0;
LiquidCrystal lcd = LiquidCrystal(2, 3, 4, 5, 6, 7);
void setup() 
{
  lcd.begin(16, 2);
  Serial.begin(9600);
}
void loop() 
{
  t=analogRead(A5);
  t=t/1024;
  t=t*5;
  t=t-0.5;
  t=t*100;
  lcd.setCursor(2, 0);
  lcd.print("Temperature");
  lcd.setCursor(2, 1);
   
  lcd.print(t);
}
