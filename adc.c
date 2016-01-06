/*
 * Copyright 2016, Jay Fetter
 * All Rights Reserved.
 */
#include "adc.h"

/* ADC peripherals. Used WICED/platform/MCU/wiced_platform_common.c 
const platform_adc_t platform_adc_peripherals[] =
{
    [WICED_ADC_1] = {ADC1, ADC_Channel_3, RCC_APB2Periph_ADC1, 1, &platform_gpio_pins[WICED_GPIO_5]},
    [WICED_ADC_2] = {ADC1, ADC_Channel_4, RCC_APB2Periph_ADC1, 1, &platform_gpio_pins[WICED_GPIO_6]},
    [WICED_ADC_3] = {ADC1, ADC_Channel_1, RCC_APB2Periph_ADC1, 1, &platform_gpio_pins[WICED_GPIO_11]},
    [WICED_ADC_4] = {ADC1, ADC_Channel_12, RCC_APB2Periph_ADC1, 1, &platform_gpio_pins[WICED_GPIO_12]},
    [WICED_ADC_5] = {ADC1, ADC_Channel_9, RCC_APB2Periph_ADC1, 1, &platform_gpio_pins[WICED_GPIO_16]},
    [WICED_ADC_6] = {ADC1, ADC_Channel_0, RCC_APB2Periph_ADC1, 1, &platform_gpio_pins[WICED_GPIO_29]},
    [WICED_ADC_7] = {ADC1, ADC_Channel_5, RCC_APB2Periph_ADC1, 1, &platform_gpio_pins[WICED_GPIO_31]},
    [WICED_ADC_8] = {ADC1, ADC_Channel_6, RCC_APB2Periph_ADC1, 1, &platform_gpio_pins[WICED_GPIO_32]},
    [WICED_ADC_9] = {ADC1, ADC_Channel_13, RCC_APB2Periph_ADC1, 1, &platform_gpio_pins[WICED_GPIO_35]},
    [WICED_ADC_10] = {ADC1, ADC_Channel_14, RCC_APB2Periph_ADC1, 1, &platform_gpio_pins[WICED_GPIO_36]},
};
116472
*/
void init_adc(){
	wiced_adc_init(0, 150);
}