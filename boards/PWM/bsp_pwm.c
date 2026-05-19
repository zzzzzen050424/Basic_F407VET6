#include "bsp_pwm.h"
#include "main.h"

#define Ain1(x) HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, (x) == 1 ? GPIO_PIN_SET : GPIO_PIN_RESET)
#define Ain2(x) HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, (x) == 1 ? GPIO_PIN_SET : GPIO_PIN_RESET)
#define Bin1(x) HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, (x) == 1 ? GPIO_PIN_SET : GPIO_PIN_RESET)
#define Bin2(x) HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, (x) == 1 ? GPIO_PIN_SET : GPIO_PIN_RESET)

int PWM_MAX = 500, PWM_MIN = -500; // PWM限幅变量

//extern TIM_HandleTypeDef htim1;

// 限幅函数
// 入口参数：电机A和B的脉冲个数
void Limit(int *motoA, int *motoB)
{
    if (*motoA > PWM_MAX)
        *motoA = PWM_MAX;
    if (*motoA < PWM_MIN)
        *motoA = PWM_MIN;

    if (*motoB > PWM_MAX)
        *motoB = PWM_MAX;
    if (*motoB < PWM_MIN)
        *motoB = PWM_MIN;
}

// 绝对值函数
// 入口参数：常规变量
int abs(int p)
{
    int q;
    q = p > 0 ? p : (-p);
    return q;
}

// 赋值函数
// 入口参数即为PID运算完成后最终的PWM值
void Load(int moto1, int moto2)
{
    // 1.正负号对应正反转
    if (moto1 > 0){
        Ain1(0);Ain2(1);
    }
    else{
        Ain1(1);Ain2(0);
    }

    if (moto2 > 0){
        Bin1(0);Bin2(1);
    }
    else{
        Bin1(1);Bin2(0);
    }
    // 限幅处理
    Limit(&moto1, &moto2);
    // 2.设置Pwm值
//    __HAL_TIM_SetCompare(&htim1, TIM_CHANNEL_1, abs(moto1));
//    __HAL_TIM_SetCompare(&htim1, TIM_CHANNEL_2, abs(moto2));
}
