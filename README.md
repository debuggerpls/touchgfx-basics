"# touchgfx-basics"

Generated code for STM32F469I-disco from TouchGFX designer, Blank template.

STM32Cube v1.15, FreeRTOS, 16bit color depth

GUI used for tutorials: background, 2buttons and text field

## 1. GUI without hardware integration
### Following the TouchGFX Getting Started tutorials
#### Tutorial 2 -> Step 4

after adding the button interactions:

Screen1ViewBase.hpp got 2 new virtual functions

Screen1ViewBase.cpp buttonCallbackHandler calls the functions

Functions get added to the Screen1View.hpp

Functions implemented in Screen1View.cpp with NO VIRTUAL! And dont forget thats its C++!(class name::)

Remember to add wildcard ranges or it shows '?'


## 2. GUI without hardware integration
### Following the TouchGFX Getting Started tutorials
#### Tutorial 3 -> Step 1

Changed gui to match the tutorial example
