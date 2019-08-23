#include "stm32f10x.h"
#include "delay.h"
#include "sys.h"
#include "key.h"
#include "led.h"

int main(void)
{
	vu8 key=0;
	delay_init();
	LED_Init();
	KEY_Init();
	
	while(1)
	{
		key=KEY_Scan(0);
		
		if(key==1)
		{
			GPIO_SetBits(GPIOD,GPIO_Pin_2);
			GPIO_SetBits(GPIOA,GPIO_Pin_8);
			
			delay_ms(1000);
			
			GPIO_ResetBits(GPIOD,GPIO_Pin_2);
			GPIO_ResetBits(GPIOA,GPIO_Pin_8);
			
			delay_ms(1000);//×ßÂíµÆ
		}
		
		else if(key==2)
		{
			int i, b;
      b = 20000;

      for (i = 0; i < b; i ++)
			 {
         GPIO_ResetBits(GPIOA, GPIO_Pin_15);  
         delay_ms(b-i);
         GPIO_SetBits(GPIOA, GPIO_Pin_15);
         delay_ms(i);
       }
      for (i = 0; i < b; i++) 
	     {
         GPIO_ResetBits(GPIOF, GPIO_Pin_6);  
         delay_ms(i);
         GPIO_SetBits(GPIOF, GPIO_Pin_6);
         delay_ms(b-i);
       }

      delay_ms(100);

     }	//ºôÎüµÆ
		
		else if(key==3)
		{
			GPIO_SetBits(GPIOD,GPIO_Pin_2);
			GPIO_SetBits(GPIOA,GPIO_Pin_8);
			//È«ÁÁ
		}
	}
}

