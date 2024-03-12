#include <stdint.h>
#include <stdio.h> // Para poder usar printf()
#include "stm32f4xx.h"
#include "uart.h"







int main(void)
{
	uart2_tx_init();
	while(1)
	{
		printf("Hola mundo desde un STM32F4......\n\r");
	}
}

