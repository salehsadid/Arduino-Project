# Alcohol Detection with MQ-3 Sensor

## Overview
This project uses an **MQ-3 alcohol sensor** and **Arduino** to detect the presence of alcohol in breath samples. The sensor’s analog output is read and classified into three states: **Sober**, **Drinking (within legal limits)**, and **Drunk**. The results are displayed via the Serial Monitor, making this a great demonstration of sensor interfacing and basic breathalyzer logic.

---

## Features
- ✅ Real-time alcohol detection using MQ-3 sensor
- 📊 Serial output with clear status messages
- 🕒 Warm-up delay for sensor stability
- 🔄 Adjustable threshold values for custom calibration

---

## Components Required

| Component                   | Quantity |
|-----------------------------|----------|
| Arduino Uno (or compatible) | 1        |
| MQ-3 Alcohol Sensor         | 1        |
| Breadboard                  | 1        |
| Jumper Wires                | As needed|
| USB Cable                   | 1        |

---

## Circuit Diagram & Connections

### MQ-3 Sensor to Arduino:
- **A0** (Analog Output) → A0 (Analog input on Arduino)
- **VCC** → 5V
- **GND** → GND

### Common Ground:
- Ensure all components share a **common ground** with the Arduino.

---

## How It Works
- The MQ-3 sensor detects alcohol vapor concentration in the air.
- The Arduino reads the analog value and compares it to predefined thresholds:
  - Below `Sober` threshold: **Stone Cold Sober**
  - Between `Sober` and `Drunk` thresholds: **Drinking but within legal limits**
  - Above `Drunk` threshold: **DRUNK**
- The result and sensor value are printed to the Serial Monitor.

---

## Setup Instructions
1. Connect the MQ-3 sensor as described above.
2. Upload the Arduino code using the Arduino IDE.
3. Open the Serial Monitor (9600 baud).
4. Wait for the sensor to warm up (20 seconds).
5. Blow gently near the sensor and observe the output.

---

## Demonstration Behavior
- Serial Monitor will display the sensor value and status every 2 seconds.
- The status will update based on alcohol vapor detected.

---

## Potential Improvements
- Add an OLED/LCD display for portable use.
- Integrate a buzzer or LED for visual/audible alerts.
- Log data to an SD card for record-keeping.
- Calibrate thresholds for different legal limits or sensor variations.
- Add wireless/Bluetooth connectivity for remote monitoring.

---

## Applications
- 🍺 DIY breathalyzer demonstration  
- 🧑‍🏫 Educational sensor interfacing project  
- 🚗 Alcohol detection for vehicle safety systems

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
#arduino #mq3 #alcohol_sensor #breathalyzer #sensor_interfacing #diy #safety

---

## Arduino Code

