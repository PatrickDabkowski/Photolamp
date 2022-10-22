int readvalue=0;
void setup() 
{ 
pinMode(8, OUTPUT);
}

void loop() 
{
readvalue= analogRead(A5);
if(readvalue<100)
{
  digitalWrite(8, HIGH);
}
else
{
  digitalWrite(8, LOW);
}
delay(100);
}
