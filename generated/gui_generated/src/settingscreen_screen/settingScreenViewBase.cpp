/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/settingscreen_screen/settingScreenViewBase.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>

settingScreenViewBase::settingScreenViewBase() :
    buttonCallback(this, &settingScreenViewBase::buttonCallbackHandler)
{
    boxBackground.setPosition(0, 0, 800, 480);
    boxBackground.setColor(touchgfx::Color::getColorFrom24BitRGB(26, 23, 54));

    buttonUpHour.setXY(101, 108);
    buttonUpHour.setBitmaps(Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID), Bitmap(BITMAP_BLUE_ICONS_UP_ARROW_48_ID), Bitmap(BITMAP_BLUE_ICONS_UP_ARROW_48_ID));
    buttonUpHour.setIconXY(7, 17);

    buttonDownHour.setXY(101, 184);
    buttonDownHour.setBitmaps(Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID), Bitmap(BITMAP_BLUE_ICONS_DOWN_ARROW_48_ID), Bitmap(BITMAP_BLUE_ICONS_DOWN_ARROW_48_ID));
    buttonDownHour.setIconXY(7, 17);

    boxCounterHour.setPosition(187, 108, 144, 132);
    boxCounterHour.setColor(touchgfx::Color::getColorFrom24BitRGB(15, 15, 15));

    textHour.setXY(221, 132);
    textHour.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textHour.setLinespacing(0);
    Unicode::snprintf(textHourBuffer, TEXTHOUR_SIZE, "%s", TypedText(T_SINGLEUSEID2).getText());
    textHour.setWildcard(textHourBuffer);
    textHour.resizeToCurrentText();
    textHour.setTypedText(TypedText(T_SINGLEUSEID1));

    buttonUpMinute.setXY(621, 108);
    buttonUpMinute.setBitmaps(Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID), Bitmap(BITMAP_BLUE_ICONS_UP_ARROW_48_ID), Bitmap(BITMAP_BLUE_ICONS_UP_ARROW_48_ID));
    buttonUpMinute.setIconXY(7, 17);

    boxCounterMinute.setPosition(446, 108, 144, 132);
    boxCounterMinute.setColor(touchgfx::Color::getColorFrom24BitRGB(15, 15, 15));

    buttonDownMinute.setXY(621, 184);
    buttonDownMinute.setBitmaps(Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID), Bitmap(BITMAP_BLUE_ICONS_DOWN_ARROW_48_ID), Bitmap(BITMAP_BLUE_ICONS_DOWN_ARROW_48_ID));
    buttonDownMinute.setIconXY(7, 17);

    textMinute.setXY(480, 132);
    textMinute.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textMinute.setLinespacing(0);
    Unicode::snprintf(textMinuteBuffer, TEXTMINUTE_SIZE, "%s", TypedText(T_SINGLEUSEID4).getText());
    textMinute.setWildcard(textMinuteBuffer);
    textMinute.resizeToCurrentText();
    textMinute.setTypedText(TypedText(T_SINGLEUSEID3));

    buttonSetHour.setXY(174, 258);
    buttonSetHour.setBitmaps(Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID), Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID));
    buttonSetHour.setLabelText(TypedText(T_SINGLEUSEID5));
    buttonSetHour.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    buttonSetHour.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));

    buttonSetMinute.setXY(433, 258);
    buttonSetMinute.setBitmaps(Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID), Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID));
    buttonSetMinute.setLabelText(TypedText(T_SINGLEUSEID6));
    buttonSetMinute.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    buttonSetMinute.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));

    buttonSwitchScreen.setXY(315, 362);
    buttonSwitchScreen.setBitmaps(Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID), Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID));
    buttonSwitchScreen.setLabelText(TypedText(T_SINGLEUSEID7));
    buttonSwitchScreen.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    buttonSwitchScreen.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    buttonSwitchScreen.setAction(buttonCallback);

    add(boxBackground);
    add(buttonUpHour);
    add(buttonDownHour);
    add(boxCounterHour);
    add(textHour);
    add(buttonUpMinute);
    add(boxCounterMinute);
    add(buttonDownMinute);
    add(textMinute);
    add(buttonSetHour);
    add(buttonSetMinute);
    add(buttonSwitchScreen);
}

void settingScreenViewBase::setupScreen()
{

}

void settingScreenViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &buttonUpHour)
    {

    }
    else if (&src == &buttonDownHour)
    {

    }
    else if (&src == &buttonUpMinute)
    {

    }
    else if (&src == &buttonDownMinute)
    {

    }
    else if (&src == &buttonSetHour)
    {

    }
    else if (&src == &buttonSetMinute)
    {

    }
    else if (&src == &buttonSwitchScreen)
    {
        //changeToClockScreen
        //When buttonSwitchScreen clicked change screen to clockScreen
        //Go to clockScreen with screen transition towards North
        application().gotoclockScreenScreenCoverTransitionNorth();
    }
}
