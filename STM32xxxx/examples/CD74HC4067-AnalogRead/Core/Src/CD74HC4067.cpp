/*
 * CD74HC4067.cpp
 *
 *  Created on: Jan 23, 2023
 *      Author: Mevlana
 */

#include "CD74HC4067.h"

#include "stm32f4xx.h"
#include "stm32f4xx_hal_gpio.h"
#include "stm32f4xx_hal.h"
#include "stm32f4xx_hal_adc.h"
///////////////////////////////////////
// Constructor & cd74hc4067
CD74HC4067::CD74HC4067(int s0, int s1, int s2, int s3) {

//	pinMode(s0, OUTPUT);
//	pinMode(s1, OUTPUT);
//	pinMode(s2, OUTPUT);
//	pinMode(s3, OUTPUT);

	setpincd(s0, s1, s2, s3);
}
// Constructor & cd74hc4067
///////////////////////////////////////

///////////////////////////////////////
// SetpinCd
void CD74HC4067::setpincd(int s0, int s1, int s2, int s3) {
	pinCd[0] = s0;
	pinCd[1] = s1;
	pinCd[2] = s2;
	pinCd[3] = s3;

}
// SetpinCd
///////////////////////////////////////

///////////////////////////////////////
// setChannel
void CD74HC4067::setChannel(GPIO_TypeDef *port, int ch) {
	for (int i = 0; i < 4; i++) {
		HAL_GPIO_WritePin(port, pinCd[i],
				muxChannel[ch][i] == 1 ? GPIO_PIN_SET : GPIO_PIN_RESET);
	}
}
// setChannel
///////////////////////////////////////

///////////////////////////////////////
// readChannel
int CD74HC4067::readChannel(ADC_HandleTypeDef *pin) {
	HAL_ADC_Start(pin);
	return HAL_ADC_GetValue(pin);
}
// readChannel
///////////////////////////////////////

