/*
 * MotorKnob
 *
 * A stepper motor follows the turns of a potentiometer
 * (or other sensor) on analog input 0.
 * 
 *  El siguiente programa esta creado con motivo educacional y pretende
  Ejemplificar un determinado fenómeno u concepto.
  
   Repositorio público       -> https://github.com/jmadasme/arduinoexperimental
   Perfil Linkedin           -> www.linkedin.com/in/josemanueladasme
   Servidor Discord Arduino  -> https://discord.gg/PbtBpXdb
   Documentación Oficial     -> http://www.arduino.cc/en/Reference/Stepper
  
  Ejemplo liberado al dominio publico
 
 */

#include <Stepper.h>

// change this to the number of steps on your motor
#define STEPS 100

// create an instance of the stepper class, specifying
// the number of steps of the motor and the pins it's
// attached to
Stepper stepper(STEPS, 8, 9, 10, 11);

// the previous reading from the analog input
int previous = 0;

void setup() {
  // set the speed of the motor to 30 RPMs
  stepper.setSpeed(30);
}

void loop() {
  // get the sensor value
  int val = analogRead(0);

  // move a number of steps equal to the change in the
  // sensor reading
  stepper.step(val - previous);

  // remember the previous value of the sensor
  previous = val;
}
