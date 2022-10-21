int led[3] = {4,  2};
int j = 0;

void setup() {
for (int i = 0; i <3; i++)
  {
  pinMode(led[i], OUTPUT);
  }
}

void loop() {
 zhasni_vse();
 digitalWrite(led[j], HIGH);
 delay(100);
 j++;
 if (j > 2) j = 0;

}

void zhasni_vse()
{
  for (int i = 0; i <3; i++)
  {
    digitalWrite(led[i], LOW);
  }
}
