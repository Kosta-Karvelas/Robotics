/*
  Push Button Pull-Up 

  Goal:
  This program reads the state of a push button using Arduino's internal pull-up resistor.
  When the button is pressed or released, its state is displayed on the Serial Monitor.
  When the button is not pressed it should read 1 and when it is being pressed it should 0.

  Main Theme: Digital Input 
*/

int buttonPin = 2;  // push button connected to pin 2

void setup() {
  pinMode(buttonPin, INPUT);  // enable internal pull-up resistor
  Serial.begin(9600);  // start serial communication
}

void loop() {
  int buttonState = digitalRead(buttonPin);  // read the button state
  Serial.print("buttonState = ");
  Serial.println(buttonState);  // display the value in Serial Monitor
  delay(200);  // small delay to make output readable
}


