
#include <LPC17xx.h>
#include "keypad.h"
#include "lcd.h"



int main() 
{
    uint8_t key;
    SystemInit();

    /*        RS   RW   EN   D0   D1   D2   D3   D4    D5    D6    D7      P_NC(Not connected)*/
 LCD_SetUp(P0_4,P0_5,P0_6,P1_20,P1_21,P1_22,P1_23,P1_24,P1_25,P1_26,P1_27);
    LCD_Init(2,16);

  KEYPAD_Init(P2_0,P2_1,P2_2,P2_3,P2_4,P2_5,P2_6,P2_7);  // Keypad is connected to P2_0 - P2_7

    LCD_Printf("RDL Technologies:");
    while (1) 
    {
        key = KEYPAD_GetKey();     // Read the Ascii value of Key
        LCD_GoToLine(1);
        LCD_DisplayChar(key);      // Display the Key pressed on LCD        
    }    
}
