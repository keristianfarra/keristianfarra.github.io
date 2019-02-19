/* Keristian Farra
*A6 - maped interaction with photoresistor to webpage*
*/

void setup() {
  Serial.begin(9600);
}
/* Part 1
void loop() {
  int button = digitalRead(2);
  Serial.println(button);
  delay(50);
}
*/
void loop() {
  int photoresistor = analogRead(A0);// The photoresistor connected to Pin A0
  Serial.println(photoresistor);// print the photoresistor value
  delay(50);// wait 50 ms
}
