#include <SPI.h>
#include "DHT.h"

//Sensors
#define DHTPIN 2      //Dht11 in pin 2
#define DHTTYPE DHT11
#define ground 1 // humidity ground in pin A1

DHT dht(DHTPIN, DHTTYPE);


double T2,H; //DHT11 values
double soilHumidity; //Humidity value

#define PIN_VENTILADOR 42
#define PIN_WATER 43
#define PIN_LAMPARITA 44

void setup() {
  Serial.begin(115200);  
  Serial.println("Start");
}

void loop()
{
  leerSensores();
}

void leerSensores() {
  T2 = dht.readTemperature();
  H = dht.readHumidity();
  soilHumidity = analogRead(ground);
  
  Serial.println(T2);   
  Serial.println(H);
  Serial.println(soilHumidity);  
}

