const int sensorPin = A0;
const float baselineTemp = 20.0;
#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

void setup() {
  Serial.begin(9600);
  lcd.begin (16, 2);
  lcd.print("Made By: Sashank");
  lcd.setCursor (0, 1);
  lcd.print(" Measuring Temp.");
  delay(2000);
}

void loop() {
  int sensorVal = analogRead(sensorPin);

  Serial.print("sensor Value: ");
  Serial.print(sensorVal);

  float voltage = (sensorVal / 1024.0) * 5.0;

  Serial.print(", Volts: ");
  Serial.print(voltage);

  Serial.print(", degrees C: ");
  float temperature = (voltage - .5) * 100;
  Serial.println(temperature);

  if (temperature < baselineTemp + 2) {
     lcd.begin (16, 2);
    lcd.print("Temperature:");
    lcd.setCursor(0, 1);
    lcd.print("Celsia:");
    lcd.setCursor(7, 1);
    lcd.print(temperature);
  } 
  else if (temperature >= baselineTemp + 2 && temperature < baselineTemp + 4) {
     lcd.begin (16, 2);
    lcd.print("Temperature:");
    lcd.setCursor(0, 1);
    lcd.print("Celsia:");
    lcd.setCursor(7, 1);
    lcd.print(temperature);
  } 
  else if (temperature >= baselineTemp + 4 && temperature < baselineTemp + 6) {
     lcd.begin (16, 2);
    lcd.print("Temperature:");
    lcd.setCursor(0, 1);
    lcd.print("Celsia:");
    lcd.setCursor(7, 1);
    lcd.print(temperature);
  } 
  else if (temperature >= baselineTemp + 6) {
    lcd.begin (16, 2);
    lcd.print("Temperature:");
    lcd.setCursor(0, 1);
    lcd.print("Celsia:");
    lcd.setCursor(7, 1);
    lcd.print(temperature);
  }
  delay(1000);
}
