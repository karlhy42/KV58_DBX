#include "include.h"
#include <stdio.h>
void System_init(void)
{
  DisableInterrupts;
  SYSMPU->CESR &= ~SYSMPU_CESR_VLD_MASK;
  
  EnableInterrupts;  
}
