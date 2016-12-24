
 
int redPin = 4;
int greenPin = 3;
int bluePin = 2;
 
 
void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);  
}
 
void loop()
{
  int randRed = int(random(255));
  int randGreen = int(random(255));
  int randBlue = int(random(255));
  analogWrite(redPin, randRed);
  analogWrite(greenPin, randGreen);
  analogWrite(bluePin, randBlue);
  delay(1000);
//  setColor(255, 0, 0);  // red
//  delay(1000);
//  setColor(0, 255, 0);  // green
//  delay(1000);
//  setColor(0, 0, 255);  // blue
//  delay(1000);
//  setColor(255, 255, 0);  // yellow
//  delay(1000);  
//  setColor(80, 0, 80);  // purple
//  delay(1000);
//  setColor(0, 255, 255);  // aqua
//  delay(1000);
}
 
void setColor(int red, int green, int blue)
{
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);  
}
