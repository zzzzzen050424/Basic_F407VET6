#ifndef BSP_USART_H
#define BSP_USART_H

#include "bsp.h"

/* USART接收缓冲区大小 */
#define USART_RX_BUF_SIZE 256

/* USART发送超时时间(ms) */
#define USART_TX_TIMEOUT 1000

/**
 * @brief 初始化USART1的接收中断(空闲中断)
 * @param 无
 * @retval 无
 */
void USART1_Init(void);

/**
 * @brief 通过USART1发送数据(阻塞模式)
 * @param pData 数据指针
 * @param Size 数据长度
 * @retval HAL_StatusTypeDef HAL状态
 */
HAL_StatusTypeDef USART1_Send(uint8_t *pData, uint16_t Size);

/**
 * @brief 通过USART1发送数据(中断模式)
 * @param pData 数据指针
 * @param Size 数据长度
 * @retval HAL_StatusTypeDef HAL状态
 */
HAL_StatusTypeDef USART1_Send_IT(uint8_t *pData, uint16_t Size);

/**
 * @brief 获取USART1接收到的数据长度
 * @param 无
 * @retval uint16_t 接收到的数据长度
 */
uint16_t USART1_GetRxLen(void);

/**
 * @brief 获取USART1接收缓冲区指针
 * @param 无
 * @retval uint8_t* 接收缓冲区指针
 */
uint8_t *USART1_GetRxBuf(void);

/**
 * @brief 清空USART1接收缓冲区
 * @param 无
 * @retval 无
 */
void USART1_ClearRxBuf(void);

#endif
