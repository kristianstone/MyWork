#include <Arduino.h>
#include <CapacitiveSensor.h>

CapacitiveSensor   cs_2_3 = CapacitiveSensor(2,3);        
CapacitiveSensor   cs_2_4 = CapacitiveSensor(2,4);         
CapacitiveSensor   cs_2_5 = CapacitiveSensor(2,5); 

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  long Walk =  cs_2_3.capacitiveSensor(30); 
  long Poop =  cs_2_4.capacitiveSensor(30);
  long Hello =  cs_2_5.capacitiveSensor(30);
}