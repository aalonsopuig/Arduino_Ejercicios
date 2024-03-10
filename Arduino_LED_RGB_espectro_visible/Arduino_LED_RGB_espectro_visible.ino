// Control suave de LED RGB mostrando toda la gama de colores siguiendo el espectro visible

// Descomenta esta línea si estás usando un LED de ánodo común
#define COMMON_ANODE

// Variables globales
int LED_R_Pin = 3;
int LED_G_Pin = 5;
int LED_B_Pin = 6;

void setup()
{
  // Configuramos los pines como salida
  pinMode(LED_R_Pin, OUTPUT);
  pinMode(LED_G_Pin, OUTPUT);
  pinMode(LED_B_Pin, OUTPUT);
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
  // Mostramos una transición suave de colores siguiendo el espectro visible
  
  // Coordenadas polares para generar los colores
  float angle = 0;
  float increment = 0.1;
  
  // Iteramos a través del espectro de colores
  while (angle < 2 * PI)
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
