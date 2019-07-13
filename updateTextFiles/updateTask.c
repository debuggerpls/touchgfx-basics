#include "updateTask.h"

#include "FreeRTOS.h"
#include "task.h"
#include "semphr.h"

xSemaphoreHandle updateSem = NULL;

void updateTask(void *p)
{
    updateSem = xSemaphoreCreateBinary();

    for(;;)
    {
        vTaskDelay(500);
        xSemaphoreGive(updateSem);
    }
}