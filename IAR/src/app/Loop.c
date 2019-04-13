#include "include.h"
#include "String.h"
#include "fsl_debug_console.h"
u8 Image_Flag=0;
int sp=30000,spl=0,spr=0,ang=4000;

void Setup(void)
{
  LCD_SetPos(0,319,0,239);
   LED1_ON;
   LED2_OFF;
}

void Loop(void)
{
  u8 old_Memory_use_Flag = 0;
  if(Image_Flag==1)
  {
    old_Memory_use_Flag = Memory_use_Flag;
    Image_Flag=0;
    for (int j = 0; j < 240; j++)
    for (int i = 0; i < 320; i++)
      write_word(IMG_PIXEL(Image_fire, i, j) ? COLOR_BLACK : COLOR_WHITE);

  
    if(old_Memory_use_Flag != Memory_use_Flag)
    {
      if(Memory_use_Flag==1)//改变缓冲区
      {
        Image_fire=&Image_fire_Memory2[0];
      }
      else if(Memory_use_Flag==2)
      {
        Image_fire=&Image_fire_Memory1[0];
      }
    }
    else                        //说明程序执行较快，此时下一场的场中断还未到
    {
      if(Memory_use_Flag==1)//改变缓冲区
      {
        Image_fire=&Image_fire_Memory1[0];
      }
      else if(Memory_use_Flag==2)
      {
        Image_fire=&Image_fire_Memory2[0];
      }
    }
  }

        
}