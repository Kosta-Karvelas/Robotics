/*
  Push Button (PB) Input Pull-Up

  Goal:
  This program reads the state of a push button using Arduino's internal pull-up resistor. 
  The button state (pressed or not pressed) is displayed on the Serial Monitor. When the 
  button is not being pressed it should read 1 and when it's pressed it should read 0. 

  Main Theme:
  Digital Input using Internal Pull-Up Resistor
*/

int buttonPin = 2;    // push button connected to digital pin 2
int buttonState = 0;  // variable to store button state

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);  // enable internal pull-up resistor
  Serial.begin(9600);                // start serial communication
}

void loop() {
  buttonState = digitalRead(buttonPin);  // read the button input
  Serial.println(buttonState);           // display the value on Serial Monitor
  delay(200);                            // short delay for readability
}
