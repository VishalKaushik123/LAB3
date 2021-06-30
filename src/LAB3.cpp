/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "c:/Users/Vishal/Documents/CTDProjects/LAB3/src/LAB3.ino"
/*
 * Project LAB3
 * Description:
 * Author:
 * Date:
 */
void setup();
void loop();
#line 7 "c:/Users/Vishal/Documents/CTDProjects/LAB3/src/LAB3.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);
// setup() runs once, when the device is first turned on.
void setup() {
  // Put initialization like pinMode and begin functions here.
  pinMode(D5, OUTPUT);
  pinMode(D6, OUTPUT);  
  pinMode(D7, OUTPUT); 
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.
  
  //red
  analogWrite(D7, 255); // r
  analogWrite(D6, 0); // g
  analogWrite(D5, 0); // b
  //waits 1 second
  delay(1000);

  //green
  analogWrite(D7, 0);
  analogWrite(D6, 255);
  analogWrite(D5, 0);
  //waits 1 second
  delay(1000);

  //blue
  analogWrite(D7, 0);
  analogWrite(D6, 0);
  analogWrite(D5, 255);
  //waits 1 second
  delay(1000);

  //orange
  analogWrite(D7, 255);
  analogWrite(D6, 30);
  analogWrite(D5, 0);
  //waits 1 second
  delay(1000);

  //yellow
  analogWrite(D7, 255);
  analogWrite(D6, 100);
  analogWrite(D5, 0);
  //waits 1 second
  delay(1000);

  //purple
  analogWrite(D7, 128);
  analogWrite(D6, 0);
  analogWrite(D5, 128);
  //waits 1 second
  delay(1000);

  //cyan
  analogWrite(D7, 0);
  analogWrite(D6, 255);
  analogWrite(D5, 255);
  //waits 1 second
  delay(1000);


}