int led = 2;
int led2 = 3;
int led3 = 4;

// the setup routine runs once when you press reset:
void setup() {               
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT); 
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);      
  digitalWrite(led2, HIGH);
delay(50);}
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(100); 
  {digitalWrite(led2, HIGH);
delay(50);

}
