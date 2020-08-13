/*
  Project Name: TM1638
  File: TM1638plus_BASIC_TEST.ino
  Description: A demo file library for TM1638 module(LED & KEY).
  Carries out series most basic test , "hello world"
  Author: Gavin Lyons.
  Created: feb 2020
  URL: https://github.com/gavinlyonsrepo/TM1638plus
*/

#include <TM1638plus.h>

// GPIO I/O pins on the Arduino connected to strobe, clock, data,
//pick on any I/O you want.
#define  STROBE_TM 4
#define  CLOCK_TM 6
#define  DIO_TM 7
bool high_freq = false; //default false, If using a high freq CPU > ~100 MHZ set to true. 
 
//Constructor object (GPIO STB , GPIO CLOCK , GPIO DIO, use high freq MCU)
TM1638plus tm(STROBE_TM, CLOCK_TM , DIO_TM, high_freq);

void setup()
{
  tm.displayBegin(); 
}

void loop()
{
  tm.displayText("helowrld");
  delay(5000);
}
