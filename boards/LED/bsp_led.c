#include "bsp_led.h"

void LED_Trigger(void)
{
  HAL_GPIO_TogglePin(BLUE_GPIO_Port, BLUE_Pin);
}

