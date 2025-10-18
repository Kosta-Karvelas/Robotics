/*
  Blink
 
  Goal:  This program makes a single LED which is connected to pin 13 to turn on for one second and then off for 
  one second, then it repeats itself.

  Theme: Digital output 
  
*/

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(13, OUTPUT);     // turns pin 13 into an output
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, 1);   // turn the LED on (HIGH is the voltage level)
  delay(1000);           // wait for a second
  digitalWrite(13, 0);   // turn the LED off by making the voltage LOW
  delay(1000);           // wait for a second
}
