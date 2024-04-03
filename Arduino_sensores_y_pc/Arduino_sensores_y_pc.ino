// C++ code
/*
 * Entradas analógicas y escritura en PC
 * Uso de led palanca
 * El programa de Arduino configura entradas analógicas para leer datos de un potenciómetro, 
 * un LDR, y un sensor de temperatura, y comunica estos valores a la computadora mediante serial. 
 * Utiliza un pulsador para controlar un LED interno, ofreciendo interacción manual. 
 * Adicionalmente, controla un LED externo para crear un efecto de parpadeo, encendiéndolo y 
 * apagándolo en intervalos de 100 milisegundos, lo que proporciona una señalización visual 
 * dinámica mientras gestiona la entrada de datos sensoriales y la interacción del usuario.
 * 
 * Autor: Alejandro Alonso Puig
 * 2023
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
  analogRead(A0); //give time to switch the AD channel (discard)
  sensorValue0 = analogRead(A0); //Read de value of the AD channel
  analogRead(A1); //give time to switch the AD channel (discard)
  sensorValue1 = analogRead(A1); //Read de value of the AD channel
  analogRead(A2); //give time to switch the AD channel (discard)
  sensorValue2 = analogRead(A2); //Read de value of the AD channel
  Serial.print(sensorValue0);
  Serial.print(',');
  Serial.print(sensorValue1);
  Serial.print(',');
  Serial.println(sensorValue2*15);
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
