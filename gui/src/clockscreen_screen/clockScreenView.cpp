#include <gui/clockscreen_screen/clockScreenView.hpp>

clockScreenView::clockScreenView()
{

}

void clockScreenView::setupScreen()
{
    clockScreenViewBase::setupScreen();

    hour = presenter->getHour();
    minute = presenter->getMinute();
    addStart = 1;
    addEnd = 1;

    Unicode::snprintf(textClockBuffer1, TEXTCLOCKBUFFER1_SIZE, "%02d", hour);
    Unicode::snprintf(textClockBuffer2, TEXTCLOCKBUFFER2_SIZE, "%02d", minute);
}

void clockScreenView::tearDownScreen()
{
	presenter->saveHour(hour);
	presenter->saveMinute(minute);

    clockScreenViewBase::tearDownScreen();
}

void clockScreenView::handleTickEvent()
{
	if (tickCount == 60)
	{
		minute++;
		hour = (hour + (minute/60)) % 24;
		minute %= 60;

		Unicode::snprintf(textClockBuffer1, TEXTCLOCKBUFFER1_SIZE, "%02d", hour);
		Unicode::snprintf(textClockBuffer2, TEXTCLOCKBUFFER2_SIZE, "%02d", minute);

		textClock.invalidate();

		tickCount = 0;
	}

    tickCount++;
    
       
    if (circleClock.getArcStart() + 340 == circleClock.getArcEnd())
    {
        addStart = 2;
        addEnd = 1;
    }
    else if (circleClock.getArcStart() + 20 == circleClock.getArcEnd())
    {
        addStart = 1;
        addEnd = 2;
    }
    circleClock.invalidate();
    circleClock.setArc(circleClock.getArcStart() + addStart, circleClock.getArcEnd() + addEnd);
    circleClock.invalidate();
    


}