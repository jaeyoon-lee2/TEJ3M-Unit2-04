/*
  Created by: Jaeyoon Lee
  Created on: Dec 2021

  Turn RGB LED on and rotate through each color:
  red, green, blue, purple, cyan, megenta, yellow and white
*/

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  RGB_color(HIGH, LOW, LOW);
  
  RGB_color(LOW, HIGH, LOW);

  RGB_color(LOW, LOW, HIGH);
  
  RGB_color(HIGH, HIGH, LOW);
  
  RGB_color(HIGH, LOW, HIGH);

  RGB_color(LOW, HIGH, HIGH);

  RGB_color(HIGH, HIGH, HIGH);
}

void RGB_color(int red, int green, int blue)
{
  digitalWrite(11, green);
  digitalWrite(12, blue);
  digitalWrite(13, red);
  delay(1000);
}
