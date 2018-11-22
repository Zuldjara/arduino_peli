#include "Arduino.h"
#include "led_timer.h"

ledTimer::ledTimer(int pin)
{
  pinMode(pin, HIGH);

  _pin = pin;
  
}

unsigned long perviousMillis = 0;

const long interval = 1000;

unsigned long previousMillis = 0;

int ledState = LOW;


void ledTimer::blinker(){
  
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    // save the last time you blinked the LED
    previousMillis = currentMillis;

    
    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }
  
  }
  }

void ledTimer::ledBlink1(){

  
}

