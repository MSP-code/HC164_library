/*! \file HC164conf.h \brief HC164 register driver configuration. */
//*****************************************************************************
//
// File Name	: 'HC164.c'
// Title		: HC164 8-BIT PARALLEL-OUT SERIAL SHIFT REGISTER driver library
// Author		: Signaller
// Created		: 14/12/2010	
// Revised		: 14/12/2010
// Version		: 1.0
// Target MCU	: Atmel AVR series
// Editor Tabs	: 4
//
//	Description : Type-defines required and used by AVRlib.  Most types are also
//						generally useful.
//
//	This library drive by hc164 (or it's analog) shift register using 2 pin 
//	of MCU.Also register may be cleaned by using "clr" input of the register.
//  
//*****************************************************************************

#include <avr/io.h>
#include "global.h"

#include "HC164.h"

/*************************************************************/
/********************** LOCAL FUNCTIONS **********************/
/*************************************************************/

void hc164_outc(u08 c)
{	u08 i;
	for(i=0;i<8;i++)
	{	sbi(hcclk_port,  hcclk_pin);			
		sbi(hcdata_port, hcdata_pin);			
		cbi(hcclk_port,  hcclk_pin)	;	
		if (!(c&0x80))
		cbi(hcdata_port, hcdata_pin);							
		c<<=1;						
	}
	sbi(hcclk_port,  hcclk_pin);
	sbi(hcdata_port, hcdata_pin);
}
/*inline void hc164r(void)
{
cbi(HCReset_port,HCReset_pin);
sbi(HCReset_port,HCReset_pin); 
}
*/
