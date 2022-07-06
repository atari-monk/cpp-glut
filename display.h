#ifndef DISPLAY_H
#define DISPLAY_H

#include "timer.h"
#include "data.h"
#include "tracer.h"
#include "dataprinter.h"
#include <stdexcept>

class Display {
	Timer *timer = nullptr;
	Data *data = nullptr;
	Tracer *tracer = nullptr;
	DataPrinter *dataprinter = nullptr;
public:
	Display(Timer *timerService
		, Data *dataService
		, Tracer *tracerService
		, DataPrinter *dataprinterService) 
		: timer(timerService)
		, data(dataService)
		, tracer(tracerService)
		, dataprinter(dataprinterService)
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
		if(dataprinter == nullptr){
			throw std::invalid_argument("service must not be null");
		}
	}
	void calculate();
	void display();
};

#endif
