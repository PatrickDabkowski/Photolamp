int readvalue=0;
int lc=0;
float voltage=0;
float conv=5.0/1024.0;
void setup() 
{ 
Serial.begin(9600);
pinMode(8, OUTPUT);
}

void loop() 
{

lc=analogRead(A4);
readvalue= analogRead(A5);
if(readvalue<lc)
{ 
  Serial.println(lc*conv);
  do
{
  digitalWrite(8, HIGH);
  lc=analogRead(A4);
readvalue= analogRead(A5);
}
while(readvalue<lc);
}
else
{
  digitalWrite(8, LOW);
}
delay(100);
}
