int motorpin = 3;
int tmpPin = A5;
void setup()
{
Serial.begin(9600);
pinMode(motorpin,OUTPUT);
}
void loop()
{
int reading = analogRead(tmpPin);
float volt = reading *(5.0/1024.0);
float temp = (volt - 0.5)*100;
Serial.print(temp);
delay(1000);if(temp <28)
{
analogWrite(motorpin,0);
}
else if(temp <30)
{
analogWrite(motorpin,138);
}
else if(temp <35)
{
analogWrite(motorpin,150);
}
else if(temp <38)
{
analogWrite(motorpin,190);
}
else
{
analogWrite(motorpin,225);
}
