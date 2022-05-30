
#ifndef INC_MODBUSREGISTER_H_
#define INC_MODBUSREGISTER_H_


typedef struct
{
	uint16_t ADC;
	float RSPI1;
//	float Temperature;
}
Modbus_Register;
extern Modbus_Register Register;
#endif
