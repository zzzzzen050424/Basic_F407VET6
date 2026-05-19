#ifndef BSP_SERVO_PWM_H
#define BSP_SERVO_PWM_H
#include "struct_typedef.h"

void Limit(int *motoA, int *motoB); // 限幅函数
int abs(int p);                      // 绝对值函数
extern void Load(int moto1, int moto2);      // 赋值函数

#endif
