#include "menu.h"
#include <GL/freeglut.h>

void Menu::menuSelect(int mode)
{
	switch (mode) 
	{
		case 1:
			if(data->active == true) break;
			data->select++;
			data->setup();
			if(data->select > 8)
				data->select = 1;	
			break;
		case 2:
			data->active = true;
			timer->start();
			break;
		case 3:
			timer->stop();
			data->active = false;
			data->t=0;
			tracer->Reset();
			break;
	}
}

void Menu::addMenu()
{
	glutAddMenuEntry("Select", 1);
	glutAddMenuEntry("Start", 2);
	glutAddMenuEntry("Stop", 3);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
}
