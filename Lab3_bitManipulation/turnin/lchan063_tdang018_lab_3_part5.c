/*	Author: lchan063
 *  Partner(s) Name: Tandy Dang (tdang018)
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
	DDRB = 0xFE; PORTB = 0x00; //everything but PB1 is output
	DDRD = 0x00; PORTD = 0xFF;
	unsigned char weight = 0x00;
	
    /* Insert your solution below */
	while (1) {
		weight = (PIND << 1);
		weight = weight | (PINB & 0x01);

		if (PIND & 0x80) {
			PORTB = PORTB | 0x02; //PB1 = 1
		} else if (weight >= 0x46) {
			PORTB = PORTB | 0x02;
		} else if ((weight > 0x05) && (weight < 0x70)) {
			PORTB = (PORTB | 0x04) & 0x05;
		} else {
			PORTB = PORTB & 0x01;
		}
	}	
	return 1;
}
