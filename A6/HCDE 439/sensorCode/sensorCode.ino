/*
  Analog input, analog output, serial output by Keristian Farra
*/

// These constants won't change. They're used to give names to the pins used:
const int analogInPin = A0;  // Analog input pin that the potentiometer is attached to
const int greenPin = 11; // Analog output pin that the LED is attached to
const int redPin = 9; // Analog output pin that the LED is attached to

int sensorValue = 0;        // value read from the pot
int greenOutputValue = 0;        // value output to the PWM (analog out)
int redOutputValue = 0;        // value output to the PWM (analog out)

void setup() {
  Serial.begin(9600);// initialize serial communications at 9600 bps:
}

void loop() {
  sensorValue = analogRead(analogInPin);  // read the analog in value
  //Serial.println(sensorValue);
  
  if (sensorValue > 400) {//check if the LDR is in brightness
  greenOutputValue = map(sensorValue, 400, 620, 0, 255);// map it to the range of the analog out:
  analogWrite(greenPin, greenOutputValue);  // change the analog out value:
  analogWrite(redPin, 0);//turn of red (when green is on)
  Serial.println("Happy");// print the result to the Serial Monitor - Happy when bright (untouched/far away from the sensor)
  }

 if (sensorValue < 350) {//check if the LDR is darkness
  //Serial.println(sensorValue);
  redOutputValue = map(sensorValue, 270, 350, 255, 0);// map it to the range of the analog out
  analogWrite(redPin, redOutputValue);  // change the analog out value:
  analogWrite(greenPin, 0);//turn off green (when red is on)
  Serial.println("Angry");// print the result to the Serial Monitor - Angry when dark (touched/very close to the sensor)
 }
//else {
//analogWrite(redPin, 0);
//analogWrite(greenPin, 0);
delay(2);//wait 2ms before the next loop
//}
}



 
