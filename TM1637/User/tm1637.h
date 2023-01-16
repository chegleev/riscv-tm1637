#ifndef USER_TM1637_H_
#define USER_TM1637_H_

#include "ch32v30x.h"

#define DIO_Pin GPIO_Pin_9
#define DIO_GPIO_Port GPIOA

#define CLK_Pin GPIO_Pin_10
#define CLK_GPIO_Port GPIOA

#define CLK_HIGH	(GPIO_WriteBit(CLK_GPIO_Port, CLK_Pin, Bit_SET))
#define CLK_LOW		(GPIO_WriteBit(CLK_GPIO_Port, CLK_Pin, Bit_RESET))

#define DIO_HIGH	(GPIO_WriteBit(DIO_GPIO_Port, DIO_Pin, Bit_SET))
#define DIO_LOW		(GPIO_WriteBit(DIO_GPIO_Port, DIO_Pin, Bit_RESET))

#define DIO_READ	(GPIO_ReadInputDataBit(DIO_GPIO_Port, DIO_Pin))

#define ADDR_AUTO  0x40
#define ADDR_FIXED 0x44

#define STARTADDR  0xc0

void tm1637_init(int clk, int data);
void writeByte(int8_t wr_data);
void start(void);
void stop(void);
void display_mass(int8_t DispData[]);
void display(uint8_t BitAddr, int8_t DispData);
void clearDisplay(void);
void set_brightness(uint8_t brightness);
void point(uint8_t cmd);
void coding_mass(int8_t DispData[]);
int8_t coding(int8_t DispData);

#endif /* USER_TM1637_H_ */
