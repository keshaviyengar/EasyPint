/*
 * https://acroname.com/articles/linearizing-sharp-ranger-data
 * To non-linear output analog voltage
 * 
 * Hookup:
 * Yellow to analog pin 2
 * Red 5V input
 * Black GND
 */
 
double v_input;
double range;
const int analogPin = 2;
const int k = 4.0; // constant for this specific IR

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  v_input = analogRead(analogPin); // Read from pin 2
  range = 6787/(v_input - 3) - 4;
  //Serial.println(v_input); // Print raw distance
  Serial.println(range); // Print converted to cm
}
