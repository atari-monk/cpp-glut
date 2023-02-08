#include "../h/menu.h"
#include <GL/freeglut.h>

void Menu::menuSelect(int mode)
{
	switch (mode) 
	{
		case 1:
			OnStart();
			break;
		case 2:
			OnStop();
			break;
		case 3:
			OnSelect();
			break;
	}
}

void Menu::OnSelect()
{
	if(data->active == true) return;
	data->select++;
	if(data->select > 8)
		data->select = 1;
	data->setup();
}

void Menu::OnStart()
{
	data->active = true;
	timer->start();
}

void Menu::OnStop()
{
	timer->stop();
	data->active = false;
	data->t=0;
	tracer->Reset();
}

void Menu::addMenu()
{
	glutAddMenuEntry("Start", 1);
	glutAddMenuEntry("Stop", 2);
	glutAddMenuEntry("Select", 3);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
}
