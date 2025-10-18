/*  
  Light chaser program 2
  
  Goal:   This program creates a light-chasing effect by turning four LEDs on and off in sequence.
  Each LED lights up one at a time with a short delay between them to simulate movement.
  
  Theme:  Digital output

*/


int viny = 500;        // everywhere where this is written the delay will be be 500

void setup() { 
  pinMode(13, OUTPUT);    //turns pin 13 into an output
  pinMode(12, OUTPUT);    //turns pin 12 into an output
  pinMode(8, OUTPUT);     //turns pin 8 into an output
} 


void loop() {            // the loop function runs over and over again forever 
  digitalWrite(13, 1);   // turn the LED on (HIGH is the voltage level) 
  digitalWrite(12, 0);   // turn the LED off by making the voltage LOW 
  digitalWrite(8, 0);    // turn the LED off by making the voltage LOW 
  delay(viny);           // wait for a second
 
  digitalWrite(13, 0);   // turn the LED off by making the voltage LOW 
  digitalWrite(12, 1);   // turn the LED on (HIGH is the voltage level) 
  digitalWrite(8, 0);    // turn the LED off by making the voltage LOW 
  delay(viny);           // wait for a second 

  digitalWrite(13, 0);   // turn the LED off by making the voltage LOW 
  digitalWrite(12, 0);   // turn the LED off by making the voltage LOW 
  digitalWrite(8, 1);    // turn the LED on (HIGH is the voltage level) 
  delay(viny);           // wait for a second 

  digitalWrite(13, 0);   // turn the LED off by making the voltage LOW 
  digitalWrite(12, 1);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(8, 0);    // turn the LED off by making the voltage LOW 
  delay(viny);           // wait for a second 

} 
