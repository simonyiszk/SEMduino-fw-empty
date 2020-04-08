# SEMduino-temp-shield
## Install prerequisites
### Linux
```
sudo apt-get install gcc-avr binutils-avr avr-libc gdb-avr avrdude
sudo usermod -a -G dialout $USER
```
Logout and log back in after `usermod`.

### Windows
avrdude, avr-gcc, and make are required: \
https://sourceforge.net/projects/winavr \
https://sourceforge.net/projects/gnuwin32

Add make.exe to the PATH variable! E.g.: \
"c:\Program Files (x86)\GnuWin32\bin"

## Build/flash
Build: `make`

Flash: `make flash`

Clean: `make clean`
