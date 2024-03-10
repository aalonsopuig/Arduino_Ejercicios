// Control LED RGB con tres potenciómetros y espectro de colores con botón

/*Este código combina la funcionalidad para controlar el LED RGB con potenciómetros 
y mostrar el espectro de colores cuando se presiona un botón. El programa verifica 
continuamente si el botón está presionado. Si lo está, se muestra el espectro de 
colores; de lo contrario, el color del LED se controla mediante los potenciómetros.*/


// Descomenta esta línea si estás usando un LED de ánodo común
#define COMMON_ANODE

// Variables globales
int pot1 = A5;
int pot2 = A4;
int pot3 = A3;
int LED_R_Pin = 3;
int LED_G_Pin = 5;
int LED_B_Pin = 6;
int buttonPin = 10;
bool buttonPressed = false;

void setup()
{
  // Configuramos los pines como salida
  pinMode(LED_R_Pin, OUTPUT);
  pinMode(LED_G_Pin, OUTPUT);
  pinMode(LED_B_Pin, OUTPUT);
  // Configuramos el pin del botón como entrada
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(12, OUTPUT);
  digitalWrite(12, LOW);
}

void setColor(int red, int green, int blue)
{
  // Ajustamos los valores para un LED de ánodo común (si es necesario)
  #ifdef COMMON_ANODE
    red = 255 - red;
    green = 255 - green;
    blue = 255 - blue;
  #endif
  
  // Configuramos los valores de intensidad para cada LED
  analogWrite(LED_R_Pin, red);
  analogWrite(LED_G_Pin, green);
  analogWrite(LED_B_Pin, blue);
}

void loop()
{
  // Verificamos si el botón está presionado
  if (digitalRead(buttonPin) == LOW) {
    buttonPressed = true;
  } else {
    buttonPressed = false;
  }
  
  if (buttonPressed) {
    // Mostramos el espectro de colores
    showColorSpectrum();
  } else {
    // Mostramos el color controlado por los potenciómetros
    showColorControlledByPotentiometers();
  }
}

void showColorSpectrum() {
  // Coordenadas polares para generar los colores
  float angle = 0;
  float increment = 0.1;
  
  // Iteramos a través del espectro de colores
  while (angle < 2 * PI && buttonPressed)
  {
    // Convertimos las coordenadas polares a coordenadas cartesianas
    int red = int((1 + sin(angle)) * 127.5);
    int green = int((1 + sin(angle + 2 * PI / 3)) * 127.5);
    int blue = int((1 + sin(angle + 4 * PI / 3)) * 127.5);
    
    // Mostramos el color
    setColor(red, green, blue);
    
    // Añadimos un pequeño retardo para la transición suave
    delay(100);
    
    // Incrementamos el ángulo para pasar al siguiente color
    angle += increment;
  }
}

void showColorControlledByPotentiometers() {
  // Leemos el valor de los potenciómetros 
  //(dividimos entre 4 porque el ADC es de 10 bits 
  // y necesitamos un número de 8 bits)
  int IntenR = analogRead(pot1) / 4;
  int IntenG = analogRead(pot2) / 4;
  int IntenB = analogRead(pot3) / 4;

  // Mostramos el color controlado por los potenciómetros
  setColor(IntenR, IntenG, IntenB);

  // Pequeño retraso para estabilidad
  delay(100);
}
