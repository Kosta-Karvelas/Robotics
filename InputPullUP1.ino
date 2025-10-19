/*
  Push Button (PB) Input Pull-Up

  Goal:
  This program reads the state of a push button using Arduino's internal pull-up resistor. 
  When the button is not being pressed it should read 1 and when it's pressed it should read 0. 
  This program uses an internal resistor instead of an external one.

  Main Theme:
  Digital Input using Internal Pull-Up Resistor
*/

int buttonPin = 2;    // push button connected to digital pin 2

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);  // enable internal pull-up resistor
  Serial.begin(9600);                // start serial communication
}

void loop() {
  int buttonState = digitalRead(buttonPin);  // read the button input
  Serial.print("buttonState = "); // display what's in the quotations
  Serial.println(buttonState);           // display the value on Serial Monitor and goes to next line
  delay(200);                            // short delay for readability
}
