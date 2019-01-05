/*
   Led LD788BS-SS22 8x8 test
 
   up connector 16 15 14 13 12 11 10 9
 
                   o o o o o o o o
                   o o o o o o o o
                   o o o o o o o o
                   o o o o o o o o
                   o o o o o o o o
                   o o o o o o o o
                   o o o o o o o o
                   o o o o o o o o
                   
   down connector  1 2 3 4 5 6 7 8
 
  Owner http://youtu.be/5fWSdQEqCEY, June 2015
 */
 
// (+) Pins
 
const int pin1 = 2; //D2
const int pin2 = 3; //D3
const int pin5 = 4; //D4
const int pin7 = 5; //D5
const int pin8 = 6; //D6
const int pin14 = 7;//D7
const int pin12 = 8;//D8
const int pin9 = 9; //D9
 
// (-) Pins
 
const int pin3 = 10; //D10
const int pin4 = 11; //D11
const int pin6 = 12; //D12
const int pin16 = 14; //A0
const int pin15= 15; //A1
const int pin13= 16; //A2
const int pin11= 17; //A3
const int pin10= 18; //A4
  
//Sorting pins by order
const int R[8] = {pin9,pin14,pin8,pin12,pin1,pin7,pin2,pin5};
const int C[8] = {pin13,pin3,pin4,pin10,pin6,pin11,pin15,pin16};

#include <avr/pgmspace.h>
 
  

// Char array for displaying caracters
// Flying saucer
PROGMEM const char Aa0[8][8] =
{
  0,0,0,1,1,0,0,0,
  0,1,1,1,1,1,1,0,
  1,0,0,0,0,1,1,1,
  0,1,1,1,1,1,1,0,
  0,0,0,1,1,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
}; 
PROGMEM const char Aa1[8][8] =
{
  0,0,0,1,1,0,0,0,
  0,1,1,1,1,1,1,0,
  0,0,0,0,1,1,1,0,
  0,1,1,1,1,1,1,0,
  0,0,0,1,1,0,0,0,
  0,0,0,0,0,1,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
};  
PROGMEM const char Aa2[8][8] =
{
  0,0,0,1,1,0,0,0,
  0,1,1,1,1,1,1,0,
  0,0,0,1,1,1,0,0,
  0,1,1,1,1,1,1,0,
  0,0,0,1,1,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,1,0,
  0,0,0,0,0,0,0,0,
}; 

PROGMEM const char Aa3[8][8] =
{
  0,0,0,1,1,0,0,0,
  0,1,1,1,1,1,1,0,
  0,0,1,1,1,0,0,0,
  0,1,1,1,1,1,1,0,
  0,0,0,1,1,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,1,
};

PROGMEM const char Aa4[8][8] =
{
  0,0,0,1,1,0,0,0,
  0,1,1,1,1,1,1,0,
  0,1,1,1,0,0,0,0,
  0,1,1,1,1,1,1,0,
  0,0,0,1,1,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
};

PROGMEM const char Aa5[8][8] =
{
  0,0,0,1,1,0,0,0,
  0,1,1,1,1,1,1,0,
  1,1,1,0,0,0,0,1,
  0,1,1,1,1,1,1,0,
  0,0,0,1,1,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
};

PROGMEM const char Aa6[8][8] =
{
  0,0,0,1,1,0,0,0,
  0,1,1,1,1,1,1,0,
  1,1,0,0,0,0,1,1,
  0,1,1,1,1,1,1,0,
  0,0,0,1,1,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
};
// Flying saucer animation
const int Aa[7] PROGMEM = {Aa0,Aa1,Aa2,Aa3,Aa4,Aa5,Aa6};


