#include <Servo.h>
Servo a;
int p=0;
float ang=0;

void setup()
{
  pinMode(A0,INPUT);
  a.attach(9);
}
void loop()
{
  p=analogRead(A0);
    ang=map(p,0,1023,0,180);
    a.write(ang);
    delay(20);
}
