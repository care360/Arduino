
//Human Body

#include <Wire.h>
#include "ClosedCube_MAX30205.h"
int deg,far;
ClosedCube_MAX30205 max30205;

void setup()
{
	Serial.begin(9600);
	Serial.println("ClosedCube MAX30205 Arduino Demo");

	max30205.begin(0x48);
}

void loop()
{
	Serial.print("T=");
  deg =max30205.readTemperature();
 far=(deg*9/5) + 32 +6;
Serial.println(far);
	delay(300);
}
