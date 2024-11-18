/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
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
#include "stm32f0xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
  int app();
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
#define GRID_1_Pin GPIO_PIN_13
#define GRID_1_GPIO_Port GPIOC
#define GRID_2_Pin GPIO_PIN_14
#define GRID_2_GPIO_Port GPIOC
#define GRID_3_Pin GPIO_PIN_15
#define GRID_3_GPIO_Port GPIOC
#define GRID_7_Pin GPIO_PIN_1
#define GRID_7_GPIO_Port GPIOB
#define GRID_8_Pin GPIO_PIN_2
#define GRID_8_GPIO_Port GPIOB
#define GRID_6_Pin GPIO_PIN_10
#define GRID_6_GPIO_Port GPIOB
#define GRID_15_Pin GPIO_PIN_11
#define GRID_15_GPIO_Port GPIOB
#define GRID_5_Pin GPIO_PIN_12
#define GRID_5_GPIO_Port GPIOB
#define SEG_A_Pin GPIO_PIN_13
#define SEG_A_GPIO_Port GPIOB
#define SEG_F_Pin GPIO_PIN_14
#define SEG_F_GPIO_Port GPIOB
#define SEG_D_Pin GPIO_PIN_15
#define SEG_D_GPIO_Port GPIOB
#define SEG_DP_Pin GPIO_PIN_8
#define SEG_DP_GPIO_Port GPIOA
#define GRID_13_Pin GPIO_PIN_9
#define GRID_13_GPIO_Port GPIOA
#define GRID_14_Pin GPIO_PIN_10
#define GRID_14_GPIO_Port GPIOA
#define SEG_E_Pin GPIO_PIN_11
#define SEG_E_GPIO_Port GPIOA
#define GRID_16_Pin GPIO_PIN_12
#define GRID_16_GPIO_Port GPIOA
#define SEG_C_Pin GPIO_PIN_6
#define SEG_C_GPIO_Port GPIOF
#define SEG_G_Pin GPIO_PIN_7
#define SEG_G_GPIO_Port GPIOF
#define GRID_12_Pin GPIO_PIN_4
#define GRID_12_GPIO_Port GPIOB
#define GRID_10_Pin GPIO_PIN_5
#define GRID_10_GPIO_Port GPIOB
#define GRID_9_Pin GPIO_PIN_6
#define GRID_9_GPIO_Port GPIOB
#define SEG_B_Pin GPIO_PIN_7
#define SEG_B_GPIO_Port GPIOB
#define GRID_11_Pin GPIO_PIN_8
#define GRID_11_GPIO_Port GPIOB
#define GRID_4_Pin GPIO_PIN_9
#define GRID_4_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
