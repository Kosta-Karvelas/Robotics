/*
  Push Button Pull-Up 

  Goal:
  This program reads the state of a push button using Arduino's internal pull-up resistor.
  When the button is pressed or released, its state is displayed on the Serial Monitor.

  Main Theme:
  Digital Input 
*/

int buttonPin = 2;  // push button connected to pin 2
int buttonState = 0;  // variable to store button state

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);  // enable internal pull-up resistor
  Serial.begin(9600);  // start serial communication
}

void loop() {
  buttonState = digitalRead(buttonPin);  // read the button state
  Serial.println(buttonState);  // display the value in Serial Monitor
  delay(200);  // small delay to make output readable
}


