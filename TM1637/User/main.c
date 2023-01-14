#include "debug.h"
#include "tm1637.h"
#include "my_delay.h"

void GPIO_TM1637_INIT(void)
{
    GPIO_InitTypeDef GPIO_InitStructure = {0};

    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
    GPIO_InitStructure.GPIO_Pin = DIO_Pin|CLK_Pin;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_OD;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_2MHz;
    GPIO_Init(GPIOA, &GPIO_InitStructure);

    GPIO_WriteBit(GPIOA, DIO_Pin|CLK_Pin, Bit_RESET);
}

int main(void)
{
    NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);

    My_Delay_Init();

    GPIO_TM1637_INIT();

    set_brightness(7);
    clearDisplay();

    int8_t TimeDisp[4] = {0};

    uint8_t i = 0;

    while(1)
    {
    	point(0);

    	TimeDisp[0] = i;
    	TimeDisp[1] = i;
    	TimeDisp[2] = i;
    	TimeDisp[3] = i;

    	display_mass(TimeDisp);

    	if(i<9)
    	{
    		i++;
    	} else
    	{
    		i=0;
    	}

    	My_Delay_Ms(500);
    }
}
