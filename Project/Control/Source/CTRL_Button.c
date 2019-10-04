#ifndef __CTRL_BUTTON_C__
#define __CTRL_BUTTON_C__

#include "CTRL_Button.h"
#include "Hardware.h"
#include "Hooks.h"
#include "ior5f100le.h"
#include "ior5f100le_ext.h"
#include "intrinsics.h"


typedef enum {
  SW1_SW2,
  SW2,
  SW1,
  NONE
} BUTTON_STATE_MACHINE;


void CTRL_Button_Init(){
  PM5_bit.no4 = 1; // port P52 como entrada
  PU5_bit.no3 = 1; // port P53 como entrada com pull-up interno
  PM5_bit.no3 = 1; // port P52 como entrada
 
  PM7_bit.no0 = 0; // port P70 como saída
  PM7_bit.no1 = 0; // port P71 como saída
  PM7_bit.no2 = 0; // port P72 como saída
  PM7_bit.no7 = 0; // porta P77 como saída
  
  P7_bit.no0 = 0; // apaga LED vermelho
  P7_bit.no1 = 0; // apaga LED amarelo
  P7_bit.no2 = 0; // apaga LED verde
  LED_PLACA = 0; // porta P77 como saída

}

BUTTON_STATE_MACHINE Button_State;
int ch1;
int ch2;

void CTRL_Button_Task(){
  
 ch1 = READ_PIN(SW1_IN);
 ch2 = READ_PIN(SW2_IN);
  
  
  Button_State = (BUTTON_STATE_MACHINE) (ch2 << 1 | ch1 << 0);
  
  switch(Button_State){
    
    case(SW1_SW2):
      HOOK_TURN_LED3_ON();
      break;
        
    case(SW2):
      HOOK_TURN_LED2_ON();
      break;
    
    case(SW1):
      HOOK_TURN_LED1_ON();
      break;
    
    default:
      HOOK_TURN_ALL_LEDS_OFF();
      break;
  
  }
  
}

#endif