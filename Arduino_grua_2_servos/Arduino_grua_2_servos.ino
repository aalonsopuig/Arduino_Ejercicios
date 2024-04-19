/*
Grua
Programa que lee el valor de un joystick (con dos potenciómetros 
para X (Pan) e Y (Tilt) y un pulsador en el mismo joystick. 
El valor de los potenciómetros del joystick es convertido a valores 
de giro de los servos, que estarían instalados en configuración pan&tilt

por: Alejandro Alonso Puig
Abril 2024
*/

#include <Servo.h>  	//Librería de gestión de servos

Servo servoPan; //crea un objeto servo para controlar el servo
Servo servoTilt; //crea un objeto servo para controlar el servo

//Pines de joystick
const int pinPotPan = 3;
const int pinPotTilt = 2;
const int pinPuls = 2;

//Pines de servos
const int pinServoPan=11;
const int pinServoTilt=10;

//Variables
int posServoPan; 	//Posición del servo 
int posServoTilt; 	//Posición del servo 
int valorPotPan; 	//Valor del potenciómetro
int valorPotTilt; 	//Valor del potenciómetro

void setup() {
  Serial.begin(9600);
  servoPan.attach(pinServoPan); 
  servoTilt.attach(pinServoTilt); 
}

void loop() {
  //Lee potenciómetros del joystick
  analogRead(pinPotPan);
  valorPotPan=analogRead(pinPotPan);
  analogRead(pinPotTilt);
  valorPotTilt=analogRead(pinPotTilt);
  
  //Calcula ángulo de potenciómetros en función de valor de joystick
  posServoPan=map(valorPotPan,0,1023,35,100);
  posServoTilt=map(valorPotTilt,0,1023,55,125);
  
  //Mueve servos a las posiciones calculadas
  servoPan.write(posServoPan); 
  servoTilt.write(posServoTilt); 
  
  Serial.print(posServoPan);
  Serial.print(" , ");
  Serial.println(posServoTilt);

  delay(15); // espera 15 msg para que le de tiempo al servo a moverse
}
