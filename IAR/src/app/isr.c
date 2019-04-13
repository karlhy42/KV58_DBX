/*
* isr.c
*
*  Created on: Feb 18, 2018
*      Author: ZBT
*/

#include "include.h"
#include "isr.h"
void Error_handler(unsigned char* Log)  //错误处理，ASSERT和HARDFAULT都会掉入此函数
{
  DisableInterrupts;
  //紧急处理
  
  while(1);//终止程序运行
}

void HardFault_Handler(void)
{
  Error_handler("HardFault");
}

void PORTB_IRQHandler(void)
{
  u32 flag = PORTB_ISFR;
  PORTB_ISFR = ~0;
  if(flag & (1<<23))    //VSYNC
  {
    ov7725_get_img();
  }
    if(flag&(1<<16))
  {
     LED1_ON;
     sp+=1000;
     ang+=50;
    
    
  }
  if(flag&(1<<8))
  {
     LED2_ON;
     sp-=1000;
     ang-=50;
   
  }  
}

void DMA4_DMA20_IRQHandler(void)
{
  DMA_IRQ_CLEAN(CAMERA_DMA_CH);
  DMA_DIS(CAMERA_DMA_CH);
  Camera_start();
  Image_Flag = 1;
}
