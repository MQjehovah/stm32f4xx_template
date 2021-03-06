/*******************************************************************************
  * @file                   led.h
  * @Author:                MQjehovah                 mail:MQjehovah@hotmail.com
  * @version                1.0.0
  * @date                   2019/02/16
  * @brief                  
  ******************************************************************************
  * @attention
*******************************************************************************/
#ifndef __LED_H
#define __LED_H
/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_conf.h"
/* Definition ----------------------------------------------------------------*/

/* Exported ------------------------------------------------------------------*/
void LED_GPIO_Config(void);
void LED_ON(void);
void LED_OFF(void);

#endif
/*********************************END OF FILE**********************************/
