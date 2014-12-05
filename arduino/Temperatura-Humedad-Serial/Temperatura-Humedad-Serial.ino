#include <SPI.h>
#include "DHT.h"

//Sensors
#define DHTPIN 2      //Dht11 in pin 2
#define DHTTYPE DHT11
#define ground 1 // humidity ground in pin A1

DHT dht(DHTPIN, DHTTYPE);

float time=0.0f;
#define TIMER_DELAY 1.0f
float timer=TIMER_DELAY;


bool posting; // or getting
char Status;
double T2,H; //DHT11 values
double soilHumidity; //Humidity value


void setup() {
  Serial.begin(115200);  
  Serial.println("Start");
  dht.begin();
  while (!Serial) {
  
  }

  time=millis()/1000.0f;
  posting=true;

}

void loop()
{
 float t = millis()/1000.0f;
  float dt = t - time;
  time = t; 
  // if there are incoming bytes available 
  // from the server, read them and print them: 
  if(timer>0.0f){
    timer-=dt;
    if(timer<=0.0f){
      if(posting){
        leerSensores();
    }
  }
}

void leerSensores() {

  T2 = dht.readTemperature();
  H = dht.readHumidity();
  Serial.println(T2);   
  Serial.println(H);
  
  soilHumidity = analogRead(ground);  
  Serial.println(soilHumidity);  
}

