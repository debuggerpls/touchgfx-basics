#ifndef SETTINGSCREEN_VIEW_HPP
#define SETTINGSCREEN_VIEW_HPP

#include <gui_generated/settingscreen_screen/settingScreenViewBase.hpp>
#include <gui/settingscreen_screen/settingScreenPresenter.hpp>

class settingScreenView : public settingScreenViewBase
{
public:
    settingScreenView();
    virtual ~settingScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void buttonDownMinuteClicked();
    virtual void buttonUpMinuteClicked();
    virtual void buttonDownHourClicked();
    virtual void buttonUpHourClicked();
    virtual void buttonSetMinuteClicked();
    virtual void buttonSetHourClicked();
protected:
	int16_t hour;
	int16_t minute;
};

#endif // SETTINGSCREEN_VIEW_HPP
