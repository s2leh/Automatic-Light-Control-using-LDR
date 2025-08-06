int ldr=A0;
int led=7;
void setup()
{
  pinMode(ldr, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int ldrv = analogRead(ldr);
  Serial.println(ldrv);
  
  if(ldrv<500)
  {
    digitalWrite(led,HIGH);
  }
  else {
    digitalWrite(led,LOW);
  }
}