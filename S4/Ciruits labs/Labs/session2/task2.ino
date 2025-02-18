const int firstPin = 6;
const int lastPin = 12;
 void setup()
 {
for(int thisPin = firstPin;thisPin <= lastPin; thisPin++)
{
pinMode(thisPin,OUTPUT);
}
}
 void loop()
 {
 for(int thisPin = firstPin;thisPin <= lastPin;thisPin++)
 {
 digitalWrite(thisPin,HIGH);
 delay(100);
 }
 for(int thisPin = lastPin;thisPin >= firstPin; thisPin--)
 {
 digitalWrite(thisPin,LOW);
 delay(100);
 }
 for(int thisPin = lastPin;thisPin >= firstPin; thisPin--)
 {
 digitalWrite(thisPin,HIGH);
 delay(100);
 }
   for(int thisPin = firstPin;thisPin <= lastPin; thisPin++)
 {
 digitalWrite(thisPin,LOW);
delay(100);
}
}