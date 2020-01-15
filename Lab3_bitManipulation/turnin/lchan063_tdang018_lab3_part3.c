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
	DDRC = 0xFF; PORTC = 0x00;
	unsigned char upperNibble = 0x00;
	unsigned char lowerNibble = 0x00;
    /* Insert your solution below */
    while (1) {
	PORTC = 0x00;
	lowerNibble = PINA & 0x0F;
	upperNibble = PINA & 0xF0;
	
	if ( (lowerNibble == 0x01) || (lowerNibble == 0x02)) {PORTC = 0x60;}
	if ( (lowerNibble == 0x03) || (lowerNibble == 0x04)) {PORTC = 0x70;}
	if ( (lowerNibble == 0x05) || (lowerNibble == 0x06)) {PORTC = 0x38;}
	if ( (lowerNibble == 0x07) || (lowerNibble == 0x08) || (lowerNibble == 0x09)) {PORTC = 0x3C;}
	if ( (lowerNibble == 0x0A) || (lowerNibble == 0x0B) || (lowerNibble == 0x0C)) {PORTC = 0x3E;}
	if ( (lowerNibble == 0x0D) || (lowerNibble == 0x0E) || (lowerNibble == 0x0F)) {PORTC = 0x3F;}
	
	if(upperNibble == 0x30) { PORTC = PORTC | 0x80; }
	
	//(PORTC | 0x00) != (PORTC = PORTC | 0x00)

    }
    return 1;
}
