#include <math.h>
#include <GL/freeglut.h>
#include <GL/glu.h>
#include <stdlib.h>
#include <string.h>
#include "timer.h"
#include "keyboard.h"
#include "resizer.h"
#include "display.h"
#include "printer.h"
#include "data.h"
#include "menu.h"
#include "dataprinter.h"
#include "tracer.h"

Keyboard *keyboardPtr;
Resizer *resizerPtr;
Display *displayPtr;
Printer *printerPtr;
Menu *menuPtr;
Timer *timerPtr;
Data *dataPtr;
DataPrinter *dataprinterPtr;
Tracer *tracerPtr;

int w=1000,h=700;

static void resize(int width, int height)
{
	resizerPtr->resize(width, height);
}

static void menuSelect(int mode)
{
	menuPtr->menuSelect(mode);
}

void ShowOldDisplay();

static void display(void)
{
    ShowOldDisplay();
	//displayPtr->display();
}

void ShowOldDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glColor3d(1,0,0);
	if(dataPtr->active)
	{
		dataPtr->t=timerPtr->getElapsedTimeInSec();
	}
		
	glBegin(GL_POINTS);
	glColor3d(1,0,0);
	
	int sel = 2;
	dataPtr->obj1->getValues(dataPtr->t,sel,0,0);
	dataPtr->obj2->getValues(dataPtr->t,sel,0,0);
	
	tracerPtr->Calculate();
	tracerPtr->Draw();
	
	glVertex2f(dataPtr->obj1->x,dataPtr->obj1->y);
	glVertex2f(dataPtr->obj2->x,dataPtr->obj2->y);
	glEnd();
	
	dataprinterPtr->output();
	glutSwapBuffers();
};

static void key(unsigned char key, int x, int y)
{
	keyboardPtr->key(key, x, y);
}

static void idle(void)
{
    glutPostRedisplay();
}

int main(int argc, char *argv[])
{
	Keyboard keyboard;
	keyboardPtr = &keyboard;
	Resizer resizer;
	resizerPtr = &resizer;
	Display displayObj;
	displayPtr = &displayObj;
	Printer printer;
	printerPtr = &printer;
	Timer timer;
	timerPtr = &timer;
	Data data;
	dataPtr = &data;
	menuPtr = new Menu(&timer, &data);
	dataprinterPtr = new DataPrinter(&printer, &data);
	tracerPtr = new Tracer(&data);
	
	glutInit(&argc, argv);
    glutInitWindowSize(w,h);
    glutInitWindowPosition(0,0);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutCreateWindow("Fizyka");
    glutCreateMenu(menuSelect);
	menuPtr->addMenu();
	
	glutReshapeFunc(resize);
    glutDisplayFunc(display);
    glutKeyboardFunc(key);
    glutIdleFunc(idle);
  
    glClearColor(1,1,1,1);
    glPointSize(4);

	//dataPtr->obj1->set_v(50000,500);
	//dataPtr->obj2->set_v(50000,500);
	dataPtr->obj1->set_a(1,5);
    dataPtr->obj2->set_a(1,4);
    glutMainLoop();
	
	delete menuPtr;
	delete dataprinterPtr;
	delete tracerPtr;
    return EXIT_SUCCESS;
}
