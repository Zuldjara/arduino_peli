/*
 * https://www.gadgetronicx.com/reflex-test-game-using-arduino/
 * https://www.youtube.com/watch?v=AnhrBo357uk
 */
 
 
#include "Button.h"
#include "Scalingseg.h"

#define vcc1 9
#define vcc2 8
#define vcc3 7
#define vcc4 6

Button S1(5);
Button S2(4);


Scalingseg led1(13, 12, 11, 10);





void setup() {

Serial.begin(9600);


pinMode(vcc1, OUTPUT);
pinMode(vcc2, OUTPUT);
pinMode(vcc3, OUTPUT);
pinMode(vcc4, OUTPUT);
digitalWrite(vcc1, HIGH);
digitalWrite(vcc2, HIGH);
digitalWrite(vcc3, HIGH);
digitalWrite(vcc4, HIGH);

}





long randNumber;
  void loop(){

if(S1.pressed()){
  randomSeed(analogRead(0));

  randNumber = random(1, 5);
  Serial.println(randNumber);
  led1.showNumMinus();
 
  
}

if(S2.pressed()){
  randomSeed(analogRead(0));

  randNumber = random(1, 5);
  Serial.println(randNumber);
  led1.showNumMinus();
}

    
  }

