//////////////////////////////////////////////////////////////////////////
/*
Titel:				Home_Control
Author:				Melvin Strobl
Date Created:		19.12.16
Updated:			10.03.17

Description:

*/
//////////////////////////////////////////////////////////////////////////
/*
* CPU Frequency
*/
#ifndef F_CPU
#define F_CPU 20000000UL
#endif
/*
* Utilities
*/
#include <stdlib.h>
#include <stdbool.h>
#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/pgmspace.h>
#include <avr/sleep.h>
#include <util/delay.h>

#include "main.h"
#include "twislave.h"
/*
* Macros
*/
//Buffer defines

//Register defines
#define SYSINF		0
#define PERIPHCTRL	1
#define RELENC		2
#define ABSSW		3
#define RELNUMSW	4

#define GLOBAL_EN	0
#define BIT_SYNC	1
//Global variables
int debugMode = 0;
/*
* Main entry point
*/
int main(void)
{
	//initialization
	Init();

	//enter main program
	while(true)
	{
		if(getRxRegState(SYSINF, BIT_SYNC))
		{
			
		}
	}
}
/*
* Initialization
*/
void Init(void)
{
	cli();

	//Inputs
	DDRC &= ~(1<<USBEN);
	DDRD &= ~(1<<SW1) & ~(1<<SW2);
	//Outputs
	DDRC |= (1<<VAN_EN) | (1<<DAC_EN) | (1<<CLK_EN);

	init_twi_slave(TWI_SLV_ADDR); //TWI as slave with address slv_addr

	setOutput(PORTC, VAN_EN, false); //disable power supply for analog devices
	setOutput(PORTC, DAC_EN, false); //disable DAC
	setOutput(PORTC, CLK_EN, false); //disable Clock

	while (getRxRegState(SYSINF, GLOBAL_EN)){} //wait till master is up and ready

	sei();
}

/*
* IO-Control
*/
void setOutput(int port, int pin, bool state)
{
	if(state)
	{
		port |= (1 << pin);
	}
	else
	{
		port &= ~(1<<pin);
	}
}

/*
* Register Parsing
*/
bool getRxRegState(int data_addr, int bit)
{
	return twi_rxBuffer[data_addr] & (1<<bit);
}