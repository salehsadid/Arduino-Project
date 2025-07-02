# Arduino-Based Radar System

## Overview
This project simulates a basic radar system using an **Arduino**, an **ultrasonic sensor (HC-SR04)**, and a **servo motor**. The servo sweeps the sensor across a range of angles, measuring distances to objects. Data is sent to a Processing sketch for real-time radar visualization.

---

## Features
- ✅ Servo-controlled ultrasonic sensor sweep (15° to 165°)
- 📡 Real-time distance measurement and plotting
- 💻 Processing-based graphical radar simulation
- 🔄 Serial data transmission for visualization

---

## Components Required

| Component                       | Quantity |
|----------------------------------|----------|
| Arduino Uno (or compatible)      | 1        |
| Ultrasonic sensor (HC-SR04)      | 1        |
| Servo motor (e.g., SG90)         | 1        |
| Breadboard (optional)            | 1        |
| Jumper wires                     | As needed|
| USB cable                        | 1        |
| PC with Processing IDE           | 1        |

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
- The servo sweeps the ultrasonic sensor from 15° to 165° and back.
- At each angle, the sensor measures distance to the nearest object.
- Arduino sends angle and distance data over serial.
- Processing sketch reads and visualizes the data as a radar sweep.

---

## Setup Instructions
1. Assemble the circuit as per the connection table above.
2. Upload the Arduino code using the Arduino IDE.
3. Install Processing IDE on your PC.
4. Load and run the Processing sketch (change COM port as needed).
5. Observe the radar simulation on your PC screen.

---

## Demonstration Behavior
- Radar sweep visualizes detected objects in real time.
- Scanning line and object plotting mimic real radar.

---

## Potential Improvements
- Add filtering for smoother readings.
- Increase sweep range or speed.
- Integrate multiple sensors for 3D scanning.
- Add object tracking and alerts.
- Implement wireless data transmission.

---

## Applications
- 📡 Basic radar simulation  
- 🤖 Object detection in robotics  
- 🛡️ Proximity sensing and mapping  
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
#arduino #radar #servo #ultrasonic #processing #visualization #object_detection

---

## Arduino Code

```
#include <Servo.h>

const int trigPin = 10;
const int echoPin = 11;
long duration;
int distance;
Servo myServo;

void setup() {
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
Serial.begin(9600);
myServo.attach(12);
}

void loop() {
for (int i = 15; i <= 165; i++) {
myServo.write(i);
delay(30);
distance = calculateDistance();
Serial.print(i);
Serial.print(",");
Serial.print(distance);
Serial.print(".");
}
for (int i = 165; i > 15; i--) {
myServo.write(i);
delay(30);
distance = calculateDistance();
Serial.print(i);
Serial.print(",");
Serial.print(distance);
Serial.print(".");
}
}

int calculateDistance() {
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance = duration * 0.034 / 2;
return distance;
}
```

---

## Processing Visualization Code
```
import processing.serial.*;

Serial myPort;

String angle = "";
String distance = "";
String data = "";
int iAngle, iDistance;

void setup() {
size(1200, 700);
smooth();
myPort = new Serial(this, "COM5", 9600); // Change COM port accordingly
myPort.bufferUntil('.');
}

void draw() {
background(0, 10);
drawRadar();
drawLine();
drawObject();
drawText();
}

void serialEvent(Serial myPort) {
data = myPort.readStringUntil('.');
if (data != null && data.length() > 1) {
data = data.substring(0, data.length() - 1);
int index1 = data.indexOf(",");
if (index1 > 0) {
angle = data.substring(0, index1);
distance = data.substring(index1 + 1);
iAngle = int(angle);
iDistance = int(distance);
}
}
}

void drawRadar() {
pushMatrix();
translate(width / 2, height - height * 0.074);
noFill();
stroke(0, 255, 0);
strokeWeight(2);
arc(0, 0, width * 0.9, width * 0.9, PI, TWO_PI);
arc(0, 0, width * 0.6, width * 0.6, PI, TWO_PI);
arc(0, 0, width * 0.35, width * 0.35, PI, TWO_PI);

line(-width / 2, 0, width / 2, 0);
for (int angle = 30; angle <= 150; angle += 30) {
float rad = radians(angle);
line(0, 0, (-width / 2) * cos(rad), (-width / 2) * sin(rad));
}
popMatrix();
}

void drawLine() {
pushMatrix();
stroke(0, 255, 0);
strokeWeight(3);
translate(width / 2, height - height * 0.074);
line(0, 0, (height * 0.85) * cos(radians(iAngle)), -(height * 0.85) * sin(radians(iAngle)));
popMatrix();
}

void drawObject() {
pushMatrix();
translate(width / 2, height - height * 0.074);
stroke(255, 0, 0);
strokeWeight(8);
float pixDistance = iDistance * 5;
if (iDistance < 40) {
point(pixDistance * cos(radians(iAngle)), -pixDistance * sin(radians(iAngle)));
}
popMatrix();
}

void drawText() {
fill(0, 255, 0);
textSize(20);
text("Angle: " + iAngle + "°", 20, 30);
text("Distance: " + iDistance + " cm", 20, 60);
if (iDistance > 40) {
text("Out of Range", 20, 90);
} else {
text("In Range", 20, 90);
}
}
```
