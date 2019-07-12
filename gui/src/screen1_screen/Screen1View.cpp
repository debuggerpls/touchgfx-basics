#include <gui/screen1_screen/Screen1View.hpp>

Screen1View::Screen1View()
{

}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}

void Screen1View::buttonUpPressed()
{
    touchgfx_printf("btnUp clicked\n");

    counter++;
    if (counter > 9)
        counter = 0;
    Unicode::snprintf(textCounterBuffer, TEXTCOUNTER_SIZE, "%d", counter);
    // redwaw in next tick
    textCounter.invalidate();

}

void Screen1View::buttonDownPressed()
{
    touchgfx_printf("btnDown clicked\n");

    counter--;
    if (counter < 0)
        counter = 9;
    Unicode::snprintf(textCounterBuffer, TEXTCOUNTER_SIZE, "%d", counter);
    // redwaw in next tick
    textCounter.invalidate();
}
