int ctr=0;
void setup()
{
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,INPUT);
  pinMode(6,INPUT);
  pinMode(7,INPUT);
}
void check_stop()
{
  //check stop
  if (digitalRead(7) == HIGH)
  {
    ctr--;
    do {
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    }while(digitalRead(6) == LOW);
    loop();
  }
}
void loop()
{
  //start
  if (digitalRead(5) == HIGH && ctr == 0)
  {
    ctr++;
   	goto label;
  }
  //restart
  if (digitalRead(6) == HIGH)
  {
    label:
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    
    check_stop();
    digitalWrite(2,HIGH);
    check_stop();
    delay(2000);
    check_stop();
    digitalWrite(2,LOW);
    
    check_stop();
    digitalWrite(3,HIGH);
    check_stop();
    delay(2000);
    check_stop();
    digitalWrite(3,LOW);
    
    check_stop();
    digitalWrite(4,HIGH);
    check_stop();
    delay(2000);
    check_stop();
    digitalWrite(4,LOW);
    check_stop();
  }
}
