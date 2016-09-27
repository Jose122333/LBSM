#include "keyboard.h"
#include "delay.h"

void initKeyboard (){
  ROW0_TRIS = INPUT;
  ROW1_TRIS = INPUT;
  ROW2_TRIS = INPUT;
  ROW3_TRIS = INPUT;
  COL0_TRIS = OUTPUT;
  COL1_TRIS = OUTPUT;
  COL2_TRIS = OUTPUT;
}

unsigned int TOTAL_COLUMNS = 3;
void setColumn(int col);
int readKey() {
  int col;
  int keySelected = 0;
    for (col = 0; col < TOTAL_COLUMNS; col++) {
        setColumn(col);
        Delay10us();
        if (ROW0 == LOW) {
            return keySelected;
        } else if (ROW1 == LOW){
            keySelected++;
            return keySelected;
        } else if (ROW2 == LOW){
          keySelected ++;
          return keySelected;
        } else if (ROW3 == LOW){
          keySelected++;
          return keySelected;
        }
    }
    return -1;
}


void setColumn (int col){
  switch (col) {
    case 0:
      COL0 = LOW;
      COL1 = HIGH;
      COL2 = HIGH;
      break;
    case 1:
      COL0 = HIGH;
      COL1 = LOW;
      COL2 = HIGH;
      break;
    case 2:
      COL0 = LOW;
      COL1 = HIGH;
      COL2 = HIGH;
      break;
  }
}
