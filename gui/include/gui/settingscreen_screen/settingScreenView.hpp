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
protected:
};

#endif // SETTINGSCREEN_VIEW_HPP