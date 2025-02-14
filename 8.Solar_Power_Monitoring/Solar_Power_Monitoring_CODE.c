#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <Adafruit_INA219.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); // Set the LCD address
Adafruit_INA219 ina219;

void setup() {
  lcd.begin();
  lcd.backlight();
  ina219.begin();
}

void loop() {
  float voltage = ina219.getBusVoltage_V();
  float current = ina219.getCurrent_mA() / 1000; // Convert mA to A
  float power = voltage * current;

  lcd.setCursor(0, 0);
  lcd.print("V: "); lcd.print(voltage); lcd.print(" V");
  
  lcd.setCursor(0, 1);
  lcd.print("I: "); lcd.print(current); lcd.print(" A");
  
  delay(1000); // Update every second
}
