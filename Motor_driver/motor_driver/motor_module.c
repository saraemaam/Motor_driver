/****************************************************************
 * Module: Motor
 *
 * File Name: motor_module.h
 *
 * Description: Source file for motor module
 *
 * Author: Sarah
 ******************************************************************/

#include "motor_module.h"
#include "gpio.h"

/* Module initialization make pins output*/

void Motor_init(void)
{

	GPIO_setupPinDirection(MOTOR_OUT1_OUT2_PORT,MOTOR_OUT1_pin,PIN_OUTPUT);
	GPIO_setupPinDirection(MOTOR_OUT1_OUT2_PORT,MOTOR_OUT2_pin,PIN_OUTPUT);

	/* Motor is stop at the beginning */
	GPIO_writePin(MOTOR_OUT1_OUT2_PORT,MOTOR_OUT1_pin,MOTOR_IS_OFF);
	GPIO_writePin(MOTOR_OUT1_OUT2_PORT,MOTOR_OUT2_pin,MOTOR_IS_OFF);

}
void Motor_CW_direction(void)
{


	GPIO_writePin(MOTOR_OUT1_OUT2_PORT,MOTOR_OUT1_pin,LOGIC_LOW);
	GPIO_writePin(MOTOR_OUT1_OUT2_PORT,MOTOR_OUT2_pin,LOGIC_HIGH);


}
void Motor_ACW_direction(void){


	GPIO_writePin(MOTOR_OUT1_OUT2_PORT,MOTOR_OUT1_pin,LOGIC_HIGH);
	GPIO_writePin(MOTOR_OUT1_OUT2_PORT,MOTOR_OUT2_pin,LOGIC_LOW);


}

void Motor_TurnOff(void){

	GPIO_writePin(MOTOR_OUT1_OUT2_PORT,MOTOR_OUT1_pin,LOGIC_LOW);
	GPIO_writePin(MOTOR_OUT1_OUT2_PORT,MOTOR_OUT2_pin,LOGIC_LOW);



}
