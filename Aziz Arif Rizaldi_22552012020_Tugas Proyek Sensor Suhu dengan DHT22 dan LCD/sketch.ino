#include <DHT.h>
#include <LiquidCrystal_I2C.h>
#define DHTPIN 8
#define DHTTYPE DHT22

DHT dht (DHTPIN, DHTTYPE);
LiquidCrystal_I2C lcd (0x27,16,2);

void setup() {
  Serial.begin(9600);
  dht.begin();  
  lcd.init();
}

void loop() {
  float temp = dht.readTemperature();
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("TEMPERATURE");
  lcd.setCursor(0,1);
  lcd.print("= ");
  lcd.print(temp);
  lcd.print(" *C");
  delay(1000);
}