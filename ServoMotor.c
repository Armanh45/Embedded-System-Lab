#include<servo.h>

void setup()
{
    servo.attach(9);
}

void loop()
{
    for (pos=0; pos<=60; pos++)
    {
        servo.write(pos);
        delaya(10);
    }
    delay (1000);
    
    for (pos=61; pos<=180; pos++)
    {
        servo.write(pos);
        delay(10);
    }
    delay(1000);
    
    for(pos=181; pos>=0; pos--)
    {
        servo.write(pos);
        delay(10);
    }
    
    delay(1000)
}