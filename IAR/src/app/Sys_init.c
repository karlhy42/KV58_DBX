#include "include.h"
#include <stdio.h>
void System_init(void)
{
  DisableInterrupts;
  SYSMPU->CESR &= ~SYSMPU_CESR_VLD_MASK;
  
  GPIO_Init(LED2_PORT,GPO,1);           //ÓÃ»§LEDµÆ
  GPIO_Init(LED1_PORT,GPO,1);
  GPIO_Init(LED3_PORT,GPO,0);
  
  EnableInterrupts;  
}
