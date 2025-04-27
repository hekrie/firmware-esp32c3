#include <Arduino.h>
#include <pins.h>
#include <config.h>

void pins_init(void)
{
    //#if !WAVESHARE_BOARD
    pinMode(PIN_INTERRUPT, INPUT);
    pinMode(PIN_INTERRUPT, INPUT_PULLUP);

    pinMode(PIN_BATTERY, INPUT);

    pinMode(8, OUTPUT); // turn off led on 8 (inverted)
    digitalWrite(8, LOW);
    
    //pinMode(PIN_RESET, INPUT_PULLUP);
    //#endif
}

void pins_set_clear_interrupt(void (*f)(void))
{
    //#if !WAVESHARE_BOARD
    //attachInterrupt(PIN_RESET, f, RISING);
    //#endif
}