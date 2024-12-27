#include <avr/io.h>
#include <util/delay.h>

#define F_CPU 1000000UL

int main(void) {
  DDRB |= (1 << DDB0);

  while (1) {

    PORTB |= (1 << PORTB0);
    _delay_ms(1000);


    PORTB &= ~(1 << PORTB0);
    _delay_ms(1000);
  }

  return 0;
}