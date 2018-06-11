//////////////////////////////////////////////////////////////////////////
/*
Titel:				Home_Control
Author:				Melvin Strobl
Date Created:		19.12.16

Description:

--RX BUFFER BIT DESCRIPTION--
Note: All rxBuffer changes result in an identical change in txBuffer
rxBuffer[0]		reserved for PWR Control and peripheral signals
	0x01=>(0)Power all off (after 1 min)			(1)Power all on
	0x02=>(0)Keep awake								(1)Go to sleep and wake up every 1 min
	0x04=>(0)All data is syncronized (RX=TX)		(1)New data in RX buffer
	0x08=>(0)Use functional registers				(1)Use port mapping registers
	0x10=>(0)All data is syncronized (OWI disable)	(1)Sync Streaming register (OWI enable)
rxBuffer[1-3]	Port mapping register:	maps all ports (PBx,PCx,PDx) in decimal values (8Bit)
rxBuffer[4-6]	Functional register:	RGB LED hue value from 0-255
rxBuffer[7]		Functional register:	0x00-0xFF: 8 possible output states for Relays
rxBuffer[8]		Functional register:	0x00-0xFF: Bit 0-6: Adress (64 remotes); Bit 7: On/Off
rxBuffer[9		Streaming register:		0x00-0xFF: 8Bit data from OWI interface or sensors
	0x01=>(0)Charge Cntr is retracted				(1)-"- is extended
--END RX BUFFER BIT DESCRIPTION--

In further releases:


*/
//////////////////////////////////////////////////////////////////////////
/*
* Utilities
*/
#ifndef _MAIN_H
#define _MAIN_H
/*
* Macros, user configuration
*/
//PORT mapping
#define	MOSI	PB3
#define MISO	PB4
#define SCK		PB5

#define USBEN	PC0
#define DAC_EN	PC1
#define CLK_EN	PC2
#define VAN_EN	PC3

#define SDA		PC4
#define SCL		PC5

#define SW1		PD0
#define SW2		PD1
#define CHA		PD2
#define CHB		PD3
/*
* Global variables
*/

/*
* Function declaration
*/
void Init(void);
void setOutput(int port, int pin, bool state);
bool getRxRegState(int map, int bit);

#endif //#ifdef _MAIN_H