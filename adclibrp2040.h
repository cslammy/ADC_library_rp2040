#ifndef ADCLIBRP2040_H_
#define ADCLIBRP2040_H_


#include "stdio.h"
#include "stdint.h"
#include "pico/stdlib.h"
#include "hardware/gpio.h"
#include "hardware/adc.h"

void rp_adc_init(void);

uint16_t adc_read_chan(uint8_t mychan);

#endif /* ADCLIBRP2040_H_ */