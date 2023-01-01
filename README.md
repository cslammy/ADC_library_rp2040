# ADC_library_rp2040
Embedded C library for RP2040 (RPi Pico) built in ADCs

RP2040 MCU has 3 12 bit ADC's built in along with a fourth temperature sensor. 

The functions are my own abstractions to ADC methods found in the PICO C SDK. The library allows integration of the onboard ADC's into RP2040 based C projects with minimal additional code. I wrote this library to make sure I understand the basics of the tools found in the SDK. You may or may not want to include it in your own code; in some use cases it may make more sense to just use the SDK functions directly.

the minicom pico file in is a bash script that uses minicom to allow printf()'s to be displayed on an Ubuntu 20.04 LTS system. Not sure it will work with other linux builds--maybe w some fanagling. 


