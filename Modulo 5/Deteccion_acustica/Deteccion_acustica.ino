/*
  El siguiente programa esta creado con motivo educacional y pretende
  Ejemplificar un determinado fenómeno u concepto.
  
   Repositorio público       -> https://github.com/jmadasme/arduinoexperimental
   Perfil Linkedin           -> www.linkedin.com/in/josemanueladasme
   Servidor Discord Arduino  -> https://discord.gg/PbtBpXdb
   Documentación Oficial     -> https://www.prometec.net/sensor-sonido-ky038/
     
  Ejemplo liberado al dominio publico  

*/

int LED = 13 ; 
int sensor = 6 ;
bool estado = false ;

void setup()
{
  pinMode( LED, OUTPUT) ;
  pinMode( sensor , INPUT_PULLUP) ;
  digitalWrite(LED , LOW) ; // Apagamos el LED al empezar
}

void loop()
{
  bool  valor =  digitalRead(sensor) ; //leemos el estado del sensor
  if ( valor == true ) //Si está activada la salida D0
  {
    estado = ! estado ;                       // cambiamos el estado del LED
    digitalWrite(LED, estado) ;            // escribimos el nuevo valor
    delay (1000);
  }
}
