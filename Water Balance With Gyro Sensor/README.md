# Water Balance Simulator with Gyro Sensor and LED Bar

## Overview
This project simulates a digital water balance (spirit level) using an **Arduino**, an **MPU6050 gyro/accelerometer sensor**, and a **series of LEDs**. As the device tilts, the sensor detects the orientation, and corresponding LEDs light up to visually indicate the direction and magnitude of the tilt.

This is a great beginner-to-intermediate level project to learn about orientation sensing, sensor interfacing, and real-time visual feedback using microcontrollers.

---

## Features
- ✅ Real-time tilt detection with **MPU6050**
- 💡 Visual tilt indication using **9 LEDs**
- 🔍 Serial output for debugging and calibration
- 🔄 Modular and easy to extend for other orientation-based systems

---

## Components Required
| Component                   | Quantity |
|----------------------------|----------|
| Arduino Uno (or compatible)| 1        |
| MPU6050 Gyro/Accelerometer | 1        |
| LEDs                       | 9        |
| 220Ω Resistors             | 9        |
| Breadboard                 | 1        |
| Jumper Wires               | As needed|
| USB Cable                  | 1        |

---

## Circuit Diagram & Connections

### MPU6050 to Arduino (I2C):
- `VCC` → `5V`
- `GND` → `GND`
- `SCL` → `A5`
- `SDA` → `A4`

### LEDs:
- Connect **digital pins 2 to 10** each to an LED (with a 220Ω resistor in series) to ground.

### Common Ground:
- Ensure all components share a **common ground** with the Arduino.

---

## How It Works
The MPU6050 sensor measures Y-axis acceleration.

The Arduino reads and maps this value to a corresponding LED index.

An LED lights up based on the tilt direction and magnitude.

Real-time Y-axis readings are printed to the Serial Monitor (at 38400 baud).

---

## Setup Instructions
Assemble the circuit as per the connection table above.

Upload the Arduino code using the Arduino IDE.

Open the Serial Monitor (38400 baud) to view tilt data.

Tilt the breadboard and observe the LED shifting accordingly.

---

## Demonstration Behavior
When level, a central LED lights up.

Tilting left or right shifts the LED glow accordingly.

Serial output displays tilt readings continuously.

---

## Potential Improvements
Add RGB LEDs to indicate intensity with colors.

Include a buzzer for threshold alerts or level confirmation.

Add an OLED or LCD to show angle in degrees.

Apply Kalman filter or smoothing algorithms.

Make it portable using a battery pack.

---

## Applications
🛠 DIY digital spirit level

🧑‍🏫 Educational sensor interfacing demo

🤖 Orientation sensing in robotics/automation

---

## License
MIT License
You are free to use, modify, and distribute this project for personal or commercial use.

---

## Author
Your Name
Optional: Add LinkedIn/GitHub profile

---

## Want to Contribute?
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

---

## Keywords
#arduino #mpu6050 #accelerometer #gyro_sensor #digital #LED_bar #sensor_interfacing #real-time_feedback
