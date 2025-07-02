# Dino Bot – Automated Chrome Dinosaur Game Player

## Overview
**Dino Bot** is an Arduino-based automation project that plays the offline Chrome Dinosaur game autonomously. Using an LDR (Light Dependent Resistor) or IR sensor, the bot detects obstacles (cacti) on the game screen and triggers a servo motor to physically press the spacebar, making the dinosaur jump and avoid obstacles.

A great introduction to automation, sensor integration, and actuator control using Arduino.

---

## Features
- ✅ Real-time obstacle detection with LDR/IR sensor
- 🤖 Automated servo actuation to press the spacebar
- 💻 Serial monitoring for sensor calibration
- 💡 Simple, low-cost hardware setup
- 🔄 Adaptable for other reaction-based games

---

## Components Required

| Component                       | Quantity |
|----------------------------------|----------|
| Arduino Uno (or compatible)      | 1        |
| LDR sensor (or IR sensor)        | 1        |
| Servo motor (e.g., SG90)         | 1        |
| Breadboard                       | 1        |
| Jumper wires                     | As needed|
| USB cable                        | 1        |

---

## Circuit Diagram & Connections

### LDR/IR Sensor to Arduino:
- Output (via voltage divider) → A0
- VCC → 5V
- GND → GND

### Servo:
- Signal → D3
- VCC → 5V
- GND → GND

### Common Ground:
- Ensure all components share a **common ground** with the Arduino.

---

## How It Works
- The LDR or IR sensor monitors a region of the screen where cacti appear.
- When a cactus is detected (sensor value drops below threshold), Arduino triggers the servo.
- The servo arm physically presses the spacebar, making the dinosaur jump.
- Serial output displays real-time sensor readings for calibration.

---

## Setup Instructions
1. Assemble the circuit as per the connection table above.
2. Mount the sensor to face the game screen and the servo arm over the spacebar.
3. Upload the Arduino code using the Arduino IDE.
4. Open Serial Monitor (9600 baud) to view sensor data and calibrate threshold.
5. Start the Chrome Dinosaur game and watch Dino Bot play!

---

## Demonstration Behavior
- Bot detects cacti and makes the dinosaur jump.
- Sensor readings visible in Serial Monitor.
- Consistent performance after calibration.

---

## Potential Improvements
- Integrate camera and image processing (OpenCV) for advanced detection.
- Add a second servo for ducking under flying obstacles.
- Implement adaptive thresholding for lighting changes.
- Miniaturize for a compact build.
- Add wireless control/monitoring.

---

## Applications
- 🕹️ Game automation  
- 🧑‍🏫 Educational project for Arduino beginners  
- 🤖 Repetitive keyboard task automation

---

## License
MIT License  
You are free to use, modify, and distribute this project for personal or commercial use.

---

## Author
Saleh Sadid Mir, Tahmid Hossain Chowdhury Mahin, Eftesamul Hasan Nouman  
Dept. of Computer Science and Engineering, KUET

---

## Want to Contribute?
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

---

## Keywords
#arduino #automation #servo #ldr #chrome_dino #gamebot #sensor_interfacing #robotics

