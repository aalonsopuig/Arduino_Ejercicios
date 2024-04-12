/*
Sonar rotacional
Programa que hace girar un servo con un sensor de ultrasonidos 
montado sobre él. Por cada grado que gira, el sonar mide la 
distancia y la envía por el puerto serie para graficarla.
*/

#include <Servo.h>  	//Librería de gestión de servos

Servo myservo; //crea un objeto servo para controlar el servo

//Pines de sonar y servo
const int TriggerPin=13;
const int EchoPin=12;
const int ServoPin=3;

int servo_pos = 0; //variable que almacena la posición del servo



float sonarPing() {
  //Función que lanza un ping y devuelve la distancia en cm
  float duration;
  float distance;
  
  digitalWrite(TriggerPin, LOW);
  delayMicroseconds(2); // Espera 2 microsegundos
  
  digitalWrite(TriggerPin, HIGH);
  delayMicroseconds(10); // Espera 10 microsegundos
  
  digitalWrite(TriggerPin, LOW);
  
  
  duration=pulseIn(EchoPin, HIGH);
  distance=(duration*0.034)/2;
}

void setup() {
  Serial.begin(9600);
  myservo.attach(ServoPin); 
  pinMode(TriggerPin,OUTPUT);
  pinMode(EchoPin, INPUT);
}

void loop() {
  for (servo_pos = 0; servo_pos <= 180; servo_pos += 1) { 
    //de 0 a 180 grados en pasos de 1 grado
    Serial.println(sonarPing()); //Sonar: Ping y envia distancia a PC
    myservo.write(servo_pos); //mueve el servo a la posición
    delay(15); // espera 15 msg para que le de tiempo al servo a moverse
  }
  
  for (servo_pos = 180; servo_pos >= 0; servo_pos -= 10) { 
    //de 180 a 0 grados en pasos de 10 grados
  	Serial.println(0);
    myservo.write(servo_pos); //mueve el servo a la posición
    delay(15); //espera 15 msg para que le de tiempo al servo a moverse
  }
}

