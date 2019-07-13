"# touchgfx-basics"

# This is 3. from rtosComponents. Scroll down!

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

## 2. Updating text from seperate task in main
Impelement a task in main that sends update notifications to Model. This builds onto the 1. Changing text from model

#### main.cpp
* define global updateQueue. It will be used to send the notifications to Model.
* define updateTask (it works with without static too). Template uses FreeRTOS 7.6.0, so make sure that old xQueueGeneric* functions are used. Define the item for sending. Create the queue, size = 1(in portBASE_TYPE), itemSize = 1, type = 0. In the for(;;) loop, wait for 500ms, then send using genericSend function to notify Model, queue = updateQueue, item = reference to &item, wait = 0 (non-blocking), whereToSend = queueSEND_TO_BACK(does not matter).
* in main() loop create the task. Stack size could be even smaller, we dont do anything in the task. Priority of the task is lower to not mess up our GUI frame rate.

#### Model.cpp
* include FreeRTOS.h and queue.h.
* declare the updateQueue as extern (extern xQueueHandle updateQueue).
* Comment out previous tick code. Define item to save the queue item, even though we dont use it. Check if we can receive an item, by using the xQueueGenericReceive function in non-blocking way. If received, update the counter and call modelListener->updateCounter(counter).

## 3. Updating text from seperate task in main (semaphore)
Just like part 2. but using semaphores.

#### main.cpp
* include "semphr.h"
* define semaphore handle updateSem. This will be used to communicate with Model.
* edit updateTask. remove old code for queues. create updateSem as semaphore binary. in for() loop give the semaphore updateSem every 2s.

#### Model.cpp
* remove queue.h include. add semphr.h include.
* declare updateSem as extern semaphore handle.
* edit tick(). remove queue code. update counter when semaphore can be taken. Take in non-blocking way!
