#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  dht.begin();
  Serial.println("DHT Sensor Ready...");
}

void loop() {
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();
  float temperatureF = dht.readTemperature(true);

  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  Serial.print(" Temperature: ");
  Serial.print(temperature);
  Serial.print(" °C | ");
  Serial.print(temperatureF);
  Serial.print(" °F   ");

  Serial.print(" Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");

  delay(2000);
}