#include<LiquidCrystal.h>
LiquidCrystal a(12,11,5,4,3,2);
const int tp=9;
const int ep=10;
float duration;
float distance;
void setup()
{
  a.begin(16,2);
}
void loop()
{
  pinMode(tp, OUTPUT);
  digitalWrite(tp, LOW);
  digitalWrite(tp, HIGH);
  digitalWrite(tp, LOW);
  pinMode(ep, INPUT);
  duration=pulseIn(ep, HIGH);
  distance=duration*0.006811023667;
  a.print(distance);
  a.print(" inch");
  a.setCursor(0,1);
  if(distance<=39.37)
  {
  a.print("OBSTACLE AHEAD!");
  delay(500);
  }
  a.clear();
}
