void setup() {
  Serial.begin(300);
}

void loop() {
  Serial.println(digitalRead(2));
}
