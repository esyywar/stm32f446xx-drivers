/*
 * stm32f446xx_dma_driver.h
 *
 *  Created on: Jun. 11, 2020
 *      Author: Rahul
 */

#ifndef INC_STM32F446XX_DMA_DRIVER_H_
#define INC_STM32F446XX_DMA_DRIVER_H_


/*
 * DMA Configuration structure
 */
typedef struct {
	uint8_t DMA_Channel;
	uint8_t DMA_Dir;
	uint8_t DMA_PeriphInc;
	uint8_t DMA_MemInc;
	uint8_t DMA_CircMode;
	uint8_t DMA_Priority;
	uint8_t DMA_FIFOMode;
	uint8_t DMA_FIFOThresh;
	uint8_t DMA_MBurst;
	uint8_t DMA_PBurst;
} DMA_Config_t;

/*
 * DMA Handle structure
 */
typedef struct {
	DMA_RegDef_t *pDMAx;
	DMA_Config_t DMA_Config;
} DMA_Handle_t;


/********************* ADC RESET MACROS *********************/

// TODO


/************************ DRIVER APIS ************************/

/*
 * Peripheral clock setup
 */
void ADC_PeriClockControl(ADC_RegDef_t *pADCx, uint8_t EnOrDi);


/************************* CONFIGURATION VALUES *****************************/

/*
 * DMA Channel number
 */
#define DMA_CHANNEL_0				0
#define DMA_CHANNEL_1				1
#define DMA_CHANNEL_2				2
#define DMA_CHANNEL_3				3
#define DMA_CHANNEL_4				4
#define DMA_CHANNEL_5				5
#define DMA_CHANNEL_6				6
#define DMA_CHANNEL_7				7

/*
 * DMA direction
 */
#define DMA_PERIPH_TO_MEM			0
#define DMA_MEM_TO_PERIPH			1
#define DMA_MEM_TO_MEM				2

/*
 * Peripheral increment
 */
#define DMA_PERIPH_NO_INC			0
#define DMA_PERIPH_INC				1

/*
 * Memory increment
 */
#define DMA_MEM_NO_INC				0
#define DMA_MEM_INC					1

/*
 * Circular mode
 */
#define DMA_CIRC_DI					0
#define DMA_CIRC_EN					1

/*
 * Stream priority level
 */
#define DMA_PRIOR_LOW				0
#define DMA_PRIOR_MED				1
#define DMA_PRIOR_HIGH				2
#define DMA_PRIOR_VERY_HIGH			3

/*
 * FIFO or direct mode
 */
#define DMA_DIRECT_EN				0
#define DMA_DIRECT_DI				1

/*
 * FIFO threshold
 */
#define DMA_FIFO_THRESH_1DIV4		0
#define DMA_FIFO_THRESH_1DIV2		1
#define DMA_FIFO_THRESH_3DIV4		2
#define DMA_FIFO_THRESH_FULL		3

/*
 * Burst for memory and peripheral
 */
#define DMA_BURST_SINGLE			0
#define DMA_BURST_INCR4				1
#define DMA_BURST_INCR8				2
#define DMA_BURST_INCR16			3


#endif /* INC_STM32F446XX_DMA_DRIVER_H_ */