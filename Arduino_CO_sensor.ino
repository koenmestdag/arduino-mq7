/**
 * Working code for MQ-7 CO sensor
 * https://github.com/swatish17/MQ7-Library
 * 
 * A0  > A0
 * D0  > /
 * GND > GND
 * VCC > +5V
 * 
 * In order to further optimalize the result, preheat the sensor! http://www.areresearch.net/2017/03/detect-co-with-mq-7-sensor-module.html#comment-form
 * 
 */

#include "MQ7.h"
const int ANALOG_SENSOR_PIN = A0;
MQ7 mq(ANALOG_SENSOR_PIN, 5.0);  // param[1] : Analog pin number, param[2] : Sensor Vcc value


void setup() {
  Serial.begin(9600);
  Serial.print("Starting... ");
  //Initialize the sensor object
  Serial.println("Started");
}

void loop() {
  // To find the ppm
  float ppm = mq.getPPM();
  Serial.print("ppm CO: ");
  Serial.println(ppm);
  delay(1000);
}
