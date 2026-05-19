#include "task.h"
#include "main.h"

void LED_Task()
{
	HAL_GPIO_WritePin(BLUE_GPIO_Port,BLUE_Pin,GPIO_PIN_SET);
	HAL_Delay(50);
	HAL_GPIO_WritePin(BLUE_GPIO_Port,BLUE_Pin,GPIO_PIN_RESET);
	HAL_Delay(50);	  
}
