//Project Title:Alcohol Detection with MQ-3 Sensor
//Author: Saleh Sadid Mir, CSE, KUET


#define Sober 120   // max value that we consider sober
#define Drunk 400   // min value that we consider drunk

#define MQ3pin 0

float sensorValue;  

void setup() {
	Serial.begin(9600); 
	Serial.println("MQ3 warming up!");
	delay(20000);
}

void loop() {
	sensorValue = analogRead(MQ3pin); 

	Serial.print("Sensor Value: ");
	Serial.print(sensorValue);


	if (sensorValue < Sober) {
		Serial.println("  |  Status: Stone Cold Sober");
	} else if (sensorValue >= Sober && sensorValue < Drunk) {
		Serial.println("  |  Status: Drinking but within legal limits");
	} else {
		Serial.println("  |  Status: DRUNK");
	}
	
	delay(2000); 
}