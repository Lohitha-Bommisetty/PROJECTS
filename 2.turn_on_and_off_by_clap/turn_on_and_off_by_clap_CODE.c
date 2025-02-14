const int sensor = 7
const int relayPin =6
int x = 0; // for sensor
int y = 0; // for relay
void setup() {
pinMode(sensor, INPUT);
pinMode(relayPin, OUTPUT);
}
void loop() {
x=digitalRead(sensor);
y= digitalRead(relay);
if(y == HIGH && x==LOW)
{
delay(250);
digitalWrite(relayPin ,LOW);
}
if(y == LOW && x==LOW)
{
delay(250);
digitalWrite(relayPin ,HIGH);
}
}
}
