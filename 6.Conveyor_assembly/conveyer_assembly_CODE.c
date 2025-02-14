
const int trigPin = 9;  
const int echoPin = 10; 
const int motorPin1 = 3; 
const int motorPin2 = 4; 
const int enablePin = 5; 


const int distanceThreshold = 10;

void setup() {
  
  Serial.begin(9600);
  
 
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(enablePin, OUTPUT);
  

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  long duration, distance;

  
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
 
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  
  duration = pulseIn(echoPin, HIGH);
  
  
  distance = duration * 0.034 / 2;

  
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  
  if (distance < distanceThreshold) {
    // Object detected, run the motor
    digitalWrite(motorPin1, HIGH); 
    digitalWrite(motorPin2, LOW);  
    analogWrite(enablePin, 255);   
  } else {
    // No object detected, stop the motor
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, LOW);
    analogWrite(enablePin, 0);      
  }
  delay(100);
}




