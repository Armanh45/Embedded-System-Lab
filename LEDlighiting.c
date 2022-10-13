int ledPin1 = 13;
int ledPin2 = 7;
int ledPin3 = 12;
int ledPin4 = 8;
int ledPin5 = 4;

void setup()
{
	pinMode (ledPin1, OUTPUT);
	pinMode (ledPin2, OUTPUT);
	pinMode (ledPin3, OUTPUT);
	pinMode (ledPin4, OUTPUT);
	pinMode (ledPin5, OUTPUT);
}

void loop()
{
	digitalWrite (ledPin1, HIGH);
	delay(100);
	digitalWrite (ledPin1, LOW);
	delay(100);

	digitalWrite (ledPin2, HIGH);
	delay(200);
	digitalWrite (ledPin2, LOW);
	delay(150);

	digitalWrite (ledPin3, HIGH);
	delay(300);
	digitalWrite (ledPin3, LOW);
	delay(150);

	digitalWrite (ledPin4, HIGH);
	delay(400);
	digitalWrite (ledPin4, LOW);
	delay(200);

	digitalWrite (ledPin5, HIGH);
	delay(500);
	digitalWrite (ledPin5, LOW);
	delay(200);

	digitalWrite (ledPin5, HIGH);
	delay(500);
	digitalWrite (ledPin5, LOW);
	delay(200);

	digitalWrite (ledPin3, HIGH);
	delay(300);
	digitalWrite (ledPin3, LOW);
	delay(150);

	digitalWrite (ledPin4, HIGH);
	delay(400);
	digitaWrite (ledPin4, LOW);
	delay(200);

	digitalWrite (ledPin5, HIGH);
	delay(500);
	digitalWrite (ledPin5, LOW);
	delay(200);

	digitalWrite (ledPin5, HIGH);
	delay(500);
	digitalWrite (ledPin5, LOW);
	delay(200);

	digitalWrite (ledPin4, HIGH);
	delay(400);
	digitalWrite (ledPin4, LOW);
	delay(200);

	digitalWrite (ledPin3, HIGH);
	delay(300);
	digitalWrite (ledPin3, LOW);
	delay(150);

	digitalWrite (ledPin2, HIGH);
	delay(200);
	digitalWrite (ledPin2, LOW);
	delay(150);
	
}