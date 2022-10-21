void setup() {
  // put your setup code here, to run once:
pinMode(3, INPUT_PULLUP);
pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int x;
x= !digitalRead(3);
digitalWrite(13,x);
}
