/*******************************************************************************
  * @file                   main.c
  * @Author:                MQjehovah                 mail:MQjehovah@hotmail.com
  * @version                1.0.0
  * @date                   2017.8.24
  * @brief                  
  ******************************************************************************
  * @attention
*******************************************************************************/
/* Includes ------------------------------------------------------------------*/
#include "stdio.h"
#include "main.h"
#include "delay.h"
#include "led.h"
/* Definition ----------------------------------------------------------------*/

/* Functions -----------------------------------------------------------------*/
/*******************************************************************************
  * @brief  时钟配置            
  * @param  None              
  * @retval None              
  * @Note   None              
*******************************************************************************/
void RCC_Config()
{
    RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA, ENABLE);  //使能GPIOA时钟
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_USART1, ENABLE); //使能USART1时钟
}

/*******************************************************************************
  * @brief  中断优先级配置            
  * @param  None              
  * @retval None              
  * @Note   None              
*******************************************************************************/
void NVIC_Config(void) //配置中断优先级
{
    NVIC_InitTypeDef NVIC_InitStructure;

    NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);

    NVIC_InitStructure.NVIC_IRQChannel = USART1_IRQn;
    NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 2; //抢占优先级 2
    NVIC_InitStructure.NVIC_IRQChannelSubPriority = 2;        //响应优先级
    NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;           //IRQ 通道使能
    NVIC_Init(&NVIC_InitStructure);                           //根据指定的参数初始化 VIC 寄存器、
}

/*******************************************************************************
  * @brief  主函数              
  * @param  None              
  * @retval None              
  * @Note   None              
*******************************************************************************/
int main(void)
{
    RCC_Config();
    NVIC_Config();
    LED_GPIO_Config();
    while (1)
    {
        LED_ON();
        simple_delay_ms(1000);
        LED_OFF();
        simple_delay_ms(1000);
    }
}

/*********************************END OF FILE**********************************/
