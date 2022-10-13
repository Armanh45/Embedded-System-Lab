#include<dht.h>
dht DHT;
int tempPin = A0;

void setup()
{
	Serial.begin (9600);
}

void loop()
{
	DHT.read11 (tempPin);
	int temperature = DHT.temperature;
	int humidity = DHT.humidity;
	Serial.print ("Temperature: ");
	Serial.println (temperature);
	Serial.print ("Humidity: ");
	Serial.println (humidity);
	Serial.print ("Room Temperature: ");
	Serial.print (temperature);
	Serial.print ("Current Humidity: ");
	Serial.println (humidity);

	if (temperature<25)
	{
		Serial.println ("Cold");
		Serial.print ("Humidity: ");
		Serial.println (humidity);
	}

	else if (temperature == 25)
	{
		Serial.println ("Normal");
		Serial.print ("Humidity: ");
		Serial.println (humidity);
	}
	else if (temperature>25)
	{
		Serial.pintln ("Warm");
		Serial.print ("Humidity: ");
		Serial.println (humidity);
	}

	Serial.println ("\n");
	delay(5000);
}