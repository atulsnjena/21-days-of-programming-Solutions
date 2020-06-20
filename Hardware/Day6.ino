int lastval = 0;
void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop()
{
  if (analogRead(A0)!=lastval)
  {
	Serial.println(analogRead(A0));
	lastval=analogRead(A0);
  }
}
