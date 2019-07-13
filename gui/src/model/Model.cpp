#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

#include "FreeRTOS.h"
#include "semphr.h"

extern xSemaphoreHandle updateSem;

Model::Model() : modelListener(0), counter(0), tickCounter(0)
{
}

void Model::tick()
{
	if (xSemaphoreTake(updateSem, 0) == pdTRUE)
	{
		counter++;
		modelListener->updateCounter(counter);
	}
}
