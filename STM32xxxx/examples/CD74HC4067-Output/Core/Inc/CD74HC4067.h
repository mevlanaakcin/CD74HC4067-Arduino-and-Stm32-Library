/*
 * CD74HC4067.h
 *
 *  Created on: Jan 23, 2023
 *      Author: Mevlana
 */

#ifndef INC_CD74HC4067_H_
#define INC_CD74HC4067_H_
#include "stm32f4xx_hal.h"

class CD74HC4067 {
private:

	const int muxChannel[16][4] = { { 0, 0, 0, 0 }, // channel 0
			{ 1, 0, 0, 0 }, // channel 1
			{ 0, 1, 0, 0 }, // channel 2
			{ 1, 1, 0, 0 }, // channel 3
			{ 0, 0, 1, 0 }, // channel 4
			{ 1, 0, 1, 0 }, // channel 5
			{ 0, 1, 1, 0 }, // channel 6
			{ 1, 1, 1, 0 }, // channel 7
			{ 0, 0, 0, 1 }, // channel 8
			{ 1, 0, 0, 1 }, // channel 9
			{ 0, 1, 0, 1 }, // channel 10
			{ 1, 1, 0, 1 }, // channel 11
			{ 0, 0, 1, 1 }, // channel 12
			{ 1, 0, 1, 1 }, // channel 13
			{ 0, 1, 1, 1 }, // channel 14
			{ 1, 1, 1, 1 }  // channel 15
	};
	int pinCd[4];
	void setpincd(int, int, int, int);

public:
	CD74HC4067(int, int, int, int);
	void setChannel(GPIO_TypeDef*, int);
	int readChannel(int);
};

#endif /* INC_CD74HC4067_H_ */
