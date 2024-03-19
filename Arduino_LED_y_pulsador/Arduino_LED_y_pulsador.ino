// Encendemos el led al pulsar
int pinLED = 6;  
int pinPulsador = 12;


void setup() {
  pinMode(pinLED, OUTPUT);
  pinMode(pinPulsador, INPUT);
}

void loop() {
  if (digitalRead(pinPulsador)){
    digitalWrite(pinLED, HIGH);
  }
  else {
    digitalWrite(pinLED, LOW);
  }
}