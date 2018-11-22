#include "Arduino.h"
#include "Scalingseg.h"

Scalingseg::Scalingseg(int pin1, int pin2, int pin3, int pin4)
{
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
  led1 = pin1;
  led2 = pin2;
  led3 = pin3;
  led4 = pin4;
}

void Scalingseg::number0(){

  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  

}

void Scalingseg::number1(){

  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);

}

void Scalingseg::number2(){

  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);

}

void Scalingseg::number3(){

  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);

}

void Scalingseg::number4(){

  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, LOW);

}

void Scalingseg::number5(){

  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, LOW);

}

void Scalingseg::number6(){

  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, LOW);

}

void Scalingseg::number7(){

  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, LOW);

}

void Scalingseg::number8(){

  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);

}

void Scalingseg::number9(){

  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);


}

int numberplus=0;

void Scalingseg::showNumPlus(){



      if (numberplus<10){
    numberplus++;

    if (numberplus==0){
      number0();
    }
    if (numberplus==1){
      number1();
    }
    if (numberplus==2){
      number2();
    }
    if (numberplus==3){
      number3();
    }
    if (numberplus==4){
      number4();
    }
    if (numberplus==5){
      number5();
    }
    if (numberplus==6){
      number6();
    }
    if (numberplus==7){
      number7();
    }
    if (numberplus==8){
      number8();
    }
    if (numberplus==9){
      number9();
    }
  }

  if (numberplus>9){
  numberplus=9;
  }
}

void Scalingseg::showNumMinus(){
  

  
  if (numberplus<10){

    numberplus--;

    if (numberplus==0){
      number0();
    }
    if (numberplus==1){
      number1();
    }
    if (numberplus==2){
      number2();
    }
    if (numberplus==3){
      number3();
    }
    if (numberplus==4){
      number4();
    }
    if (numberplus==5){
      number5();
    }
    if (numberplus==6){
      number6();
    }
    if (numberplus==7){
      number7();
    }
    if (numberplus==8){
      number8();
    }
    if (numberplus==9){
      number9();
    }
  }
 
  if (numberplus<0){
    numberplus=0;
  
  }
}
  



