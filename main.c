#include "pico/stdlib.h"
#include <stdint.h>
#include <stdio.h>
#include "adclibrp2040.h"

uint8_t main() {

uint16_t x = 0;

stdio_init_all();
rp_adc_init();


//loop dukie here
    while (2 > 0) {

    x = adc_read_chan(0);
    printf("value: %d \n",x);
    sleep_ms(100);
     }
return 0;
}