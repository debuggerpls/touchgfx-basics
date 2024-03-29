/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>

Screen1ViewBase::Screen1ViewBase()
{
    boxBackground.setPosition(0, 0, 800, 480);
    boxBackground.setColor(touchgfx::Color::getColorFrom24BitRGB(26, 23, 54));

    buttonUp.setXY(145, 138);
    buttonUp.setBitmaps(Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID), Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID), Bitmap(BITMAP_BLUE_ICONS_UP_ARROW_48_ID), Bitmap(BITMAP_BLUE_ICONS_UP_ARROW_48_ID));
    buttonUp.setIconXY(62, 17);

    buttonDown.setXY(145, 231);
    buttonDown.setBitmaps(Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID), Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID), Bitmap(BITMAP_BLUE_ICONS_DOWN_ARROW_48_ID), Bitmap(BITMAP_BLUE_ICONS_DOWN_ARROW_48_ID));
    buttonDown.setIconXY(62, 17);

    boxCounter.setPosition(439, 138, 169, 153);
    boxCounter.setColor(touchgfx::Color::getColorFrom24BitRGB(15, 15, 15));

    textCounter.setXY(504, 178);
    textCounter.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textCounter.setLinespacing(0);
    textCounter.setWildcard(TypedText(T_SINGLEUSEID2).getText());
    textCounter.resizeToCurrentText();
    textCounter.setTypedText(TypedText(T_SINGLEUSEID1));

    add(boxBackground);
    add(buttonUp);
    add(buttonDown);
    add(boxCounter);
    add(textCounter);
}

void Screen1ViewBase::setupScreen()
{

}
