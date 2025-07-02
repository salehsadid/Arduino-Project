//Project Title:Water Balance Simulator with Gyro Sensor and LED Bar
//Author: Saleh Sadid Mir, CSE, KUET


#include <Wire.h>
#include "MPU6050.h"

MPU6050 accelgyro;
int16_t ax, ay, az, gx, gy, gz;
int i;

void setup() {
  Wire.begin();
  for(i=1;i<11;i++){
    pinMode(i,OUTPUT);
  }
 pinMode(13,OUTPUT);
  digitalWrite(1,LOW);
  digitalWrite(13,HIGH);
  
  Serial.println("Initializing I2C devices...");
  accelgyro.initialize();
  Serial.begin(38400) ;
  // verify connection
  Serial.println(accelgyro.testConnection() ? "successful" : "failed");
}
void loop() {
  accelgyro.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);
  int x = map(ax , -16000 , 16000 , -10 , 10) ;
  int y = map(ay , -16000 , 16000 , -10 , 10) ;
  int z = map(az , -16000 , 16000 , -10 , 10) ;
  Serial.print("x : ") ; Serial.print(x); Serial.print("\t");
  Serial.print("y : ") ; Serial.print(y); Serial.print("\t");
  Serial.print("z : ") ; Serial.print(z); Serial.println("\t");
  delay(100) ;
  if(y>=7){
    digitalWrite(10, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    

  }
  else if(y==6){
    digitalWrite(10, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
  }
  else if(y<6 && y>=4){
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
  }
  else if(y<4 && y>=2){
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
  }
  else if(y<2 && y>=0){
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
  }
  else if(y<0 && y>=-2){
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
  }
  else if(y<-2 && y>=-4){
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
  }
  else if(y<-4 && y>=-5){
   digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
  }
  else if(y<-6 ){
   digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
  }

}
