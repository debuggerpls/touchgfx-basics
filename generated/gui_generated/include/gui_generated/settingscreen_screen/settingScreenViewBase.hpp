/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SETTINGSCREEN_VIEW_BASE_HPP
#define SETTINGSCREEN_VIEW_BASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/settingscreen_screen/settingScreenPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/ButtonWithIcon.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/widgets/ButtonWithLabel.hpp>

class settingScreenViewBase : public touchgfx::View<settingScreenPresenter>
{
public:
    settingScreenViewBase();
    virtual ~settingScreenViewBase() {}

    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box boxBackground;
    touchgfx::ButtonWithIcon buttonUpHour;
    touchgfx::ButtonWithIcon buttonDownHour;
    touchgfx::Box boxCounterHour;
    touchgfx::TextAreaWithOneWildcard textHour;
    touchgfx::ButtonWithIcon buttonUpMinute;
    touchgfx::Box boxCounterMinute;
    touchgfx::ButtonWithIcon buttonDownMinute;
    touchgfx::TextAreaWithOneWildcard textMinute;
    touchgfx::ButtonWithLabel buttonSetHour;
    touchgfx::ButtonWithLabel buttonSetMinute;
    touchgfx::ButtonWithLabel buttonSwitchScreen;

    /*
     * Wildcard Buffers
     */
    static const uint16_t TEXTHOUR_SIZE = 10;
    touchgfx::Unicode::UnicodeChar textHourBuffer[TEXTHOUR_SIZE];
    static const uint16_t TEXTMINUTE_SIZE = 10;
    touchgfx::Unicode::UnicodeChar textMinuteBuffer[TEXTMINUTE_SIZE];

private:

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

    /*
     * Callback Declarations
     */
    touchgfx::Callback<settingScreenViewBase, const touchgfx::AbstractButton&> buttonCallback;

};

#endif // SETTINGSCREEN_VIEW_BASE_HPP