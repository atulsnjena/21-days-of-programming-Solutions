void setup()
{
  pinMode(A5, INPUT);
  Serial.begin(9600);
}

void loop()
{
  float analog,fraction,voltage,temp;
  analog=analogRead(A5);
  fraction=analog/1024;
  voltage=5*fraction;
  //for TMP36(-40 to 125)
  temp=(voltage-0.4971)*100;
  //for LM35D(0 to 100)
  //temp=voltage*100;   
  Serial.println(temp);
}
