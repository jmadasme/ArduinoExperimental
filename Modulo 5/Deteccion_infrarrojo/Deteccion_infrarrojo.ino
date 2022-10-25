/*
  Infrarrojo.

  El siguiente programa esta creado con motivo educacional y pretende
  Ejemplificar un determinado fenómeno u concepto.
  
   Repositorio público       -> https://github.com/jmadasme/arduinoexperimental
   Perfil Linkedin           -> www.linkedin.com/in/josemanueladasme
   Servidor Discord Arduino  -> https://discord.gg/PbtBpXdb
   Documentación Oficial     -> https://www.luisllamas.es/detectar-obstaculos-con-sensor-infrarrojo-y-arduino/
  
   Ejemplo liberado al dominio publico
   
*/
const int sensorPin = 9;

void setup() {
  Serial.begin(9600);   //iniciar puerto serie
  pinMode(sensorPin , INPUT);  //definir pin como entrada
}
 
void loop(){
  int value = 0;
  value = digitalRead(sensorPin );  //lectura digital de pin
 
  if (value == HIGH) {
      Serial.println("Detectado obstaculo");
  }
  delay(1000);
}
