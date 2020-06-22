void setup()
{
pinMode(A0,INPUT);
}

void loop()
{
analogWrite(6,map(analogRead(A0),0,1023,0,255));
}
