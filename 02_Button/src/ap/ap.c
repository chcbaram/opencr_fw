/*
 * ap.c
 *
 *  Created on: 2018. 8. 10.
 *      Author: HanCheol Cho
 */


#include "ap.h"




void updateLed(void);
void updateButton(void);




void apInit(void)
{

}

void apMain(void)
{
  while(1)
  {
    updateLed();
    updateButton();
  }
}

void updateLed(void)
{
  static uint32_t pre_time = 0;


  if (millis()-pre_time >= 500)
  {
    pre_time = millis();
    ledToggle(_HW_DEF_LED_USER1);
  }
}

void updateButton(void)
{
  if (buttonGetPressed(_HW_DEF_BUTTON_USER1) == true)
  {
    ledOn(_HW_DEF_LED_USER2);
  }
  else
  {
    ledOff(_HW_DEF_LED_USER2);
  }

  if (buttonGetPressed(_HW_DEF_BUTTON_USER2) == true)
  {
    ledOn(_HW_DEF_LED_USER3);
  }
  else
  {
    ledOff(_HW_DEF_LED_USER3);
  }
}
