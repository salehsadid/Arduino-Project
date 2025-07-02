//Peoject: Traffic Light Control Based on Distance
// Author: Saleh Sadid Mir


const int trigPin = 7; 
const int echoPin = 6; 
const int red=8;
const int green=9;
const int white=10;

void setup() {
   Serial.begin(9600); 
   pinMode(trigPin, OUTPUT);
   pinMode(echoPin, INPUT);
}

void loop() {
   long duration, distance;
   
   digitalWrite(trigPin, LOW);
   delayMicroseconds(2);
   digitalWrite(trigPin, HIGH);
   delayMicroseconds(10);
   digitalWrite(trigPin, LOW);  
  
   duration = pulseIn(echoPin, HIGH);
   
   distance = duration* 0.034/2; 

if (distance<=5){
  digitalWrite(red, HIGH);
  digitalWrite(green, LOW);
  digitalWrite(white, LOW);
  

}
else if ((distance>=5)&&(distance<10)){
   digitalWrite(red, LOW);
  digitalWrite(green, LOW);
  digitalWrite(white, HIGH);
  

}
 else if ((distance>=10)&&(distance<15)){
    digitalWrite(red, LOW);
  digitalWrite(green, HIGH);
  digitalWrite(white, LOW);
  

} 
else if (distance>=15) {
    digitalWrite(red, LOW);
  digitalWrite(green, LOW);
  digitalWrite(white, LOW);
  

}   
  Serial.print("DISTANCE:");
   Serial.print(distance);
   Serial.print("cm");
   Serial.println();
   delay(100);

}