//Bomb char array
PROGMEM const char Ab0[8][8] =
{
  1,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,1,1,
  0,0,0,0,0,0,1,1,
};
PROGMEM const char Ab1[8][8] =
{
  0,0,0,0,0,0,0,0,
  0,1,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,1,1,
  0,0,0,0,0,0,1,1,
};
PROGMEM const char Ab2[8][8] =
{
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,1,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,1,1,
  0,0,0,0,0,0,1,1,
};
PROGMEM const char Ab3[8][8] =
{
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,1,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,1,1,
  0,0,0,0,0,0,1,1,
};
PROGMEM const char Ab4[8][8] =
{
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,1,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,1,1,
  0,0,0,0,0,0,1,1,
};
PROGMEM const char Ab5[8][8] =
{
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,1,0,0,
  0,0,0,0,0,0,1,1,
  0,0,0,0,0,0,1,1,
};
PROGMEM const char Ab6[8][8] =
{
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,1,1,1,
  0,0,0,0,0,1,1,1,
  0,0,0,0,0,1,1,0,
};
PROGMEM const char Ab7[8][8] =
{
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,1,1,
  0,0,0,0,0,1,1,1,
  0,0,0,0,1,1,0,0,
  0,0,0,0,1,1,0,0,
};
PROGMEM const char Ab8[8][8] =
{
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,1,0,
  0,0,0,0,0,1,1,1,
  0,0,0,1,1,1,0,0,
  0,0,0,0,1,0,0,0,
  0,0,0,0,1,0,0,0,
};
PROGMEM const char Ab9[8][8] =
{
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,1,0,0,
  0,0,0,0,1,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,1,0,0,0,0,
  0,0,0,1,0,0,0,0,
  0,0,0,0,0,0,0,0,
};
PROGMEM const char Ab10[8][8] =
{
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,1,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,1,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
};
PROGMEM const char Ab11[8][8] =
{
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,1,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
};
PROGMEM const char Ab12[8][8] =
{
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
};
// Bomb animation
const int Ab[13] PROGMEM = {Ab0,Ab1,Ab2,Ab3,Ab4,Ab5,Ab6,Ab7,Ab8,Ab9,Ab10,Ab11,Ab12};


//Alien
const char PROGMEM Ac0[8][8] =
{
  0,0,1,0,0,1,0,0,
  1,0,1,0,0,1,0,1,
  1,1,1,1,1,1,1,1,
  1,1,0,1,1,0,1,1,
  1,1,1,1,1,1,1,1,
  0,1,1,1,1,1,1,0,
  0,0,1,0,0,1,0,0,
  0,1,0,0,0,0,1,0,
};
const char PROGMEM Ac1[8][8] =
{
  0,0,1,0,0,1,0,0,
  0,0,1,0,0,1,0,0,
  1,1,1,1,1,1,1,1,
  1,1,0,1,1,0,1,1,
  1,1,1,1,1,1,1,1,
  1,1,1,1,1,1,1,1,
  1,0,1,0,0,1,0,1,
  0,0,0,1,1,0,0,0,
};
// Alien animation
const int Ac[2] PROGMEM = {Ac0,Ac1};


// ***********
void setup()  
{  
   // iterate over the pins:
  for(int i = 0;i<8;i++)  
  // initialize the output pins:
  {  
    pinMode(R[i],OUTPUT);  
    pinMode(C[i],OUTPUT);  
  }  
} // end of Setup
// **************  


// **********
void loop()  
{  


// ALIEN                                   // display Alien
    for(int a = 0 ; a < 7 ; a++) {         // loop animation
      for(int j = 0 ; j < 2 ; j++) {       // choice the icon number
          for(int i = 0 ; i < 10 ; i++) {  // loop for display duration, without this your display just blink one time,
            Display(Ac[j]);                // display  "Aa" char with "j" index
          }
      }
    }

/*

// FLYING SAUCER                          // display flying saucer
    for(int a = 0 ; a < 4 ; a++) {        // loop animation
      for(int j = 0 ; j < 7 ; j++) {      // choice the icon number
          for(int i = 0 ; i < 5 ; i++) {  // loop for display duration
            Display(Aa[j]);               // display  "Aa" char with "j" index
          }
      }
    }

// BOMB                                   // display bomb
    for(int a = 0 ; a < 2 ; a++) {        // loop animation
      for(int j = 0 ; j < 13 ; j++) {     // choice the icon number
          for(int i = 0 ; i < 6 ; i++) {  // loop for display duration
            Display(Ab[j]);               // display  "Aa" char with "j" index
          }
      }
    }
*/

} // end of loop
// *************

  
void Display(const char dat[8][8])    
{  
  for(int c = 0; c<8;c++)  
  {  
    digitalWrite(C[c],LOW);//use thr column 
    //loop
    for(int r = 0;r<8;r++)  
    {  
      digitalWrite(R[r],dat[r][c]);  
    }  
    delay(1);  
    Clear();  //Remove empty display light
  }  
}  


void Clear()                          //
{  
  for(int i = 0;i<8;i++)  
  {  
    digitalWrite(R[i],LOW);  
    digitalWrite(C[i],HIGH);  
  }  
}  
