#ifndef _KEYPAD_H
#define _KEYPAD_H

#include "gpio.h"
#include "stdutils.h"


/***************************************************************************************************
                                 Hex-Keypad Row/Col Configuration
 ***************************************************************************************************/
#define C_MaxRows_U8 (4)   
#define C_MaxCols_U8 (4)                 
#define C_DebounceTimeInMicroSecond_U16 (10)
#define C_DefaultKey_U8  ('x')
/**************************************************************************************************/




/***************************************************************************************************
                             Function Prototypes
 ***************************************************************************************************/
uint8_t KEYPAD_GetKey(void);
void KEYPAD_Init(
        gpioPins_et row_0, 
        gpioPins_et row_1, 
        gpioPins_et row_2,
        gpioPins_et row_3, 
        gpioPins_et col_0,
        gpioPins_et col_1, 
        gpioPins_et col_2,
        gpioPins_et col_3 );
/**************************************************************************************************/

#endif
