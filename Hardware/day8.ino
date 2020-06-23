#include <Servo.h>
Servo a;
int r=180;
void setup()
{
  a.attach(9);
}
void loop()
{
  a.write(r);
  delay(7);
  r=r+180;
}
