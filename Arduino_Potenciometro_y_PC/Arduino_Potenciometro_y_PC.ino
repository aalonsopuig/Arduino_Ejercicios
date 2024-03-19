/*
Entrada analógicas y escritura en PC
*/

int valorPotenciometro = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop()
{
  // lee el valor del potenciómetro
  valorPotenciometro = analogRead(A0);
  Serial.println(valorPotenciometro);
  delay(100);  
}