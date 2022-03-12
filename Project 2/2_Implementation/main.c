// Work started by Dhivyanandhini
#include "MyStm32f407xx.h"
#include <stdint.h>

#define PUSHBUTTON ENABLE

void car_window(void);
void sound_alarm(void);
void car_battery(void);
void car_door(void);
void d(void);
void d_1(void);
void d_2(void);
void d_3(void);
/**
 * @brief This function will provide debouncing delay of blue switch
 *
 */
void delay(void)
{
	for(uint32_t i=0; i<30000000; i++);
}

int main(void)
{

	GPIO_Handle_t GpioLed, GPIOBtn; 							//Initialisation of variables
	/**
	 * @brief Setup for LEDs
	 *
	 */
	GpioLed.pGPIOx = GPIOD;
	GpioLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_12 ;	//Green Led
	GpioLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&GpioLed);

 	GpioLed.pGPIOx = GPIOD;
	GpioLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_13;		//Orange Led
	GpioLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&GpioLed);

	GpioLed.pGPIOx = GPIOD;
	GpioLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_14;		//Red Led
	GpioLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&GpioLed);

	GpioLed.pGPIOx = GPIOD;
	GpioLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_15;		//Blue Led
	GpioLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&GpioLed);
	/**
	 * @brief Blue Switch Setup
	 *
	 */
	GPIOBtn.pGPIOx = GPIOA;
    GPIOBtn.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_0;
	GPIOBtn.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_IN;
	GPIOBtn.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GPIOBtn.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_NO_PUPD;
	GPIO_PeriClockControl(GPIOA, ENABLE);
	GPIO_Init(&GPIOBtn);

	while(1)
	{
		d();				//car_window function encryption

		d_1();				//sound_alarm function encryption

		d_2();				//car_battery function encryption

		d_3();				//car_door function encryption

	}

}
/**
 * @brief encryption for car_window function
 *
 */
void d(void)
{
	p1:if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0)== PUSHBUTTON)
	{
		car_window();
	}
	else
		goto p1;

}

/**
 * @brief sound_alarm function encryption
 *
 */
void d_1(void)
{
	uint32_t i=0, count = 1;
	for(i=0;i<2;i++)
	{
	if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0)== PUSHBUTTON)
		count++;
	else
		i=0;
	}
	if(count==2)
		{

			sound_alarm();

		}
}
/**
 * @brief  car_battery function encryption 
 *
 */
void d_2(void)
{
	uint32_t i=0, count = 1;
	for(i=0;i<3;i++)
	{
	if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0)== PUSHBUTTON)
		count++;
	else
		i=0;
	}
	if(count==3)
		{

			car_battery();

		}
}
/**
 * @brief  car_door function encryption
 *
 */
void d_3(void)
{
	uint32_t i=0, count = 1;
	for(i=0;i<4;i++)
	{
	if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0)== PUSHBUTTON)
		count++;
	else
		i=0;
	}
	if(count==4)
		{

			car_door();

		}
}

/**
 * @brief car_window function for car_window status
 *
 */
void car_window(void)
{
	delay();
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_14);
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
}
/**
 * @brief sound_alarm function 
 *
 */
void sound_alarm(void)
{
	delay();
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, 0);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, 0);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14, 0);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, 0);
}
/**
 * @brief  car_battery info function
 *
 */
void car_battery(void)
{
	delay();
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
	delay();
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
	delay();
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_14);
	delay();
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
	delay();
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, 0);
	delay();
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, 0);
	delay();
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14, 0);
	delay();
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, 0);
}
/**
 * @brief  car_door status function
 *
 */
void car_door(void)
{
	delay();
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
	delay();
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
	delay();
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_14);
	delay();
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
	delay();
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, 0);
	delay();
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, 0);
	delay();
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14, 0);
	delay();
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, 0);
}
// Work done by Dhivyanandhini T