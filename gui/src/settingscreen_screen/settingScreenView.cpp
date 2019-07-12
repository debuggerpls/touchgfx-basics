#include <gui/settingscreen_screen/settingScreenView.hpp>

settingScreenView::settingScreenView()
{

}

void settingScreenView::setupScreen()
{
    settingScreenViewBase::setupScreen();

    hour = presenter->getHour();
    minute = presenter->getMinute();

    Unicode::snprintf(textHourBuffer, TEXTHOUR_SIZE, "%02d", hour);
    Unicode::snprintf(textMinuteBuffer, TEXTMINUTE_SIZE, "%02d", minute);
}

void settingScreenView::tearDownScreen()
{
    settingScreenViewBase::tearDownScreen();
}

void settingScreenView::buttonDownMinuteClicked()
{
	minute = (minute + 60 - 1) % 60;
	Unicode::snprintf(textMinuteBuffer, TEXTMINUTE_SIZE, "%02d", minute);
	textMinute.invalidate();
	//touchgfx_printf(minute);
}
void settingScreenView::buttonUpMinuteClicked()
{
	minute = (minute + 1) % 60;
	Unicode::snprintf(textMinuteBuffer, TEXTMINUTE_SIZE, "%02d", minute);
	textMinute.invalidate();
	//touchgfx_printf(minute);
}
void settingScreenView::buttonDownHourClicked()
{
	hour = (hour + 24 - 1) % 24;
	Unicode::snprintf(textHourBuffer, TEXTHOUR_SIZE, "%02d", hour);
	textHour.invalidate();
	//touchgfx_printf(hour);
}
void settingScreenView::buttonUpHourClicked()
{
	hour = (hour + 1) % 24;
	Unicode::snprintf(textHourBuffer, TEXTHOUR_SIZE, "%02d", hour);
	textHour.invalidate();
	//touchgfx_printf(hour);
}
void settingScreenView::buttonSetMinuteClicked()
{
	presenter->saveMinute(minute);	
}
void settingScreenView::buttonSetHourClicked()
{
	presenter->saveHour(hour);
}
