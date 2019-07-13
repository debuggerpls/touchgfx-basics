#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

#include "FreeRTOS.h"
#include "queue.h"

extern xQueueHandle updateQueue;

Model::Model() : modelListener(0), counter(0), tickCounter(0)
{
}

void Model::tick()
{
	// tickCounter++;
	// if (tickCounter == 60)
	// {
	// 	counter++;
	// 	modelListener->updateCounter(counter);
	// 	tickCounter = 0;
	// }
	portBASE_TYPE item = 0;
	if (xQueueGenericReceive(updateQueue, &item, 0, 0) == pdTRUE)
	{
		// dont need the item, just update
		counter++;
		modelListener->updateCounter(counter);
	}
}
