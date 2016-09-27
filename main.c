#include <stdio.h>
#include <stdlib.h>
#include <p30f4011.h>

#define ON 1
#define OFF 0

#define INPUT 1
#define OUTPUT 0

#define LED0_TRIS TRISEbits.TRISE0

#define LED0 LATEbits.LATE0



void wait(unsigned int cycles);

int main(void) {

    unsigned int i;

    LED0_TRIS = OUTPUT;

    LED0 = OFF;

    //We light up the first led
    while(1){
        LED0 = OFF;
        for(i = 0;i<1234;i++) wait(1000);
        LED0 = ON;
        for(i = 0;i<1234;i++) wait(1000);
    }
    return 0;
}

void wait(unsigned int cycles){

    unsigned int i;
            for(i = 0;i<cycles;i++);
}
