/*******************************************************************************
 * @file                   led.c
 * @Author:                MQjehovah                 mail:MQjehovah@hotmail.com
 * @version                1.0.0
 * @date                   2019/02/16
 * @brief                  
 ******************************************************************************
 * @attention
*******************************************************************************/
/* Includes ------------------------------------------------------------------*/
#include "led.h"
/* Definition ----------------------------------------------------------------*/

/* Functions -----------------------------------------------------------------*/
/*******************************************************************************
  * @brief  LED引脚配置            
  * @param  None              
  * @retval None              
  * @Note   None              
******************************************************************************/
void LED_GPIO_Config()
{
    GPIO_InitTypeDef GPIO_InitStructure;

    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_4;         //GPIOA4
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;     //复用功能
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz; //速度 50MHz
    GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;    //推挽复用输出
    GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;      //上拉
    GPIO_Init(GPIOA, &GPIO_InitStructure);            //初始化 PA4
}

/*******************************************************************************
  * @brief  打开LED灯         
  * @param  None              
  * @retval None              
  * @Note   None              
******************************************************************************/
void LED_ON()
{
    GPIO_ResetBits(GPIOA, GPIO_Pin_4);
}

/*******************************************************************************
  * @brief  熄灭LED灯            
  * @param  None              
  * @retval None              
  * @Note   None              
******************************************************************************/
void LED_OFF()
{
    GPIO_SetBits(GPIOA, GPIO_Pin_4);
}
/*********************************END OF FILE**********************************/
