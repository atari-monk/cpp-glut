#ifndef MENU_H
#define MENU_H

#include "timer.h"
#include "data.h"
#include <stdexcept>

class Menu {
	Timer *timer = nullptr;
	Data *data = nullptr;
public:
	Menu(Timer *timerService
		 , Data *dataService) : timer(timerService), data(dataService)
	{
		if(timer == nullptr){
			throw std::invalid_argument("service must not be null");
		}
		if(data == nullptr){
			throw std::invalid_argument("service must not be null");
		}
	}
	void menuSelect(int mode);
	void addMenu();
};

#endif
