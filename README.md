
# Tilt Angle Measurement Using MPU6050


This project aims to design and implement a real-time system for accurately measuring and displaying tilt angles using the MPU6050 sensor, enabling motion tracking and orientation detection for embedded applications.This project integrates sensor data acquisition, microcontroller-based processing, and real-time display—making it a part of modern embedded systems with potential applications in IoT-enabled environments such as smart devices, wearables, and automation.

---

## 🌐 Domain

**Embedded Systems and Internet of Things (IoT)**  



## 📚 Table of Contents

- [Overview](#-overview)
- [Objectives](#-objectives)
- [Technologies Used](#-technologies-used)
- [Tools & Libraries](#-tools--libraries)
- [Circuit Connections](#-circuit-connections)
- [Methodology](#-methodology)
- [Applications](#-applications)
- [Results](#-results)
- [Learning & Reflections](#-learning--reflections)
- [Future Enhancements](#-future-enhancements)
- [Duration](#-duration)
- [License](#-license)

---

## 🔍 Overview

This project focuses on real-time **tilt angle measurement** using the **MPU6050 (accelerometer + gyroscope)** sensor, with outputs displayed via an OLED screen. The system uses I2C communication and integrates sensor data with microcontroller processing, providing practical insights into motion detection, orientation sensing, and embedded system interfacing.

---

## 🎯 Objectives

- Interface MPU6050 with Arduino using I2C protocol.
- Process sensor data to calculate tilt angles with high accuracy.
- Display tilt angles on an OLED screen in real-time.
- Develop an intuitive and easy-to-use user interface.
- Explore applications in robotics, gaming, wearables, and home automation.

---

## 🔧 Technologies Used

| Component             | Description                                                                 |
|----------------------|-----------------------------------------------------------------------------|
| MPU6050              | 6-axis accelerometer and gyroscope for motion tracking                      |
| Arduino (Uno/Nano)   | Microcontroller for sensor reading, processing, and display control         |
| OLED Display (128x64)| For real-time visualization of tilt angles                                  |
| I2C Protocol         | Communication between sensor and Arduino                                    |
| Breadboard & Jumper Wires | For non-permanent circuit connections                                |
| Arduino IDE          | For coding, compiling, and uploading firmware                               |

---

## 🛠 Tools & Libraries

- `Wire.h` – I2C communication
- `Adafruit_GFX.h` – OLED rendering library
- `Adafruit_SSD1306.h` – OLED driver
- `MPU6050.h` – Sensor interface library
- **Arduino IDE** – Code development and debugging

---

## 📐 Circuit Connections

### MPU6050 ↔ Arduino

| MPU6050 Pin | Arduino Uno Pin |
|-------------|------------------|
| VCC         | 5V               |
| GND         | GND              |
| SDA         | A4               |
| SCL         | A5               |
| AD0         | GND (Addr: 0x68) |

### OLED ↔ Arduino

| OLED Pin | Arduino Uno Pin |
|----------|------------------|
| VCC      | 5V               |
| GND      | GND              |
| SDA      | A4               |
| SCL      | A5               |

---

## 🧪 Methodology

- Sensor interfacing with I2C
- Reading raw acceleration and gyroscope data
- Using trigonometric functions (`atan2`) to derive tilt angles
- Real-time display using OLED screen
- Optional output via Serial Monitor for debugging

---

## 💡 Applications

- Robotics and automation
- Gaming control systems
- VR/AR orientation sensing
- Wearable health tech
- Smart home interfaces

---

## 📈 Results

- Accurate and responsive tilt angle measurement.
- Reliable real-time data visualization.
- Smooth user interaction via the OLED interface.

---

## 🧠 Learning & Reflections

- Hands-on experience with sensor interfacing and I2C communication.
- Real-time data processing using microcontrollers.
- Understanding of system calibration, firmware debugging, and display programming.

---

## 🚀 Future Enhancements

- Implement Kalman filters for better accuracy
- Add Bluetooth/WiFi (ESP32) for wireless data transmission
- Create mobile or web dashboards using IoT platforms
- Incorporate machine learning for adaptive behavior
- Miniaturize for wearable applications

---

## 📅 Duration

**18th December 2024 – 16th February 2025**  
**Mentor:** Mr. Kiran Kumar Reddy (Firmware Engineer, Oben Electric)  
**Submitted by:** Ms. Lohitha Bommisetty, B.Tech 3rd Year

---

## 📜 License

This project is open-source and available under the [MIT License](LICENSE).
