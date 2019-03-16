/*
 * define.h
 *
 *  Created on: Feb 14, 2018
 *      Author: ZBT
 */

#ifndef DEFINE_H_
#define DEFINE_H_

//Parameter-Do not remove
#define Camera_CNST 85
#define NRF_LINKADDRESS {0x74, 0x18, 0x52, 0x96, 0x30}

//SD-Do not remove
#define BOARD_SDSPI_SPI_BASE SPI0_BASE
#define BOARD_SDSPI_SPI_PCS_NUMBER 0U

//CAM-Do not remove
#define PCLK_PORT PORTC,9
#define VSYNC_PORT PORTB,23
#define VSYNC_IRQ PORTB_IRQn
#define VSYNC_ISFR PORTB_ISFR

//LCD-Do not remove
#define LCD_RST_PORT PORTE,27
#define LCD_RS_PORT PORTE,0
#define LCD_SDA_PORT PORTE,1
#define LCD_SCL_PORT PORTE,2

#define LCD_SPIn kSPI1
#define LCD_OTH_PCSn SPIn_PCS0
#define LCD_DC_PCSn SPIn_PCS1

#define rs PTE0_OUT
#define sda PTE1_OUT
#define scl PTE2_OUT
#define reset PTE27_OUT

//nRF-Do not remove
#define NRF_SPIn kSPI0
#define NRF_PCSn SPIn_PCS0
#define NRF_CE_PORT PORTA,25
#define NRF_IRQ_PORT PORTA,24
#define NRF_CE PTA25_OUT
#define NRF_IRQ PTA24_OUT


//BUTTON
#define BUT1_PORT       PORTB,16
#define BUT1            PTB16_IN
#define BUT2_PORT       PORTB,8
#define BUT2            PTB8_IN
#define BUT3_PORT       PORTB,6
#define BUT3            PTB6_IN


//BEEP
#define BEEP_PORT       PORTD,9
#define BEEP            PTD9_OUT

//LED
#define LED1_PORT PORTA,26
#define LED2_PORT PORTA,27
#define LED3_PORT PORTA,19
#define LED1 PTA26_OUT
#define LED2 PTA27_OUT
#define LED3 PTA19_OUT

#define LED1_ON        PTA26_OUT = 0
#define LED2_ON        PTA27_OUT = 0
#define LED3_ON        PTA19_OUT = 0
#define LED1_OFF       PTA26_OUT = 1
#define LED2_OFF       PTA27_OUT = 1
#define LED3_OFF       PTA19_OUT = 1

   
//MOTOR
#define MOTOR_L_FTM     FTM0,CH2
#define MOTOR_R_FTM     FTM0,CH4
#define MOTOR_L_DIR_PORT        PORTA,8    
#define MOTOR_R_DIR_PORT        PORTA,9
#define MOROT_L_DIR     PTA8_OUT
#define MOROT_R_DIR     PTA9_OUT

   
//SW
#define SW1_PORT PORTA,18
#define SW2_PORT PORTA,17
#define SW3_PORT PORTA,15
#define SW4_PORT PORTA,12
#define SW5_PORT PORTA,11
#define SW6_PORT PORTA,10
#define SW7_PORT PORTA,6
#define SW8_PORT PORTA,4

#define SW1 PTA18_IN
#define SW2 PTA17_IN
#define SW3 PTA15_IN
#define SW4 PTA12_IN
#define SW5 PTA11_IN
#define SW6 PTA10_IN
#define SW7 PTA6_IN
#define SW8 PTA4_IN


#endif /* DEFINE_H_ */
