# 📚 Smart Study Space Optimizer

A simple, low-cost embedded system designed to improve study habits by monitoring **posture**, **lighting conditions**, and **sitting duration** in real time.

---

## 🚀 Overview

The Smart Study Space Optimizer helps users maintain a healthy and productive study environment. It uses sensors and an Arduino microcontroller to detect improper posture, poor lighting, and prolonged sitting, and provides instant feedback through alerts.

---

## ✨ Features

- 📏 **Posture Monitoring** using Ultrasonic Sensor  
- 💡 **Light Detection** using LDR Sensor  
- ⏱️ **Sitting Time Tracking** using `millis()`  
- 🔔 **Real-Time Alerts** via Buzzer and LED  
- 🔘 **Manual Reset** using Push Button  
- 🔒 **Privacy Friendly** (No camera or wearable devices)  
- 💸 **Low Cost & Easy to Build**

---

## 🧠 How It Works

1. Sensors collect real-time data:
   - Ultrasonic → distance (posture)
   - LDR → light intensity  
2. Arduino processes the data using predefined thresholds  
3. If conditions are not ideal:
   - LED → indicates poor lighting  
   - Buzzer → alerts bad posture or long sitting  
4. Timer tracks continuous sitting duration  
5. Push button resets the system  

---

## 🛠️ Hardware Components

- Arduino Nano  
- Ultrasonic Sensor (HC-SR04)  
- LDR (Light Dependent Resistor)  
- LED  
- Buzzer  
- Push Button  
- Resistors (220Ω, 10kΩ)  
- Breadboard & Wires  

---

## 💻 Software

- Arduino IDE  
- Embedded C/C++  

---

## 🔌 Pin Configuration

| Component            | Arduino Pin |
|---------------------|-------------|
| Ultrasonic TRIG     | D9          |
| Ultrasonic ECHO     | D10         |
| LDR Sensor          | A0          |
| LED                 | D6          |
| Buzzer              | D7          |
| Push Button         | D5          |

---


---

## 🎯 Objective

To create a **simple, affordable, and privacy-friendly solution** that promotes:
- Better posture  
- Proper lighting  
- Healthy study habits  

---

## 📸 Demo

*(Add your project image or video here)*

---

## 👥 Team Contributions

### 💻 Software Team
- **Vedula Venkata Adithya**  
  Worked on developing the core logic and algorithms of the system, including sensor data processing, threshold-based decision making, and implementation of time tracking using `millis()`.

- **Himanshu**  
  Contributed to writing, testing, and optimizing the Arduino code. Focused on ensuring accurate sensor readings and smooth execution of the program logic.

---

### 🔧 Hardware Team
- **Bhargav**  
  Responsible for circuit design and pin connections. Implemented and verified wiring between Arduino, sensors, and output components, and ensured stable hardware performance.

- **Pranush**  
  Worked on component selection, hardware assembly, and system setup. Assisted in testing the physical prototype and validating sensor placement and thresholds.

---

### 🔗 Integration Team
- **Dheerun**  
  Handled software-hardware integration by ensuring proper communication between sensors and code. Verified real-time system response and coordinated testing.

- **Omkar**  
  Assisted in integrating modules and debugging combined system behavior. Focused on ensuring all components worked together seamlessly in the final prototype.

---

## 📚 References

- Arduino Documentation  
- HC-SR04 Datasheet  
- LDR Circuit Tutorials  

---

## ⭐ Conclusion

This project demonstrates how a simple embedded system can significantly improve user comfort and productivity during long study sessions.

---

> 💡 *A small step towards smarter and healthier studying!*
