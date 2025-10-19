/*
  RGB colour selector

  Goal: The goal is to change the intensities of the LEDs 
  in the Rgb to obtain a more specific colour.
 

  Main Theme: Analog Output

*/

int red = 11;  //Red LED of RGB is pin 11
int green = 10;   //Green LED of RGB is pin 10
int blue = 9;  //Blue LED of RGB is pin 9

void setup() {
pinMode(11, OUTPUT);  //pin 11 is now output
pinMode(10, OUTPUT);  //pin 10 is now output
pinMode(9, OUTPUT);  //pin 9 is now output
}

void loop() {
analogWrite(11, 255);  // Each colour has their own set value
analogWrite(10, 153);
analogWrite(9, 51);

}
