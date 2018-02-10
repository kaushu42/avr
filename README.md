# AVR compiling and burning utilities

- Contains makefile for ATmega32 microcontroller.
- Contains a utility to burn a hex file to the ATmega32.



# Usage
- To compile a project, just type 'make' in the terminal.
  - But first, you need to modify the makefile. Open the makefile in a text editor.
    Change *'TARGET = led'* to your desired file. For example, to compile a file called
    bluetooth.cpp change it to *'TARGET = bluetooth'*.
  - If there are any other dependencies (eg. uart.cpp, adc.cpp etc.), edit *'CPPSRC = '*
     to your dependencies. For example, if bluetooth.cpp depends on uart.cpp, edit the makefile as
    *'CPPSRC = uart.cpp'*.
- This will now create hex and elf files. To burn the created file, type **./burn** in the terminal.
  - Again, you have to edit the file first. Open it in a text editor, change *led.hex* to your filename
    like *bluetooth.hex*.
  - Save the file and in the terminal type **chmod +x burn**.
  - Now you can run the utility as **./burn** .

