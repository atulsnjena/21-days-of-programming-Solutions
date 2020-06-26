void setup()
  {
    pinMode(12,INPUT);
    pinMode(13,OUTPUT);
  }
void loop()
  {
    for(;digitalRead(12)==0;)
      {
        digitalWrite(13,HIGH);
        delay(250);
        digitalWrite(13,LOW);
        delay(250);
      }  	
  }
