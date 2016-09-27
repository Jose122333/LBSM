/* Microchip Technology Inc. and its subsidiaries.  You may use this software 
 * and any derivatives exclusively with Microchip products. 
 * 
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS".  NO WARRANTIES, WHETHER 
 * EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED 
 * WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A 
 * PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION 
 * WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION. 
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
 * INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
 * WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS 
 * BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE 
 * FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS 
 * IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF 
 * ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 * MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE 
 * TERMS. 
 */

/* 
 * File:   
 * Author: 
 * Comments:
 * Revision history: 
 */

#define LED0_TRIS TRISEbits.TRISE0
#define LED1_TRIS TRISEbits.TRISE1
#define LED2_TRIS TRISEbits.TRISE2
#define LED3_TRIS TRISEbits.TRISE3
#define LED4_TRIS TRISEbits.TRISE4
#define LED5_TRIS TRISEbits.TRISE5

#define LED0 LATEbits.LATE0
#define LED1 LATEbits.LATE1
#define LED2 LATEbits.LATE2
#define LED3 LATEbits.LATE3
#define LED4 LATEbits.LATE4
#define LED5 LATEbits.LATE5

#include <xc.h> // include processor files - each processor file is guarded.
#include <p30f4011.h>
#include <stdio.h>
#include <stdlib.h>

//Initializes all the LEDs
void initLEDs(void);
//Turns on a specific LED
void turnOnLED(int bitSelected);
//Turns off a specific LED
void turnOffLED(int bitSelected);

