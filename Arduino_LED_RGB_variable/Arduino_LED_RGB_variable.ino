//Control LED RGB con tres potenciómetros

//uncomment this line if using a Common Anode LED
//#define COMMON_ANODE

//Variables globales
//Potenciómetros
int pot1 = A5;
int pot2 = A4;
int pot3 = A3;

//LEDs (Pines PWM)
int LED_R_Pin = 3;
int LED_G_Pin = 5;
int LED_B_Pin = 6;

//Intensidad para cada LED
int IntenR = 0;
int IntenG = 0;
int IntenB = 0;

void setup ()
{
  //Configuramos pines como salida. Son Pines PWM
  pinMode(LED_R_Pin, OUTPUT);
  pinMode(LED_G_Pin, OUTPUT);
  pinMode(LED_B_Pin, OUTPUT);
}

void setColor(int red, int green, int blue)
//Enviamos a cada canal del led R-G-B el valor de intensidad
//Como una señal PWM de Duty Cycle igual al valor de intensidad
{
  #ifdef COMMON_ANODE
    red = 255 - red;
    green = 255 - green;
    blue = 255 - blue;
  #endif
  analogWrite(LED_R_Pin, red);
  analogWrite(LED_G_Pin, green);
  analogWrite(LED_B_Pin, blue);  
}


void loop()
{
  //Leemos valor de potenciómetros. Puertos son de 10 bits
  //por ello dividimos por 4, para reducir el valor a 8 bits (0-255)
  IntenR = map(analogRead(pot1),0,1023,0,255);
  IntenG = map(analogRead(pot2),0,1023,0,255);
  IntenB = map(analogRead(pot3),0,1023,0,255);

  delay(100);

  setColor(IntenR, IntenG, IntenB); // Establecemos colores led

  delay(100);
}
