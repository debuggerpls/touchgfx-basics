"# touchgfx-basics"

Generated code for STM32F469I-disco from TouchGFX designer, Blank template.

STM32Cube v1.15, FreeRTOS, 16bit color depth

## 1. Changing text from model
 Implement a application that changes the value on the screen that is sent from Model. Model has counter value that is increased every 60 ticks and then Presenter function is called that updates the screen.

#### Model.hpp:
* Add counter and tickCounter variables
* add getCounter() method, so that Presenter can access the counter value in Model

#### Model.cpp:
* Edit Model constructor to initialize counter and tickCounter values
* Edit tick, so it increases tickCounter till it reaches 60, then increases counter, resets tickCounter and calls modelListener->updateCounter(counter). This function needs to be declared!

#### ModelListener.hpp:
* declare virtual void updateCounter(int c), which will be defined in Screen1Presenter. This is done because Presenter methods get accesses through modelListener.

#### Screen1Presenter.hpp:
* declare functions updateCounter and getCounter.

#### Screen1Presenter.cpp:
* define function updateCounter(counter). It uses the updateCounter() from Screen1View and gets the counter value from model->getCounter(). updateCounter() needs to be defined in Screen1View!
* define function getCounter. It lets the Screen1View access the counter value saved in Model.

#### Screen1View.hpp
* declare updateCounter().

#### Screen1View.cpp
* edit setupScreen(). Initialize counter value by calling Presenter method getCounter(). Save the value using snprintf in textCounterBuffer. No need to invalidate, because the screen is just go initialized.
* declare updateCounter. save new counter value, update textCounterBuffer with new counter, and redraw the textAre widget using textCounter.invalide().
