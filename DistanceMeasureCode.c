int triPin = 8;
int echoPin = 9;
float distance;
float duration;

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
	digitalWrite(trigPin, HIGH);
	delayMicroseconds(10);
	digitalWrite (trigPin, LOW);

	duration = pulseIn (echoPin, HIGH);
	distance = (duration * 0.03518)/2;
	Serial.print ("The Distance is: ");
	Serial.print (distance);
	Serial.print ("cm");
	delay(500);
}