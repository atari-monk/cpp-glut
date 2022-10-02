#ifndef DISPLAY_H
#define DISPLAY_H

#include "../data.h"
#include "../tracer.h"
#include "../dataprinter.h"
#include <stdexcept>

class Display {
	Data *data = nullptr;
	Tracer *tracer = nullptr;
	DataPrinter *dataprinter = nullptr;
public:
	Display(
		Data *dataService
		, Tracer *tracerService
		, DataPrinter *dataprinterService) 
		: data(dataService)
		, tracer(tracerService)
		, dataprinter(dataprinterService)
	{
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
	void setup();
	void calculate();
	void display();
};

#endif
