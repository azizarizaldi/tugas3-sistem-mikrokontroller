#include <DHT.h>
#define DHTPIN 8
#define DHTTYPE DHT22

DHT dht (DHTPIN, DHTTYPE);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  dht.begin();
}

void loop() {
// put your main code here, to run repeatedly:
  float temp = dht.readTemperature();

//Menampilkan di serial monitor
  Serial.print("TEMPERATUR ");
  Serial.print(temp);
  Serial.println(" *C");

  delay(1000);
}