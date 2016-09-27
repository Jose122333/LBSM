/*
 * File:   LEDs.c
 * Author: Moni
 *
 * Created on September 25, 2016, 5:40 PM
 */


#include "xc.h"
#include "LEDs.h"
#include "Generic.h"

void initLEDs(){
    //All LEDs have to be configured as outputs
    LED0_TRIS = OUTPUT;
    LED1_TRIS = OUTPUT;
    LED2_TRIS = OUTPUT;
    LED3_TRIS = OUTPUT;
    LED4_TRIS = OUTPUT;
    LED5_TRIS = OUTPUT;   
}

void turnOnLED(int bitSelected){ 
    //Depending on the integer introduced, we decide which LED to turn ON
    switch(bitSelected){
        case 0: LED0 = ON; break;
        case 1: LED1 = ON; break;
        case 2: LED2 = ON; break;
        case 3: LED3 = ON; break;
        case 4: LED4 = ON; break;
        case 5: LED5 = ON; break;
    }
}

void turnOffLED(int bitSelected){
    //Depending on the integer introduced, we decide which LED to turn OFF
    switch(bitSelected){
        case 0: LED0 = OFF; break;
        case 1: LED1 = OFF; break;
        case 2: LED2 = OFF; break;
        case 3: LED3 = OFF; break;
        case 4: LED4 = OFF; break;
        case 5: LED5 = OFF; break;
    }
}