#include "updateTask.h"

#include "FreeRTOS.h"
#include "task.h"
#include "semphr.h"

#include "stm32f4xx_ll_gpio.h"
#include "stm32f4xx_ll_bus.h"

xSemaphoreHandle updateSem = NULL;

void updateTask(void *p)
{
    updateSem = xSemaphoreCreateBinary();

    for(;;)
    {
        vTaskDelay(1000);
        xSemaphoreGive(updateSem);
        //LL_GPIO_SetOutputPin(GPIOD, LL_GPIO_PIN_5);
    }
}