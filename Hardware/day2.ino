int ctr=0;
void setup()
{
  pinMode(13, OUTPUT);
  
}

void loop()
{
  while(ctr<5)
	{
  	digitalWrite(13, HIGH);
  	delay(2000); 
  	digitalWrite(13, LOW);
    delay(2000);
    ctr++; 
	}
}
