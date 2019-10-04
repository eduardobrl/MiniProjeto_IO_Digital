#include "ior5f100le.h"
#include "ior5f100le_ext.h"
#include "intrinsics.h"
#include "CTRL_Button.h"
#include "CTRL_Leds.h"
int main( void )
{
  CTRL_Button_Init();

  while(1){
    
    CTRL_Button_Task();
    

  }
}
