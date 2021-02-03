const int l=P1_6;
const int s=P1_0;
const int t=200;
void setup() {
Serial.begin(9600);
pinMode(l,OUTPUT);
pinMode(s,INPUT);
}

void loop() {

int s1=analogRead(s);
if(s1>=t)
{
  digitalWrite(l,HIGH);
delay(30000);


}
else
{
digitalWrite(l,LOW);
  
  }
}
