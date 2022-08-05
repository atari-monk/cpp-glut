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
	glBegin(GL_POINTS);
	tracer->Draw();
	glColor3d(0, 0, 1);
	glVertex2f(data->obj1->x, data->obj1->y);
	glColor3d(1, 0, 0);
	glVertex2f(data->obj2->x, data->obj2->y);
	glEnd();
	dataprinter->output();
	glutSwapBuffers();
}
