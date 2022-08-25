void setup() {
  // Set pin 3 to OUTPUT.
  pinMode(3, OUTPUT);
  // Set the voltage to zero for pin 3 for good measure. 
  digitalWrite(3, LOW);
}

void loop() {
  // The percentage of time a pin is HIGH in a period is called the duty cycle.
  // When a pin is HIGH for half of the period and LOW for the other half, the duty cycle is 50%.
  // analogWrite controls the PWM (pulse width modulation) function for pin which changes the LED's brightness.
  // The first argument is the pin number and the second is a value between 0 and 255.
  // This second number represents the duty cycle. A value of 127 cooresponds to a 50% duty cycle. 
  analogWrite(3, 255);
}
