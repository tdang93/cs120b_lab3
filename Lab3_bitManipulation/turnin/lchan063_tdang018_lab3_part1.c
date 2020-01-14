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
	DDRA = 0x00; PORTA = 0xFF;
	DDRB = 0x00; PORTB = 0xFF;
	DDRC = 0xFF; PORTC = 0x00;
    /* Insert your solution below */
    while (1) {
	PORTC = ( (PINA & 0x80) >> 7) + ( (PINA & 0x40) >> 6 ) + //inputs A
		( (PINA & 0x20) >> 5) + ( (PINA & 0x10) >> 4 ) +
		( (PINA & 0x08) >> 3) + ( (PINA & 0x04) >> 2 ) +
		( (PINA & 0x02) >> 1) + ( (PINA & 0x01) ) +
		( (PINB & 0x80) >> 7) + ( (PINB & 0x40) >> 6 ) + //inputs B
		( (PINB & 0x20) >> 5) + ( (PINB & 0x10) >> 4 ) +
		( (PINB & 0x08) >> 3) + ( (PINB & 0x04) >> 2 ) +
		( (PINB & 0x02) >> 1) + ( (PINB & 0x01) );
    }
    return 1;
}
