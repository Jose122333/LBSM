
#include <p30f4011.h>
/*
 * File:
 * Author:
 * Comments:
 * Revision history:
 */

#define ON 1
#define OFF 0

#define LOW 0
#define HIGH 1

#define INPUT 1
#define OUTPUT 0


/*
TRIS = INPUT O OUTPUT
PORT = LECTURA
LAT = ESCRUTIRA
*/
#define COL0      LATBbits.LATB0
#define COL0_TRIS TRISBbits.TRISB0
#define COL1      LATBbits.LATB1
#define COL1_TRIS TRISBbits.TRISB1
#define COL2      LATBbits.LATB2
#define COL2_TRIS TRISBbits.TRISB2

#define ROW0      PORTDbits.RD0
#define ROW0_TRIS TRISDbits.TRISD0
#define ROW1      PORTDbits.RD1
#define ROW1_TRIS TRISDbits.TRISD1
#define ROW2      PORTDbits.RD2
#define ROW2_TRIS TRISDbits.TRISD2
#define ROW3      PORTDbits.RD3
#define ROW3_TRIS TRISDbits.TRISD3

void initKeyboard(void);
int readKey(void);
