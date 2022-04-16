int x=2;

void setup() {
  pinMode(x,INPUT);
  pinMode(4,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int o=digitalRead(x);
  if (o==HIGH){
    digitalWrite(4,HIGH);
  }
  }
