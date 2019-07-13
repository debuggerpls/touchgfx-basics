#include <gui/screen1_screen/Screen1View.hpp>

Screen1View::Screen1View()
{

}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();

    counter = presenter->getCounter();
    Unicode::snprintf(textCounterBuffer, TEXTCOUNTER_SIZE, "%d", counter);
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}

void Screen1View::updateCounter(int c)
{
	counter = c;
	Unicode::snprintf(textCounterBuffer, TEXTCOUNTER_SIZE, "%d", counter);
	textCounter.invalidate();
}