/*  Control motor con potenciómetro
	Versión 1.0
    Mayo 2023
    
    El programa lee el valor del potenciómetro. 
    Dependiendo de su valor controla la velocidad
    del motor en un sentido o en otro
*/

const int pinPot = 0;
const int pinMotor1 = 5;
const int pinMotor2 = 6;

int valorPot = 0; 	//Valor del potenciómetro
int Motor1 = 0;		//Salida 1 para motor
int Motor2 = 0;		//Salida 2 para motor

void setup()
{
 pinMode(pinMotor1,OUTPUT);
 pinMode(pinMotor2,OUTPUT);
}

void loop()
{ 
 valorPot=analogRead(pinPot);
  if (valorPot>=524) { //Potenciómetro mitad derecha
    //El motor gira en un sentido
    Motor1=map(valorPot,524,1023,0,255);
    Motor2=0;
  } else if (valorPot<=500) { //Potenciómetro mitad izda
    //El motor gira en otro sentido
    Motor1=0;
    Motor2=map(valorPot,0,500,255,0);
  } else { //Potenciómetro aprox en el centro
    //Motor parado
    Motor1=0;
    Motor2=0;
  } 
 analogWrite(pinMotor1,Motor1);
 analogWrite(pinMotor2,Motor2);
}  
  
  
  