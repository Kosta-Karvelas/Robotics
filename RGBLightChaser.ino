/*
  Light chaser program RGB 

  Goal:
  This program cycles through the colors of an RGB LED by turning on 
  one color (red, green, or blue) at a time. Each color lights 
  up briefly before switching to the next.

  Theme: Digital output 
*/
int viny = 500;      // everywhere where "viny" is written the delay will be 500 
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT);    //turns pin 13 into an output
  pinMode(12, OUTPUT);    //turns pin 12 into an output
  pinMode(8, OUTPUT);     //turns pin 8 into an output
  pinMode(4, OUTPUT);     //turns pin 4 into an output
}

// the loop function runs over and over again forever
void loop() {

  digitalWrite(13, 1); // turn the LED on (HIGH is the voltage level)                     
  digitalWrite(12, 0); // turn the LED off by making the voltage LOW
  digitalWrite(8, 0);  // turn the LED off by making the voltage LOW            
  digitalWrite(4, 0);  // turn the LED off by making the voltage LOW
  delay(viny);         // wait for a second

  digitalWrite(13, 0); // turn the LED off by making the voltage LOW         
  digitalWrite(12, 1); // turn the LED on (HIGH is the voltage level) 
  digitalWrite(8, 0);  // turn the LED off by making the voltage LOW      
  digitalWrite(4, 0);  // turn the LED off by making the voltage LOW
  delay(viny);         // wait for a second

  digitalWrite(13, 0); // turn the LED off by making the voltage LOW             
  digitalWrite(12, 0); // turn the LED off by making the voltage LOW
  digitalWrite(8, 1);  // turn the LED on (HIGH is the voltage level)                      
  digitalWrite(4, 0);  // turn the LED off by making the voltage LOW
  delay(viny);         // wait for a second

  digitalWrite(13, 0); // turn the LED off by making the voltage LOW                     
  digitalWrite(12, 1); // turn the LED on (HIGH is the voltage level) 
  digitalWrite(8, 0);  // turn the LED off by making the voltage LOW               
  digitalWrite(4, 0);  // turn the LED off by making the voltage LOW
  delay(viny);         // wait for a second
}



 