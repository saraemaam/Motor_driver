/**************************************************************************************************
 *  Name        : Motor_Driver.c
 *  Description : Test Motor driver
 *  Author      : Sarah
 ***************************************************************************************************/

#include"motor_module.h"
#include"gpio.h"
#include<util/delay.h>

int main(void)
{

	Motor_init();

	Motor_CW_direction();
	_delay_ms(500);
	Motor_TurnOff();

	while(1){



	}



}

