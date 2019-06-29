#include <DHT.h>
#include <DHT_U.h>

#include <Adafruit_Sensor.h>



#define DHTPIN 3
#define DHTTYPE DHT11
DHT DHT(DHTPIN,DHTTYPE);

float t;
 float h;
 float c;
 bool e;
void setup() 
{
Serial.begin(9600);
DHT.begin(); 
 t=DHT.readTemperature();
 h=DHT.readHumidity();
 c=DHT.computeHeatIndex(t,h);
 e=DHT.read();
//{
 Serial.print("The temp is: "); 
 Serial.println(t);
 Serial.print("The humidity is: ");
 Serial.println(h);
 Serial.print("The heat index is: ");
 Serial.println(c);
 Serial.print("sensor was read less than two seconds ago 1 for true 0 for false: ");
 Serial.println(e);   //can put in loop for continuous output}
}

void loop() 
{

  
}
