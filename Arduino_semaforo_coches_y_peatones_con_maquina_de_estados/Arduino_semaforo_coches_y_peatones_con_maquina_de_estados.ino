/* 	Semaforo (coches y peatones) 
	con máquina de estados
    
    Autor: Alejandro Alonso Puig
    Versión: 1.0
    Fecha: Mayo 2023
    
    El presente programa implementa una máquina de 
    tres estados (rojo, ambar, verde) de los que 
    saltará según un temporizador.
    Es un ejemplo de implementación de máquinas de
    estados finitos simples.
    */

	int pin; //pines a usar para los LEDs
	int estado = 1; //Estado en el que está la máquina

void setup()
{
  //Configuramos los pines de salida (LEDs)
  for (pin = 9; pin <= 13; pin++)
  pinMode(pin, OUTPUT);
}

void loop()
{
  
  switch (estado) {
    case 1: //Estado1. Coches:Verde, Peatones:Rojo
        digitalWrite(9,  LOW);	//Peatones verde
        digitalWrite(10,HIGH); 	//Peatones rojo
        digitalWrite(11,HIGH);	//Coches   verde
        digitalWrite(12, LOW);	//Coches   ambar
        digitalWrite(13, LOW);	//Coches   rojo
        delay(4000);
    	estado = 2;
    	break;
    
    case 2: //Estado2. Coches:Ambar, Peatones:Rojo
        digitalWrite(9,  LOW);	//Peatones verde
        digitalWrite(10,HIGH); 	//Peatones rojo
        digitalWrite(11, LOW);	//Coches   verde
        digitalWrite(12,HIGH);	//Coches   ambar
        digitalWrite(13, LOW);	//Coches   rojo
        delay(2000);
    	estado = 3;
    	break;
    
    case 3: //Estado3. Coches:Rojo, Peatones:Verde
        digitalWrite(9, HIGH);	//Peatones verde
        digitalWrite(10, LOW); 	//Peatones rojo
        digitalWrite(11, LOW);	//Coches   verde
        digitalWrite(12, LOW);	//Coches   ambar
        digitalWrite(13,HIGH);	//Coches   rojo
        delay(4000);
    	estado = 4;
    	break;

    case 4: //Estado3. Coches:Rojo, Peatones:Verde parpadeo
        digitalWrite(9, HIGH);	//Peatones verde
        digitalWrite(10, LOW); 	//Peatones rojo
        digitalWrite(11, LOW);	//Coches   verde
        digitalWrite(12, LOW);	//Coches   ambar
        digitalWrite(13,HIGH);	//Coches   rojo
    	for (int t = 0; t<5; t++){
          digitalWrite(9,  LOW);	//Peatones verde
          delay (500);
          digitalWrite(9, HIGH);	//Peatones verde
          delay (500);
        }  
    	estado = 1;
    	break;
	}
}