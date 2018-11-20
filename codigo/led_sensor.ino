
/*
  Código con el sensor de luz básico con led
  Seminario Bellas Artes UGR
  Paula de la Hoz
*/

//conectamos el sensor analógico 0
const int sensor = 0;
const int led = 2;

//variable que necesitaremos después con el valor del sensor
int valor;

void setup(void) {
  //iniciamos el monitor serie en el canal 9600 (estandard)
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop(void) {

  //igualamos valor a la lectura del sensor
  valor_s = analogRead(sensor);

  if(valor < 200){
    digitalWrite(led, HIGH);
  }else{
    digitalWrite(led, LOW);
  }

  //imprimimos en el monitor el valor
  Serial.println(valor);

}

//podemos consultar el valor en herramientas -> monitor serie
