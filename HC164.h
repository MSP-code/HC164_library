/*! \file HC164.h \brief HC164 register driver configuration. */
//*****************************************************************************
//
// File Name	: 'HC164.h'
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
//	This library drive by hc164 (or it's analog) shift register using 2 pin 
//	of MCU.Also register may be cleaned by using "clr" input of the register.
//  
//  Warning! You must define ports and pins for using this library 
//	in HC164conf.h.
//*****************************************************************************
#ifndef HC164_H
#define HC164_H

#include "global.h"
// include project-dependent configurations
#include "HC164conf.h"

// ****** Low-level functions ******

// This function writes a data byte to register
void hc164_outc(u08 c);

// This function define all outputs of register to low level
void HC164R(void);

#endif
