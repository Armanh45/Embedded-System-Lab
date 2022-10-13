int trigPin = 8;
int echoPin = 9;

float distance;
float duration;

int buzzer;

void setup()
{
	pinMode (trigPin, OUTPUT);
	PinMode (echoPin, INPUT);
	Serial.begin (9600);
}

void loop()
{
	digitalWrite (trigPin, LOW);
	delay(5);
	digitalWrite (trigPin, HIGH);
	delayMicroseconds(10);
	digitalWrite (trigPin, LOW);
	duration = pulseIn (echoPin, HIGH);
	distance = (duration * 0.03518)/2;
	Serial.print ("The distance is: ");
	Serial.print (distance);
	Serial.print ("cm");
	delay(500);

	if (distance<10)
	{
		tone(buzzer, 300);
		delay(300);
		noTone(buzzer);
		delay(300);
		delay(1000);
	}

	else if (distance<20 && distance>10)
	{
		tone(buzzer, 200);
		delay(200);
		noTone(buzzer);
		delay(1000);
		tone(buzzer, 200);
		delay(200);
		noTone(buzzer);
		delay(1000);
	}
	else
	{
		tone(buzzer, 100);
		delay(200);
		noTone(buzzer);
		delay(100);
		tone(buzzer, 100);
		delay(100);
		noTone(buzzer);
		delay(100);
		tone(buzzer, 100);
		delay(100);
		noTone(buzzer);
		delay(1000);
	}
}