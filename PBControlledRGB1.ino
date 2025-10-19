/*
  Push Button Controlled RGB

  Goal: The goal of this progam is to have an RGB turn white 
  when a pushbutton is not being pressed and turn off completly
  when you press on it.

  Main Theme: Digital Input Controlling Digital Output

*/

void setup() {
pinMode(2, INPUT_PULLUP);
pinMode(13, OUTPUT); //Sets pin 13 to outputs
pinMode(12, OUTPUT);//Sets pin 12 to outputs
pinMode(8, OUTPUT);//Sets pin 8 to outputs

}

void loop() {
//Read the Pushbutton value
int PB = digitalRead(2);
//Turns the LED white if the pushbutton reads 1 and turns off if pushbutton reads 0. 
digitalWrite(13, PB);
digitalWrite(12, PB);
digitalWrite(8, PB);

}
