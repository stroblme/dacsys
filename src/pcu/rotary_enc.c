/*
 * rotary_enc.c
 *
 * Created: 29-Apr-18 23:14:51
 *  Author: Melvin
 */ 

 /*
 * CPU Frequency
 */
 #ifndef F_CPU
 #define F_CPU 20000000UL
 #endif
 /*
 * Utilities
*/
 #include <avr/interrupt.h> 					

 /*
 * Macros
 */


 /*
 * Routines
 */
 ISR(INT0_vect)
 {


 }

 ISR(INT1_vect)
 {


 }

void init_rotary_enc(int ddr, int pin)
{
	ddr &= ~(1<<pin) & ~(1<<pin);

}
