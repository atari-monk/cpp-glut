#include "display.h"
#include <GL/freeglut.h>
#include <GL/glu.h>

void Display::setup()
{
	glClearColor(1,1,1,1);
	glPointSize(4);
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
