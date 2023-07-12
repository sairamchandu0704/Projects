int redLED = 9;
int greenLED = 10;
int blueLED = 11;
void setup() {
 // Declare the pins for the LED as Output
 pinMode(redLED, OUTPUT);
 pinMode(greenLED, OUTPUT);
 pinMode(blueLED, OUTPUT);
}
// A simple function to set the level for each color from 0 to 255
void setColor(int redValue, int greenValue, int blueValue){
 analogWrite(redLED, 255 - redValue);
 analogWrite(greenLED, 255 - greenValue);
 analogWrite(blueLED, 255 - blueValue);
}
void loop(){
 // Change a few colors

 setColor(148, 0, 211); // v
 delay(1000);

 setColor(75, 0, 130); // i
 delay(1000);

 setColor(0, 0, 255); // b
 delay(1000);

 setColor(0, 255, 0); // g
 delay(1000);

 setColor(255, 255, 0); // y
 delay(1000);

 setColor(255, 127, 0); // o
  delay(1000);

 setColor(255, 0, 0); // r
 delay(1000);
 
}
