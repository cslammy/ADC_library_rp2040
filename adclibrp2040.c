
 
#include "adclibrp2040.h"

void rp_adc_init(void)
{
    adc_init();
    //anything else here?
}

uint16_t adc_read_chan(uint8_t mychan)
{


if (mychan == 1)
	{
    adc_gpio_init(27); //gpio 27
   
	}
if (mychan == 2)
	{
    adc_gpio_init(28); //gpio 28
   
	}

else
		{
            adc_gpio_init(26); //gpio 26
          
		}

        
uint16_t value = adc_read();	

return value;
}

uint16_t adc_read_temp(void)
{
  adc_gpio_init(29); //gpio 29--fake pin--temp
  uint16_t value = adc_read();
  return value;

}