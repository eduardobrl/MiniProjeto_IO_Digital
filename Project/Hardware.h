#ifndef __HARDWARE_H__
#define __HARDWARE_H__

#include "Types.h"
#include "ior5f100le.h"
#include "ior5f100le_ext.h"
#include "intrinsics.h"

//PINS DEFINITIONS


//LEDS
#define LED1_OUT                P7_bit.no0
#define LED1_PU                 PU7_bit.no0
#define LED1_PM                 PM7_bit.no0


#define LED2_OUT                P7_bit.no1
#define LED2_PU                 PU7_bit.no1
#define LED2_PM                 PM7_bit.no1

#define LED3_OUT                P7_bit.no2
#define LED3_PU                 PU7_bit.no2
#define LED3_PM                 PM7_bit.no2

#define LED_PLACA               P7_bit.no7
#define LED_PLACA_PM            P7_bit.no7

//BOTOES


#define SW1_IN                  P5_bit.no4
#define SW1_PU                  PU5_bit.no4
#define SW1_PM                  PM5_bit.no4    

#define SW2_IN                  P5_bit.no3
#define SW2_PU                  PU5_bit.no3
#define SW2_PM                  PU5_bit.no3


#define SET_PIN(pin)            pin  =       0
#define CLR_PIN(pin)            pin  =       1
#define TOGGLE_PIN(pin)         pin  ^=      1

#define READ_PIN(pin)           pin
#endif