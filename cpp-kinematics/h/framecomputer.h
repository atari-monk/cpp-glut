#ifndef FRAMECOMPUTER_H
#define FRAMECOMPUTER_H

#include "data.h"
#include "timer.h"
#include "tracer.h"

class FrameComputer {
	Data *data = nullptr;
	Timer *timer = nullptr;
	Tracer *tracer = nullptr;
public:
	FrameComputer(
		Data *dataService
		, Timer *timerService
		, Tracer *tracerService) 
	: data(dataService)
	, timer(timerService)
	, tracer(tracerService)
	{
		if(data == nullptr){
			throw std::invalid_argument("service must not be null");
		}
		if(timer == nullptr){
			throw std::invalid_argument("service must not be null");
		}
		if(tracer == nullptr){
			throw std::invalid_argument("service must not be null");
		}
	}
	void Compute();
};

#endif