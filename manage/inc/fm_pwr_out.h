//****************************************************************************
// MIT Media Lab - Biomechatronics
// Jean-Francois (Jeff) Duval
// jfduval@media.mit.edu
// 05/2015
//****************************************************************************
// fm_pwr_out: Deals with the 2 power outputs
//****************************************************************************
// Licensing: Please refer to 'software_license.txt'
//****************************************************************************

#ifndef INC_PWRO_H
#define INC_PWRO_H

//****************************************************************************
// Include(s)
//****************************************************************************

#include "stm32f4xx.h"
#include "stm32f4xx_hal.h"

//****************************************************************************
// Shared variable(s)
//****************************************************************************

//...

//****************************************************************************
// Public Function Prototype(s):
//****************************************************************************

void init_pwr_out(void);
void write_pwr_out(unsigned int pwr0, unsigned int pwr1);

//****************************************************************************
// Definition(s):
//****************************************************************************

#endif // INC_PWRO_H

