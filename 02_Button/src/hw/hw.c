/*
 * hw.c
 *
 *  Created on: 2018. 8. 10.
 *      Author: HanCheol Cho
 */


#include "hw.h"





void hwInit(void)
{
  bspInit();

  ledInit();
  buttonInit();
}
