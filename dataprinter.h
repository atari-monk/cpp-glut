#ifndef DATAPRINTER_H
#define DATAPRINTER_H

#include "data.h"
#include "h/printer.h"
#include <stdexcept>

class DataPrinter {
public:
	DataPrinter(
		Printer *printerService
		, Data *dataService) : printer(printerService), data(dataService)
	{
		if(printer == nullptr){
			throw std::invalid_argument("service must not be null");
		}
		if(data == nullptr){
			throw std::invalid_argument("service must not be null");
		}
	}
	void output();
private:
	Printer *printer = nullptr;
	Data *data = nullptr;
};

#endif
