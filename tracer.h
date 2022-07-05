#ifndef TRACER_H
#define TRACER_H

#include "data.h"
#include <stdexcept>

class Tracer {
public:
	Tracer(Data *dataService) : data(dataService)
	{
		if(data == nullptr){
			throw std::invalid_argument("service must not be null");
		}
	}
	void Calculate();
	void Draw();
private:
	Data *data = nullptr;
	double tabx[100];
	double taby[100];
	double t0;
	int i;
};

#endif
