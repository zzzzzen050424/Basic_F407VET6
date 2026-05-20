#include "bsp_usart.h"

/* 外部声明STM32CubeMX生成的USART1句柄 */
extern UART_HandleTypeDef huart1;

/* USART1接收缓冲区 */
static uint8_t usart1_rx_buf[USART_RX_BUF_SIZE];
static uint16_t usart1_rx_len = 0;

/**
 * @brief 初始化USART1的接收中断(空闲中断)
 * @param 无
 * @retval 无
 */
void USART1_Init(void)
{
    /* 清空接收缓冲区 */
    memset(usart1_rx_buf, 0, USART_RX_BUF_SIZE);
    usart1_rx_len = 0;
    
    /* 启动空闲中断接收 */
    HAL_UARTEx_ReceiveToIdle_IT(&huart1, usart1_rx_buf, USART_RX_BUF_SIZE);
}

/**
 * @brief 通过USART1发送数据(阻塞模式)
 * @param pData 数据指针
 * @param Size 数据长度
 * @retval HAL_StatusTypeDef HAL状态
 */
HAL_StatusTypeDef USART1_Send(uint8_t *pData, uint16_t Size)
{
    return HAL_UART_Transmit(&huart1, pData, Size, USART_TX_TIMEOUT);
}

/**
 * @brief 通过USART1发送数据(中断模式)
 * @param pData 数据指针
 * @param Size 数据长度
 * @retval HAL_StatusTypeDef HAL状态
 */
HAL_StatusTypeDef USART1_Send_IT(uint8_t *pData, uint16_t Size)
{
    return HAL_UART_Transmit_IT(&huart1, pData, Size);
}

/**
 * @brief 获取USART1接收到的数据长度
 * @param 无
 * @retval uint16_t 接收到的数据长度
 */
uint16_t USART1_GetRxLen(void)
{
    return usart1_rx_len;
}

/**
 * @brief 获取USART1接收缓冲区指针
 * @param 无
 * @retval uint8_t* 接收缓冲区指针
 */
uint8_t *USART1_GetRxBuf(void)
{
    return usart1_rx_buf;
}

/**
 * @brief 清空USART1接收缓冲区
 * @param 无
 * @retval 无
 */
void USART1_ClearRxBuf(void)
{
    memset(usart1_rx_buf, 0, USART_RX_BUF_SIZE);
    usart1_rx_len = 0;
}

/**
 * @brief HAL库UART空闲中断接收完成回调
 * @param huart UART句柄指针
 * @param Size 接收到的数据长度
 * @retval 无
 */
void HAL_UARTEx_RxEventCallback(UART_HandleTypeDef *huart, uint16_t Size)
{
    if (huart == &huart1)
    {
        /* 保存接收到的数据长度 */
        usart1_rx_len = Size;
        
        /* 重新启动空闲中断接收 */
        HAL_UARTEx_ReceiveToIdle_IT(&huart1, usart1_rx_buf, USART_RX_BUF_SIZE);
        
        /* 如果接收到'1'，触发LED翻转 */
        if (usart1_rx_buf[0] == '1')
        {
            extern void LED_Trigger(void);
            LED_Trigger();
        }
    }
}
