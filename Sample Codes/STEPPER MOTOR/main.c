#include <lpc17xx.h>   

void delay_ms(unsigned int ms)
{
   unsigned int i,j;

   for(i=0;i<ms;i++)
     for(j=0;j<20000;j++);

}

void Forword()
{
	 LPC_GPIO2->FIOSET = 0xfffffffA; 
	delay_ms(10);
	LPC_GPIO2->FIOSET = 0xfffffff6; 
		delay_ms(10);
	LPC_GPIO2->FIOSET = 0xfffffff5; 
		delay_ms(10);
	LPC_GPIO2->FIOSET = 0xfffffff9; 
		delay_ms(10);
	
}
void Reverse()
{
	 LPC_GPIO2->FIOSET = 0xfffffff9; 
	delay_ms(10);
	LPC_GPIO2->FIOSET = 0xfffffff5; 
		delay_ms(10);
	LPC_GPIO2->FIOSET = 0xfffffff6; 
		delay_ms(10);
	LPC_GPIO2->FIOSET = 0xfffffffA; 
		delay_ms(10);
	
}

/* start the main program */
int main() 
{
    SystemInit();                    //Clock and PLL configuration 
    LPC_PINCON->PINSEL4 = 0x000000;  //Configure the PORT2 Pins as GPIO;
    LPC_GPIO2->FIODIR = 0xffffffff;  //Configure the PORT2 pins as OUTPUT;
LPC_GPIO2->FIOSET = 0xfffffff0; 
  while(1)
    {
 Forword();
       

  
    }
}
