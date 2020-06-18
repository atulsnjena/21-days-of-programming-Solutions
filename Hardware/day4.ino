void setup()
{
  pinMode(13, INPUT);
  pinMode(7, OUTPUT);
}
void loop()
{
  if (digitalRead(13) == HIGH) {
   digitalWrite(7, HIGH);
  } else {
    digitalWrite(7, LOW);
  }
}
