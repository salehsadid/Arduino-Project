//Project : Dino Bot
//Author : Saleh Sadid Mir , Tahmid Hossain Chowdhury Mahin

#include<Servo.h>
Servo servo1;                            

void setup() {

  pinMode(A0,INPUT);
  Serial.begin(9600); 
  
  servo1.attach(3);
       
}

void loop() {
  int ldr = analogRead(A0);
  Serial.println(ldr);
  delay(40);
  if(ldr<100){
    delay(71);
    servo1.write(112);
    delay(80);
  } 
  else {

    servo1.write(70);
  }

}

