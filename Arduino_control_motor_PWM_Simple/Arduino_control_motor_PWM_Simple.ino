/*
 * Programa control motor básico con LCD
 * Por: Alejandro Alonso Puig
 * Mayo 2024
 *
 * Programa que permite controlar un motor DC mediante un potenciómetro
 * leyendo el valor de este y convirtiéndolo en un valor PWM
 * Adicionalmente muestra en el display este valor.
 */

//Librería de control del display
#include <LiquidCrystal.h> 
//Crear el objeto LCD con los números correspondientes (rs, en, d4, d5, d6, d7)
LiquidCrystal lcd(12, 10, 5, 4, 3, 2);

const int pinPot = 5;
const int pinMotor = 6;

int valorPot = 0; 	//Valor del potenciómetro
int Motor = 0;		//Salida para motor
int duty = 0;		//% de duty cycle

void setup() {
  pinMode(pinMotor,OUTPUT);
  // Inicializar el LCD con el número de  columnas y filas del LCD
  lcd.begin(16, 2);
  // Escribimos el Mensaje en el LCD.
  lcd.print("Control motor");
}

void loop() {
  valorPot=analogRead(pinPot);
  Motor=map(valorPot,0,1023,0,255);
  duty=map(Motor,0,254,0,100);
  analogWrite(pinMotor,Motor);
  // Ubicamos el cursor en la primera posición(columna:0) de la segunda línea(fila:1)
  lcd.setCursor(0, 1);
  lcd.print("DutyCycle: ");
  lcd.print(duty);
  lcd.print("% ");
  delay(100);
}
