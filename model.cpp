#include "model.h"

void Model::Setup()
{
	keyboard = new Keyboard();
	resizer = new Resizer();
	printer = new Printer();
	timer = new Timer();
	data = new Data();
	menu = new Menu(timer, data);
	dataprinter = new DataPrinter(printer, data);
	tracer = new Tracer(data);
	display = new Display(timer, data, tracer, dataprinter);
}

void Model::Clean()
{
	delete keyboard;
	delete resizer;
	delete printer;
	delete timer;
	delete data;
	delete menu;
	delete dataprinter;
	delete tracer;
	delete display;
}
