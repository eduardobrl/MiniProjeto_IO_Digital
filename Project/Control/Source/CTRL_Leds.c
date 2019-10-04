#ifndef __CTRL_LEDS_C__
#define __CTRL_LEDS_C__

#include "CTRL_Leds.h"


typedef enum {
  LEDS_APAGADOS,
  LED1_ACESO,
  LED2_ACESO,
  LED3_ACESO
    
} LEDS_STATE_MACHINE;



LEDS_STATE_MACHINE Leds_States = LEDS_APAGADOS;




void CTRL_Leds_Init(){
  
}

void CTRL_Leds_Task(){
  
  switch(Leds_States){
    
    case(LEDS_APAGADOS):

      break;
      
    case (LED1_ACESO):
      break;
    
    case (LED2_ACESO):
      break;
    
    case(LED3_ACESO):
      break;
    
    
  }
  
}

#endif