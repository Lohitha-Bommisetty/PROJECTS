#include <Arduino.h>
const int voltagePin = A0; 
const int currentPin = A1; 
const int relayPin = 7;     
const int buzzerPin = 8;  
const int ledPin = 9;      
// Thresholds
const float voltageThreshold = 240.0; 
const float currentThreshold = 10.0;  
// Calibration Constants
const float voltageCalibration = 300.0 / 5.0;
const float currentCalibration = 30.0 / 5.0;  
void setup() {
    pinMode(relayPin, OUTPUT);
    pinMode(buzzerPin, OUTPUT);
    pinMode(ledPin, OUTPUT);
    Serial.begin(9600);
    digitalWrite(relayPin, HIGH);
}
void loop() {
    float voltage = analogRead(voltagePin) * (5.0 / 1023.0) * voltageCalibration;
    float current = analogRead(currentPin) * (5.0 / 1023.0) * currentCalibration;
  // Print voltage and current to Serial Monitor
    Serial.print("Voltage: ");
    Serial.print(voltage);
    Serial.print(" V, Current: ");
    Serial.print(current);
    Serial.println(" A");
    // Check condition
    if (voltage > voltageThreshold || current > currentThreshold) {
        digitalWrite(relayPin, LOW); // Disconnect load
        digitalWrite(buzzerPin, HIGH); // Activate buzzer
        digitalWrite(ledPin, HIGH); // Turn on LED
    } else {
        digitalWrite(relayPin, HIGH); // Connect load
        digitalWrite(buzzerPin, LOW); // Deactivate buzzer
        digitalWrite(ledPin, LOW); // Turn off LED
    }
    delay(1000); // Delay for stability
}

