int ctr=0;
int state;
int lstate;
void setup()
{
  pinMode(13, INPUT);
  Serial.begin(300);
}

void loop()
{
  if (digitalRead(13) != lstate) {
   if (digitalRead(13)==HIGH)
   {
     ctr++;
     lstate=HIGH;
     Serial.println(ctr);
   }
    else{
      lstate=LOW;
    }
   }
}
