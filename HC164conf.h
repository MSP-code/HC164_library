/*! \file HC164conf.h \brief HC164 register driver configuration. */
//*****************************************************************************
//
// File Name	: 'HC164conf.h'
// Title		: HC164 8-BIT PARALLEL-OUT SERIAL SHIFT REGISTER driver library
// Author		: Signaller
// Created		: 14/12/2010	
// Revised		: 14/12/2010
// Version		: 1.0
// Target MCU	: Atmel AVR series
// Editor Tabs	: 0
//
//	Description : Type-defines required and used by AVRlib.  Most types are also
//						generally useful.
//
//	You must copy this file to your program directory and change defines
// 	of ports and pins
//*****************************************************************************
#ifndef HC164CONF_H
#define HC164CONF_H

//	Enabling default ports and pins 
// #define HC164_PORT_INTERFACE
#define HC164_PORT_INTERFACE


#ifdef HC164_PORT_INTERFACE

#define	hcclk_port  	PORTD 		//clk port
#define hcclk_pin  		0	 		//clk pin
#define	hcdata_port 	PORTD		//data port
#define	hcdata_pin   	1			//data pin
#define	HCReset_port 	PORTD 		//Reset port
#define	HCReset_pin  	2		//Reset pin

#endif
#endif
