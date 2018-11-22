/* 
 *  Scalingseg.h - Libray to scale your 7-segment
 *  in numbers of 0-9, works well within a button function.
 */

 #ifndef Scalingseg_h
 #define Scalingseg_h

 #include "Arduino.h"
 

class Scalingseg
{
    public:
      Scalingseg(int, int, int, int);
      void number0();
      void number1();
      void number2();
      void number3();
      void number4();
      void number5();
      void number6();
      void number7();
      void number8();
      void number9();
      void showNumPlus();
      void showNumMinus();

  private:
    int led1;
    int led2;
    int led3;
    int led4;
};

#endif


















  

  
 
