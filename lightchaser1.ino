/* 
Turns off all LEDs, then turns on one LED at a time. A counter tells the loop which LED to turn on next. 
This is a digital output control since it uses multiple inputs to control many digital outputs in a pattern 
 
*/ 

void setup () //the setup function runs once when you press reset or power the board 
 
{ 
 
pinMode(2, OUTPUT); // initialize digital pin 2,3,4 as an output  
pinMode(3, OUTPUT);  
pinMode(4, OUTPUT); 
 
 }  
 
void loop() // the loop function runs over and over again forever  
 
 {  
 
digitalWrite(2, 1);  //turns on the LED of pin 2 and the rest of the led are off  
digitalWrite(3, 0); 
digitalWrite(4, 0); 
delay(500); // wait for half a second 
 
digitalWrite(2, 0); //turns on the LED of pin 3 and the rest of the led are off  
digitalWrite(3, 1); 
digitalWrite(4, 0); 
delay(500); // wait for half a second 
 
digitalWrite(2, 0); //turns on the LED of pin 4 and the rest of the led are off  
digitalWrite(3, 0); 
digitalWrite(4, 1); 
delay(500); // wait for half a second 
 
} 
