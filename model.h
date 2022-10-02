#ifndef DIFACTORY_H
#define DIFACTORY_H

#include "h/keyboard.h"
#include "h/resizer.h"
#include "framecomputer.h"
#include "h/display.h"
#include "h/printer.h"
#include "menu.h"
#include "h/timer.h"
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
