# AVR HEX FILE CREATOR
# Creating hex file for atmega32 microcontrollers

A simple utility to create hex files for your avr projects.

Does the following:

avr-gcc -g -Os -mmcu=atmega32 -c filename.cpp

avr-gcc -g -mmcu=atmega32 -o filename.elf filename.o

avr-objcopy -j .text -j .data -O ihex filename.elf filename.hex

Finally, the output is filename.hex

# Using the utility
To use it open up a terminal, and navigate to the directory with your source file.
Then type:
  * ./run filename
