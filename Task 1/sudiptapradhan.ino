#include <LiquidCrystal.h>
LiquidCrystal lcd = LiquidCrystal(2, 3, 4, 5, 6, 7);

float temp;

void setup()
{
  pinMode(A0, INPUT);
  lcd.begin(16, 2);
  Serial.begin(9600);
}

void loop()
{
  temp=analogRead(A0);
  temp=temp/1024;
  temp=temp*5;
  temp=temp-0.5;
  temp=temp*100;
  lcd.setCursor(1, 0);
  lcd.print("temperature:");
  lcd.setCursor(3, 1);
  lcd.print(temp);
  
}
