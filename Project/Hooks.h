#ifndef __HOOKS_H__
#define __HOOKS_H__


/*****************************************************************************
                          DRV_LEDS
*****************************************************************************/

#include "DRV_LEDS.h"

#define HOOK_TURN_LED1_ON()             Liga_Led(LED1)

#define HOOK_TURN_LED2_ON()             Liga_Led(LED1)

#define HOOK_TURN_LED3_ON()             Liga_Led(LED3)

#define HOOK_TURN_ALL_LEDS_OFF()        Desliga_Led(LED1); \
                                        Desliga_Led(LED2); \
                                        Desliga_Led(LED3) 

/*****************************************************************************
                          
*****************************************************************************/
#endif