#include "menu.h"
#include <GL/freeglut.h>

void Menu::menuSelect(int mode)
{
	switch (mode) 
	{
		case 1:
			data->active = true;
			timer->start();
			break;
		case 2:
			timer->stop();
			data->active = false;
			data->t=0;
			tracer->Reset();
			break;
	}
}

void Menu::addMenu()
{
	glutAddMenuEntry("Start", 1);
	glutAddMenuEntry("Stop", 2);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
}
