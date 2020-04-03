#ifndef F_CPU
#define F_CPU 16000000UL // or whatever may be your frequency
#endif

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    PORTB = 0x20;
    DDRB = 0x20;
    while(1)
    {
        PORTB ^= 0x20;
        _delay_ms(1000);
    }
}
