const int buttonPin = 12;
 const int firstPin = 2;
 const int lastPin = 9;
 void setup()
 {
 for(int thisPin = firstPin;thisPin <= lastPin; thisPin++)
 {
 pinMode(thisPin,OUTPUT);
 }
 pinMode(buttonPin,INPUT);
 }
void loop()
  {
 if(digitalRead(buttonPin) == HIGH) {
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
 else {
 for(int thisPin = lastPin;thisPin >= firstPin; thisPin--)
 {
 digitalWrite(thisPin,LOW);
 }
 }
}