const int tp=7;
const int ep=2;
float duration;
float distance;
void setup()
{
  Serial.begin(9600);

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
  Serial.print(distance);
  Serial.println("cm"); 
}
