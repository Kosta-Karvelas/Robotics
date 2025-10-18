/*
  Arduino Push Button (PB) Pull-Down

  Goal:
  This program reads the state of a push button using an external pull-down resistor.
  The button state is displayed on the Serial Monitor. When the button is not being 
  pressed it should read 0 and when it's pressed it should read 1.

  Main Theme:
  Digital Input using External Pull-Down Resistor
*/

int buttonPin = 2;    // push button connected to digital pin 2
int buttonState = 0;  // variable to store button state

void setup() {
  pinMode(buttonPin, INPUT);   // normal input mode (no internal pull-up)
  Serial.begin(9600);          // start serial communication
}

void loop() {
  buttonState = digitalRead(buttonPin);  // read the button input
  Serial.println(buttonState);           // display value in Serial Monitor
  delay(200);                            // delay for readability
}