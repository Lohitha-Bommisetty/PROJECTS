const int highLevelSensorPin = 2;  
const int lowLevelSensorPin = 3;   
const int relayPin = 5;             

void setup() {
  // Initialize the pins
  pinMode(highLevelSensorPin, INPUT);
  pinMode(lowLevelSensorPin, INPUT);
  pinMode(relayPin, OUTPUT);
  
  // Start with the pump off
  digitalWrite(relayPin, LOW);
  
  // Begin Serial communication for debugging
  Serial.begin(9600);
}

void loop() {
  // Read the state of the sensors
  int highLevelState = digitalRead(highLevelSensorPin);
  int lowLevelState = digitalRead(lowLevelSensorPin);
  
  Serial.print("High Level Sensor: ");
  Serial.println(highLevelState);
  Serial.print("Low Level Sensor: ");
  Serial.println(lowLevelState);
  
  // Control the pump based on sensor readings
  if (lowLevelState == LOW) { // Water level is low
    digitalWrite(relayPin, HIGH); // Turn on the pump
    Serial.println("Pump ON");
  } 
  else if (highLevelState == LOW) { // Water level is high
    digitalWrite(relayPin, LOW); // Turn off the pump
    Serial.println("Pump OFF");
  }
  
  // Small delay for stability
  delay(1000);
}
