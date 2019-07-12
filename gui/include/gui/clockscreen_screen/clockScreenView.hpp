#ifndef CLOCKSCREEN_VIEW_HPP
#define CLOCKSCREEN_VIEW_HPP

#include <gui_generated/clockscreen_screen/clockScreenViewBase.hpp>
#include <gui/clockscreen_screen/clockScreenPresenter.hpp>

class clockScreenView : public clockScreenViewBase
{
public:
    clockScreenView();
    virtual ~clockScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void handleTickEvent();
protected:
	int16_t hour;
	int16_t minute;
	int16_t tickCount;
	int16_t addStart;
	int16_t addEnd;
};

#endif // CLOCKSCREEN_VIEW_HPP
