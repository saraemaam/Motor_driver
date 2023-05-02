/****************************************************************
 *
 * Module: Motor
 *
 * File Name: motor_module.h
 *
 * Description: Header File for AVR GPIO driver
 *
 * Author: Sarah
 ******************************************************************/
#ifndef MOTOR_MODULE_H_
#define MOTOR_MODULE_H_

/*************************************************************
 *             Definition
 *************************************************************/

#define MOTOR_OUT1_OUT2_PORT  PORTC_ID
#define MOTOR_OUT1_pin        PIN0_ID
#define MOTOR_OUT2_pin        PIN1_ID
#define MOTOR_IS_OFF          LOGIC_LOW
#define MOTOR_IS_ON           LOGIC_HIGH


/************************************************************
 *            Function prototypes
 ************************************************************/

/* Module initialization make pins output*/
void Motor_init(void);
/* Set Motor direction Clockwise*/
void Motor_CW_direction(void);
/* Set Motor direction Anti Clockwise direction*/
void Motor_ACW_direction(void);
/* Stop Motor*/
void Motor_TurnOff(void);


#endif /* MOTOR_MODULE_H_ */
