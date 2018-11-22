/*
 * Timer for led blinking for Arduino game.
 */

 #ifndef led_timer_h
 #define led_timer

 #include "Arduino.h"

 class ledTimer
 {
    public:
      ledTimer(int);

      void ledBlink1();
      void ledblink2();
      void ledBlink3();
      void ledBlink4();
      void ledBlink5();
      void blinker();
      
      private:
        int _pin;
 };

 #endif

