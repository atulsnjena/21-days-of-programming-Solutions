#include<LiquidCrystal.h>
LiquidCrystal a(2,3,4,5,6,7);
void setup()
{
  a.begin(16,2);
  a.print("HELLO WORLD:)");
}
void loop()
{
}
