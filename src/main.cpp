#include "mbed.h"
#include "USBSerial.h"

DigitalOut led(PC_13);
USBSerial serial;

int main()
{
    while(1) {
        serial.printf("Hello!\r\n");
        ThisThread::sleep_for(500);
        led = 0;
        ThisThread::sleep_for(500);
        led = 1;
    }
}