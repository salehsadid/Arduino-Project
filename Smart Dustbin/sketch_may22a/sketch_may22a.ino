//Project Title: Smart Dustbin
//Author: Saleh Sadid Mir, CSE, KUET

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
  myServo.write(0);  
}

void loop() {
  
  distance = calculateDistance();
  Serial.print("Distance: ");
  Serial.println(distance);

  
  if (distance > 0 && distance < 20) {
    myServo.write(90); 
    delay(2000);      
    myServo.write(0);  
    delay(1000);      
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
