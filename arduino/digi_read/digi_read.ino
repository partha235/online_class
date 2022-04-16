int x=7;
void setup() {
  pinMode(x,INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalRead(x);
  Serial.println();
  delay(500);
}
