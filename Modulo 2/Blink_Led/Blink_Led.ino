/*
  Blink

  Turns an LED cada un segundo luego se apaga por un segundo.

 El siguiente programa esta creado con motivo educacional y pretende
  Ejemplificar un determinado fenómeno u concepto.
  
   Repositorio publico       -> https://github.com/jmadasme/arduinoexperimental
   Perfil Linkedin           -> www.linkedin.com/in/josemanueladasme
   Servidor Discord Arduino  -> https://discord.gg/PbtBpXdb
   Documentacion Oficial     -> https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
  
  Ejemplo liberado al dominio publico

*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
