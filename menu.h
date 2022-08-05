#ifndef MENU_H
#define MENU_H

#include "timer.h"
#include "data.h"
#include "tracer.h"
#include <stdexcept>

class Menu {
	Timer *timer = nullptr;
	Data *data = nullptr;
	Tracer *tracer = nullptr;
public:
	Menu(Timer *timerService
		 , Data *dataService
		 , Tracer *tracerService) 
		: timer(timerService)
		, data(dataService)
		, tracer(tracerService)
	{
		if(timer == nullptr){
			throw std::invalid_argument("service must not be null");
		}
		if(data == nullptr){
			throw std::invalid_argument("service must not be null");
		}
		if(tracer == nullptr){
			throw std::invalid_argument("service must not be null");
		}
	}
	void menuSelect(int mode);
	void addMenu();
	void OnSelect();
	void OnStart();
	void OnStop();
};

#endif
