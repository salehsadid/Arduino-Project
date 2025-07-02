# Smart Dustbin with Automatic Lid

## Overview
The **Smart Dustbin** automates waste disposal using an ultrasonic sensor and a servo motor. When a hand or object is detected near the dustbin’s opening, the sensor triggers the servo to open the lid, allowing for touchless and hygienic waste disposal.

A practical project for home, office, or public hygiene improvement.

---

## Features
- ✅ Touchless operation with ultrasonic sensor
- 🤖 Servo-controlled lid for smooth opening/closing
- 💡 Serial output for distance monitoring and debugging
- 🔄 Easy to integrate into existing dustbins

---

## Components Required

| Component                       | Quantity |
|----------------------------------|----------|
| Arduino Uno (or compatible)      | 1        |
| Ultrasonic sensor (HC-SR04)      | 1        |
| Servo motor (e.g., SG90)         | 1        |
| Breadboard or PCB (optional)     | 1        |
| Jumper wires                     | As needed|
| USB cable                        | 1        |
| Dustbin with hinged lid          | 1        |

---

## Circuit Diagram & Connections

### Ultrasonic Sensor to Arduino:
- Trig → D10
- Echo → D11
- VCC → 5V
- GND → GND

### Servo:
- Signal → D12
- VCC → 5V
- GND → GND

### Common Ground:
- Ensure all components share a **common ground** with the Arduino.

---

## How It Works
- The ultrasonic sensor continuously measures the distance in front of the dustbin.
- When a hand/object is detected within 20 cm, the Arduino triggers the servo to open the lid.
- After a short delay, the lid automatically closes.
- Serial output shows real-time distance readings for debugging.

---

## Setup Instructions
1. Assemble the circuit as per the connection table above.
2. Attach the servo to the lid for smooth movement.
3. Upload the Arduino code using the Arduino IDE.
4. Power the system and test by placing your hand near the sensor.

---

## Demonstration Behavior
- Lid opens automatically when a hand is detected and closes after a short interval.
- Reliable operation with minimal false triggers.
- Serial Monitor displays distance readings.

---

## Potential Improvements
- Add a second sensor for improved detection accuracy.
- Integrate a battery pack for portability.
- Use a larger servo for heavier lids.
- Add an LCD or LED indicator for bin status.
- Implement IoT features for remote monitoring.

---

## Applications
- 🏠 Household and office dustbins  
- 🏥 Public waste bins in hospitals, airports, malls  
- 🤖 Smart waste management systems

---

## License
MIT License  
You are free to use, modify, and distribute this project for personal or commercial use.

---

## Author
Saleh Sadid Mir  
Dept. of Computer Science and Engineering, KUET

---

## Want to Contribute?
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

---

## Keywords
#arduino #ultrasonic #servo #smart_dustbin #automation #touchless #waste_management

---

## Arduino Code

