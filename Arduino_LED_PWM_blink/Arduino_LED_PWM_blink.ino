// Dim an LED using a PWM pin
int PWMpin = 6;  // LED in series with 330 ohm resistor on pin 6

void setup() {
  pinMode(PWMpin, OUTPUT);
}

void loop() {
  for (int i = 0; i <= 255; i=i+1) {
    analogWrite(PWMpin, i);
    delay(5);
  }
  for (int i = 255; i >= 0; i--) {
    analogWrite(PWMpin, i);
    delay(5);
  }
}