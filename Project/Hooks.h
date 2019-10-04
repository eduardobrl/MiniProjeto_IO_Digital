#ifndef __HOOKS_H__
#define __HOOKS_H__



#include "CTRL_LEDS.h"

#define HOOK_TURN_LED1_ON()             SET_PIN(LED1_OUT);\
                                        CLR_PIN(LED2_OUT);\
                                        CLR_PIN(LED3_OUT); \
                                        SET_PIN(LED_PLACA);

#define HOOK_TURN_LED2_ON()             CLR_PIN(LED1_OUT);\
                                        SET_PIN(LED2_OUT);\
                                        CLR_PIN(LED3_OUT);\
                                        CLR_PIN(LED_PLACA);

#define HOOK_TURN_LED3_ON()             CLR_PIN(LED1_OUT);\
                                        CLR_PIN(LED2_OUT);\
                                        SET_PIN(LED3_OUT)

#define HOOK_TURN_ALL_LEDS_OFF()        CLR_PIN(LED1_OUT);\
                                        CLR_PIN(LED2_OUT);\
                                        CLR_PIN(LED3_OUT)

#endif