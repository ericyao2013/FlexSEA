//****************************************************************************
// MIT Media Lab - Biomechatronics
// Jean-Francois (Jeff) Duval
// jfduval@mit.edu
// 07/2014
//****************************************************************************
// main: FlexSEA-Manage
//****************************************************************************


#ifndef MAIN_H_
#define MAIN_H_

//****************************************************************************
// Include(s)
//****************************************************************************

#include <stdio.h>
#include "stm32f4xx.h"
#include "stm32f4xx_hal.h"
#include "stm32f4xx_hal_uart.h"
#include "stm32f4xx_hal_usart.h"
#include "stm32f4xx_hal_gpio.h"
#include "stm32f4xx_hal_adc.h"
#include "stm32f4xx_hal_spi.h"
#include "Timer.h"
#include "fm_ui.h"
#include "fm_uarts.h"
#include "fm_adc.h"
#include "fm_adv_analog.h"
#include "fm_dio.h"
#include "fm_spi.h"
#include "fm_i2c.h"
#include "fm_imu.h"
#include "demonstrations.h"
#include "flexsea_local.h"
#include "../../common/inc/flexsea.h"

//****************************************************************************
// Prototype(s):
//****************************************************************************

int main(void);
void send_IMU_data(imu_data_set imu_data_mode);

//****************************************************************************
// Definition(s):
//****************************************************************************

#endif // MAIN_H_
