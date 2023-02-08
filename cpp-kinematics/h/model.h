#ifndef DIFACTORY_H
#define DIFACTORY_H

#include "keyboard.h"
#include "resizer.h"
#include "framecomputer.h"
#include "display.h"
#include "printer.h"
#include "menu.h"
#include "timer.h"
#include "data.h"
#include "dataprinter.h"
#include "tracer.h"

class Model {
public:
	Keyboard *keyboard;
	Resizer *resizer;
	FrameComputer *framecomputer; 
	Display *display;
	Printer *printer;
	Menu *menu;
	Timer *timer;
	Data *data;
	DataPrinter *dataprinter;
	Tracer *tracer;
	void Setup();
	void Clean();
};

#endif