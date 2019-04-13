#include "include.h"
#include <stdio.h>
void System_init(void)
{
  DisableInterrupts;
  SYSMPU->CESR &= ~SYSMPU_CESR_VLD_MASK;
  
  GPIO_Init(LED2_PORT,GPO,1);           //用户LED灯
  GPIO_Init(LED1_PORT,GPO,0);
  
 /* GPIO_Init(BUT1_PORT,GPI,0);
  GPIO_Init(BUT2_PORT,GPI,0);
  GPIO_Init(BUT3_PORT,GPI,0);*/
  
  exti_init(BUT1_PORT,RISING);       //外部中断
  exti_init(BUT2_PORT,RISING);
 
  
  

  
  
  GPIO_Init(SW4_PORT,GPI,0);
  GPIO_Init(SW2_PORT,GPI,0);
  GPIO_Init(SW3_PORT,GPI,0);
  GPIO_Init(SW5_PORT,GPI,0);


  
  FTM_PWM_init(SERVO_FTM, 50, ang);
  
  FTM_PWM_init(MOTOR_R_FTM,10000,sp);        //左右电机
  FTM_PWM_init(MOTOR_L_FTM,10000,sp);
  
  GPIO_Init(MOTOR_L_DIR_PORT,GPO,0);            //控制正反转
  GPIO_Init(MOTOR_R_DIR_PORT,GPO,0);
  
  Ov7725_Init();
  NVIC_SetPriority(DMA4_DMA20_IRQn,0);
  NVIC_SetPriority(VSYNC_IRQ,1);
  LCD_PORT_init();
  LCD_init(1);
  EnableInterrupts;
  Camera_start();
}
