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
	DDRC = 0x00; PORTC = 0x00;
    /* Insert your solution below */
	while (1) {
		if ( (PINA & 0x01) || (PINA & 0x02)) {PINC | 0x60;}
		if ( (PINA & 0x03) || (PINA & 0x04)) {PINC | 0x70;}
		if ( (PINA & 0x05) || (PINA & 0x06)) {PINC | 0x38;}
		if ( (PINA & 0x07) || (PINA & 0x08) || (PINA & 0x09)) {PINC | 0x3C;}
		if ( (PINA & 0x0A) || (PINA & 0x0B) || (PINA & 0x0C)) {PINC | 0x3E;}
		if ( (PINA & 0x0D) || (PINA & 0x0E) || (PINA & 0x0F)) {PINC | 0x3F;}
	}
	return 1;
}
