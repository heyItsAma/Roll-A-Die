//Purpose: Electronic Die
//Roll the Die
//Send data to website
//Create live graphs using Chart.js

void setup() {
  //Seed the random Number Generator
  randomSeed(analogRead(0));

  for(int z = 1; z < 7; z++)
  {
    pinMode(z, OUTPUT);
  }

}

void randomLED(int del)
{
  int r;

  //Get a random number from 1 to 6
  r = random(1, 7);

  //Output to the matching LED on digital pin 1-6
  digitalWrite(r, HIGH);
  if(del > 0)
  {
    delay(del); //hold the LED on for the delay received
  }
  else if(del == 0)
  {
    do {} while(1); // the delay entered was zero, hold the LED on forever
  }
  digitalWrite(r, LOW); //turn off the LED
}

void loop() {
  // put your main code here, to run repeatedly:
  int a;
  //cycle the LEDs around for effect
  for(a = 0; a < 100; a++)
  {
    randomLED(50);
  }
  // slow down
  for( a = 1; a <= 10; a++)
  {
    randomLED(a * 100);
  }
  // and stop at the final random number and LED
  randomLED(0);
}



