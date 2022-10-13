#include<MQ2.h>
int input = A1;
int buzzer = 8;
int lpg, co, smoke;
MQ2 mq2 (input);

void setup()
{
    Serial.begin(9600);
    mq2.begin();
}

void loop()
{
    float* arr=mq2.read(true);
    lpg=mq2.readLPG();
    co=mq2.readCO();
    smoke=mq2.readSmoke();
    
    Serial.print("LPG: ");
    Serial.println(lpg);
    
    Serial.print("CO: ");
    Serial.println(co);
    
    Serial.print("Smoke: ");
    Serial.println(smoke);
    
    Serial.println("\n");
    delay(3000);
    
    if (smoke>10000)
    {
        tone(buzzer, 1000);
        delay(200);
        noTone(buzzer);
        delay(200);
    }
    
    delay(2000);
}