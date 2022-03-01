/**
  ******************************************************************************
  * @file    Project/STM32F10x_StdPeriph_Template/main.c 
  * @author  MCD Application Team
  * @version V3.6.0
  * @date    20-September-2021
  * @brief   Main program body
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2011 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "stm32f10x.h"
#include <stdio.h>
#include "usart.h"

int main(void)
{
  uint32_t i,j;
  uart1_init(115200);
  printf("uart init success\r\n");
  while (1)
  {
    for(i=0;i<10000;i++){
      for(j=0;j<1000;j++){
      ;;
      }
    }
    printf("hello wolrd 9898\r\n");
  }
}
