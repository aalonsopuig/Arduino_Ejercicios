/*
 Cuenta de pulsaciones
 Ejemplo de uso de flags de estado para contar las veces 
 que se pulsa el led, sin que el contador se incremente
 continuamente en caso de dejar pulsado el botón
 Se utiliza un LCD de 16x2 caracteres de tipo I2C
 
 Por: Alejandro Alonso Puig
 Abril 2024
 */

#include <Wire.h>				//Libreria para I2C
#include <LiquidCrystal_I2C.h>	//Libreria LCD

const int pinPulsador = 2; //Pin del pulsador   

bool estaba_Pulsado=false; //Identifica si el pulsador estaba pulsado
int pulsaciones=0; //Número de veces que se ha pulsado

LiquidCrystal_I2C lcd(0x20,16,2); //0x20 es la direccion I2C



void setup()
{
  pinMode(pinPulsador, INPUT);

  lcd.init();
  lcd.backlight();
  lcd.print("Prog. Contador");
  
}

void loop()
{
  if (digitalRead(pinPulsador)) { //Se detecta pulsador apretado 
    if (!estaba_Pulsado) { //No estaba pulsado, así que es nueva pulsación 
      estaba_Pulsado=true;
      pulsaciones=pulsaciones+1;
    }
    else {
      //Ya estaba pulsado, así que no contamos
    }
  }
  else{
     //El pulsador no está apretado, liberamos flag
     estaba_Pulsado=false;
  }
  lcd.setCursor(0,1); // Segunda Linea
  lcd.print(pulsaciones);
  lcd.print(" pulsaciones ");
}