#include "display.h"
#include <GL/freeglut.h>
#include <GL/glu.h>

void Display::calculate()
{
	if(data->active)
	{
		data->t=timer->getElapsedTimeInSec();
	}
	int sel = 2;
	data->obj1->getValues(data->t,sel,0,0);
	data->obj2->getValues(data->t,sel,0,0);
	
	tracer->Calculate();
}

void Display::display()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glColor3d(1,0,0);
	
	glBegin(GL_POINTS);
	glColor3d(1,0,0);
	
	tracer->Draw();
	
	glVertex2f(data->obj1->x,data->obj1->y);
	glVertex2f(data->obj2->x,data->obj2->y);
	glEnd();
	dataprinter->output();
	
	glutSwapBuffers();
}
