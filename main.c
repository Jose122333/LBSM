
#include <stdio.h>
#include <stdlib.h>
#include "LEDs.h"
#include "generic.h"

void wait(unsigned int cycles);

int main(void) {

    unsigned int i;

    initLEDs();

    while(1){
        //We light up the first led
        turnOffLED(0);
        //LED0 = OFF;
        for(i = 0;i<1234;i++) wait(1000);
        turnOnLED(0);
        for(i = 0;i<1234;i++) wait(1000);
        //We light up the second led
        turnOffLED(1);
        for(i = 0;i<1234;i++) wait(1000);
        turnOnLED(1);
        for(i = 0;i<1234;i++) wait(1000);
        //We light up the third led
        turnOffLED(2);
        for(i = 0;i<1234;i++) wait(1000);
        turnOnLED(2);
        for(i = 0;i<1234;i++) wait(1000);
        //We light up the forth led
        turnOffLED(3);
        for(i = 0;i<1234;i++) wait(1000);
        turnOnLED(3);
        for(i = 0;i<1234;i++) wait(1000);
        //We light up the fifth led
        turnOffLED(4);
        for(i = 0;i<1234;i++) wait(1000);
        turnOnLED(4);
        for(i = 0;i<1234;i++) wait(1000);
        //We light up the sixth led
        turnOffLED(5);
        for(i = 0;i<1234;i++) wait(1000);
        turnOnLED(5);
        for(i = 0;i<1234;i++) wait(1000);

    }



    return 0;
}

void wait(unsigned int cycles){
    unsigned int i;
    for(i = 0;i<cycles;i++);
}
