/*
 * MAX31865.h
 *
 *  Created on: May 30, 2022
 *      Author: tranu
 */

#ifndef INC_MAX31865_H_
#define INC_MAX31865_H_
typedef struct {
	uint8_t status;
	uint16_t lthreshold;
	uint16_t hthreshold;
	uint16_t adc;
	uint8_t config;
} max31865;

typedef union {
	uint8_t dataframe[2];
	uint16_t adc;
} MAX31865;
#endif /* INC_MAX31865_H_ */
