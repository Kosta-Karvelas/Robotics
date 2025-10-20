/*
  Alternate Push Button RGB Control

  Goal: The goal of this program is to have the red LED 
  of an RGD to always be on and to have the green light on 
  while you are not pressing on a push-button and to have 
  the blue light on when pressing on the button.
More clear: not pressing PB green and red on
Pressing PB blue and red on

  Main Theme: Digital input controlling output

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
digitalWrite(13, 1); //pin 13 is always on
digitalWrite(8, !PB); //pin 12 turns on when button is pressed
digitalWrite(12, PB);// pin 8 turns off when button is pressed

}

