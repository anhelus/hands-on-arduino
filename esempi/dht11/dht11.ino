#include "DHT.h"

int pin = 2;
int type = DHT11;

DHT dht(pin, type);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  delay(1000);
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  Serial.print("L'umidità attuale è: ");
  Serial.println(h);
  Serial.print("La temperatura attuale è: ");
  Serial.println(t);
}
