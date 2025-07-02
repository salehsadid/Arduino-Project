# Traffic Light Control Based on Distance

## Overview
This project demonstrates a simple traffic light control system using an ultrasonic distance sensor and an Arduino. The system automatically changes the state of traffic lights (red, green, and white/amber) based on the distance of an approaching object (such as a vehicle).

---

## Features
- ✅ Real-time distance measurement with ultrasonic sensor
- 🚦 Automatic switching between red, green, and white (amber) lights
- 💡 Visual indication for different distance thresholds
- 🔍 Serial output for monitoring and debugging

---

## Components Required

| Component                       | Quantity |
|----------------------------------|----------|
| Arduino Uno (or compatible)      | 1        |
| Ultrasonic sensor (HC-SR04)      | 1        |
| Red LED                         | 1        |
| Green LED                       | 1        |
| White (or Amber/Yellow) LED      | 1        |
| 220Ω Resistors                   | 3        |
| Breadboard                       | 1        |
| Jumper wires                     | As needed|
| USB cable                        | 1        |

---

## Circuit Diagram & Connections

### Ultrasonic Sensor to Arduino:
- Trig → D7
- Echo → D6
- VCC → 5V
- GND → GND

### LEDs:
- Red LED → D8
- Green LED → D9
- White LED → D10
- Each LED in series with a 220Ω resistor to ground.

### Common Ground:
- Ensure all components share a **common ground** with the Arduino.

---

## How It Works
- The ultrasonic sensor measures the distance to an approaching object.
- Depending on the measured distance:
  - ≤ 5 cm: Red LED (Stop)
  - 5–10 cm: White LED (Caution)
  - 10–15 cm: Green LED (Go)
  - > 15 cm: All LEDs off
- Serial output displays the measured distance in centimeters.

---

## Setup Instructions
1. Assemble the circuit as per the connection table above.
2. Upload the Arduino code using the Arduino IDE.
3. Open Serial Monitor (9600 baud) to observe distance readings.
4. Move an object towards the sensor and observe the traffic light changes.

---

## Demonstration Behavior
- LEDs change state according to the set thresholds, simulating a traffic light.
- Serial Monitor displays real-time distance.

---

## Potential Improvements
- Add a buzzer for audible alerts.
- Use RGB LEDs for compact indication.
- Integrate with real traffic signals.
- Add a display for countdown timers.
- Implement wireless communication for remote monitoring.

---

## Applications
- 🚦 Smart traffic management  
- 🚗 Automated vehicle entry/exit gates  
- 🚶 Pedestrian crossing safety  
- 🧑‍🏫 Educational demonstration

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
#arduino #ultrasonic #traffic_light #automation #distance_sensor #smart_city

---

## Arduino Code

