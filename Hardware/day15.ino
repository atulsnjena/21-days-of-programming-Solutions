float duration;
float distance;
float analog,fraction,voltage,temp;
void setup()
{
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,INPUT);
  pinMode(2,INPUT);
  pinMode(A5,INPUT);
}
void loop()
{
  //ULTRASONIC SENSOR
  digitalWrite(3, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(3, LOW);
  pinMode(4, INPUT);
  duration=pulseIn(4, HIGH);
  distance=duration*0.006811023667;
  if(distance<=39.37)
  {
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
  }
  else
  {
  	digitalWrite(5, LOW);
    digitalWrite(6, LOW);
  }
  
  //TMP36
  analog=analogRead(A5);
  fraction=analog/1024;
  voltage=5*fraction;
  temp=(voltage-0.4971)*100;
  if (temp > 28 && temp < 50)
  {
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
  }
  
  //IR SENSOR
  if (digitalRead(2) == LOW)
  {
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
  }
  else
  {
  	digitalWrite(7, LOW);
    digitalWrite(8, LOW);
  }
}
