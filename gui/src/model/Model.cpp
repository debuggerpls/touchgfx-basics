#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

Model::Model() : modelListener(0), counter(0), tickCounter(0)
{
}

void Model::tick()
{
	tickCounter++;
	if (tickCounter == 60)
	{
		counter++;
		modelListener->updateCounter(counter);
		tickCounter = 0;
	}
}
