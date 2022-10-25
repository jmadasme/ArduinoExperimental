/*
  String substring()

  El siguiente programa esta creado con motivo educacional y pretende
  Ejemplificar un determinado fenómeno u concepto.
  
   Repositorio público       -> https://github.com/jmadasme/arduinoexperimental
   Perfil Linkedin           -> www.linkedin.com/in/josemanueladasme
   Servidor Discord Arduino  -> https://discord.gg/PbtBpXdb
   Documentación Oficial     -> https://www.arduino.cc/en/Tutorial/BuiltInExamples/StringSubstring

   Ejemplo liberado al dominio publico  
   
*/

void setup() {
  // Open serial communications and wait for port to open:
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }

  // send an intro:
  Serial.println("\n\nString  substring():");
  Serial.println();
}

void loop() {
  // Set up a String:
  String stringOne = "Content-Type: text/html";
  Serial.println(stringOne);

  // substring(index) looks for the substring from the index position to the end:
  if (stringOne.substring(19) == "html") {
    Serial.println("It's an html file");
  }
  // you can also look for a substring in the middle of a string:
  if (stringOne.substring(14, 18) == "text") {
    Serial.println("It's a text-based file");
  }

  // do nothing while true:
  while (true);
}
