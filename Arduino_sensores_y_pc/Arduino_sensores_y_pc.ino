// C++ code
//
/*
Entradas analógicas y escritura en PC
Uso de led palanca
*/

int sensorValue0 = 0;
int sensorValue1 = 0;
int sensorValue2 = 0;
int PinLed = 8;
int PinPulsador = 3;

void setup()
{
  pinMode(A0, INPUT); //Pot
  pinMode(A1, INPUT); //LDR
  pinMode(A2, INPUT); //TMP
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(PinLed, OUTPUT);
  pinMode(PinPulsador, INPUT);
  Serial.begin(9600);
}

void loop()
{
  // read the value from the sensors
  sensorValue0 = analogRead(A0);
  sensorValue1 = analogRead(A1);
  sensorValue2 = analogRead(A2);
  Serial.print(sensorValue0);
  Serial.print(',');
  Serial.print(sensorValue1);
  Serial.print(',');
  Serial.println(sensorValue2*20);
  digitalWrite(PinLed,HIGH);
  delay(100); // Wait 
  digitalWrite(PinLed,LOW);
  delay(100); // Wait 
  if (digitalRead(PinPulsador) == HIGH) {
    digitalWrite(LED_BUILTIN,HIGH);
  }
  else {
    digitalWrite(LED_BUILTIN,LOW);
  }
}
