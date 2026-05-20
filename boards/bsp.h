#ifndef BSP_H
#define BSP_H

/******************系统头文件***************/
#include "main.h"
#include <stdint.h>
#include <stdbool.h>
/*******************************************/
#define u8 unsigned char
#define u32 unsigned int
#define u16  uint16_t
#define fp32 float
#define fp64 double
#ifndef bool_t
typedef uint8_t bool_t;
#endif
/******************用户自定义头文件*********/
#include "bsp_led.h"
#include "bsp_delay.h"
#include "bsp_can.h"
#include "OLED.h"
#include "bsp_usart.h"
/*******************************************/
#endif