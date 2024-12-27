#include <avr/io.h>
#include <util/delay.h>

#define F_CPU 1000000UL 

int main(void) {

  DDRD = 0xFF;
  DDRA = 0xFF;

  while (1) {
    PORTA =0b01101101;
    PORTD = 0b11110001;
    _delay_ms(1);

    PORTA = 0b01011011;
    PORTD = 0b11110010;
    _delay_ms(1);

    PORTA = 0b00111111;
    PORTD = 0b11110100;
    _delay_ms(1);

    
    PORTA = 0b01011011;
    PORTD = 0b11111000;
    _delay_ms(1);
  }

  return 0;
}