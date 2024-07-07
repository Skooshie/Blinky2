#include "mbed.h"


// Blinking rate in milliseconds for LED1 2Sec LED2 5Sec
#define BLINKING_RATE1     2000ms
#define BLINKING_RATE2     5000ms

int main()
{
    // Initialise the digital Ouputs for LED1 and LED 2
    DigitalOut led1(LED1);
    DigitalOut led2(LED2);
    

     while (true) {
        led1 = !led1;ThisThread::sleep_for(BLINKING_RATE1);
        led2 = !led2;ThisThread::sleep_for(BLINKING_RATE2);
        
        
        

    }
}
