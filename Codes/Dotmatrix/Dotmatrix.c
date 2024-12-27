#include <avr/io.h>
#include <util/delay.h>

#define F_CPU 1000000UL

int main(void) {
  DDRB = 0xFF;
  DDRD = 0xFF;

  while (1) {
    PORTB = 0b00000001;
    PORTD = 0b11111111;
    _delay_ms(1);

    PORTB = 0b00000010;
    PORTD = 0b11100111;
    _delay_ms(1);

    PORTB = 0b00000100;
    PORTD = 0b11011011;
    _delay_ms(1);

    PORTB = 0b00001000;
    PORTD = 0b11000011;
    _delay_ms(1);

    PORTB = 0b00010000;
    PORTD = 0b11011011;
    _delay_ms(1);

    PORTB = 0b00100000;
    PORTD = 0b11011011;
    _delay_ms(1);

    PORTB = 0b01000000;
    PORTD = 0b11111111;
    _delay_ms(1);

    PORTB = 0b10000000;
    PORTD = 0b11111111;
    _delay_ms(1);
  }

  return 0;
}