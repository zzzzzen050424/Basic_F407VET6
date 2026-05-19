/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define MR_Pin GPIO_PIN_2
#define MR_GPIO_Port GPIOE
#define R_Pin GPIO_PIN_3
#define R_GPIO_Port GPIOE
#define RR_Pin GPIO_PIN_4
#define RR_GPIO_Port GPIOE
#define RRR_Pin GPIO_PIN_5
#define RRR_GPIO_Port GPIOE
#define KEY4_Pin GPIO_PIN_0
#define KEY4_GPIO_Port GPIOC
#define KEY1_Pin GPIO_PIN_0
#define KEY1_GPIO_Port GPIOA
#define KEY3_Pin GPIO_PIN_1
#define KEY3_GPIO_Port GPIOA
#define AIN1_Pin GPIO_PIN_4
#define AIN1_GPIO_Port GPIOA
#define AIN2_Pin GPIO_PIN_5
#define AIN2_GPIO_Port GPIOA
#define BIN1_Pin GPIO_PIN_6
#define BIN1_GPIO_Port GPIOA
#define BIN2_Pin GPIO_PIN_7
#define BIN2_GPIO_Port GPIOA
#define RED_Pin GPIO_PIN_5
#define RED_GPIO_Port GPIOC
#define KEY2_Pin GPIO_PIN_0
#define KEY2_GPIO_Port GPIOB
#define BLUE_Pin GPIO_PIN_1
#define BLUE_GPIO_Port GPIOB
#define PWMA_Pin GPIO_PIN_9
#define PWMA_GPIO_Port GPIOE
#define PWMB_Pin GPIO_PIN_11
#define PWMB_GPIO_Port GPIOE
#define Beep_Pin GPIO_PIN_13
#define Beep_GPIO_Port GPIOE
#define Jiguangbi_Pin GPIO_PIN_14
#define Jiguangbi_GPIO_Port GPIOE
#define Servo3_Pin GPIO_PIN_10
#define Servo3_GPIO_Port GPIOB
#define Servo4_Pin GPIO_PIN_11
#define Servo4_GPIO_Port GPIOB
#define EncoderB1_Pin GPIO_PIN_6
#define EncoderB1_GPIO_Port GPIOC
#define EncoderB2_Pin GPIO_PIN_7
#define EncoderB2_GPIO_Port GPIOC
#define LLL_Pin GPIO_PIN_8
#define LLL_GPIO_Port GPIOC
#define LL_Pin GPIO_PIN_9
#define LL_GPIO_Port GPIOC
#define Servo1_Pin GPIO_PIN_15
#define Servo1_GPIO_Port GPIOA
#define GREEN_Pin GPIO_PIN_1
#define GREEN_GPIO_Port GPIOD
#define Servo2_Pin GPIO_PIN_3
#define Servo2_GPIO_Port GPIOB
#define EncoderA1_Pin GPIO_PIN_4
#define EncoderA1_GPIO_Port GPIOB
#define EncoderA2_Pin GPIO_PIN_5
#define EncoderA2_GPIO_Port GPIOB
#define Trig_Pin GPIO_PIN_6
#define Trig_GPIO_Port GPIOB
#define Echo_Pin GPIO_PIN_7
#define Echo_GPIO_Port GPIOB
#define OLED_SCL_Pin GPIO_PIN_8
#define OLED_SCL_GPIO_Port GPIOB
#define OLED_SDA_Pin GPIO_PIN_9
#define OLED_SDA_GPIO_Port GPIOB
#define L_Pin GPIO_PIN_0
#define L_GPIO_Port GPIOE
#define ML_Pin GPIO_PIN_1
#define ML_GPIO_Port GPIOE

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
