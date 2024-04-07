#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <HCSR04.h>

LiquidCrystal_I2C lcd (0x27,16,2);
UltraSonicDistanceSensor distanceSensor(11,10);

void setup() {
  Serial.begin(9600);
  lcd.init();
}

void loop() {
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("Jarak Benda");
  lcd.setCursor(0,1);
  lcd.print("= ");
  lcd.print(distanceSensor.measureDistanceCm());
  lcd.print(" cm");  
  delay(1000);
}