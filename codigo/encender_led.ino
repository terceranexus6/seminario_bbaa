/*
  Código básico para encender y apagar un led (sin sensor)
  Seminario Bellas Artes UGR
  Paula de la Hoz
*/

const int led = 3; //si conectamos el led al pin 3

//En setup va todo lo que queremos que se carge por defecto al encender la placa
void setup()
{
  pinMode(led, OUTPUT);  //indicamos que es un OUTPUT (salida)
}

//En loop metemos todo lo que queremos que se repita en bucle
void loop()
{
  digitalWrite(led, HIGH);  //encender led
  delay(500); //esperamos medio segundo
  digitalWrite(led,LOW);  //apagamos led
}
