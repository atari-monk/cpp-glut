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

static void display(void)
{
	displayPtr->calculate();
	displayPtr->display();
}

static void key(unsigned char key, int x, int y)
{
	keyboardPtr->key(key, x, y);
}

static void idle(void)
{
    glutPostRedisplay();
}

void SetupDI()
{
	Keyboard keyboard;
	keyboardPtr = &keyboard;
	Resizer resizer;
	resizerPtr = &resizer;
	Printer printer;
	printerPtr = &printer;
	Timer timer;
	timerPtr = &timer;
	Data data;
	dataPtr = &data;
	menuPtr = new Menu(&timer, &data);
	dataprinterPtr = new DataPrinter(&printer, &data);
	tracerPtr = new Tracer(&data);
	displayPtr = new Display(&timer, &data, tracerPtr, dataprinterPtr);
};

void SetupWindow(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitWindowSize(w,h);
	glutInitWindowPosition(0,0);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	glutCreateWindow("Fizyka");
}

void SetupMenu()
{
	glutCreateMenu(menuSelect);
	menuPtr->addMenu();
}

void SetupGlutCallbacks()
{
	glutReshapeFunc(resize);
	glutDisplayFunc(display);
	glutKeyboardFunc(key);
	glutIdleFunc(idle);
}

void Clean()
{
	delete menuPtr;
	delete dataprinterPtr;
	delete tracerPtr;
}

int main(int argc, char *argv[])
{
	Keyboard keyboard;
	keyboardPtr = &keyboard;
	Resizer resizer;
	resizerPtr = &resizer;
	Printer printer;
	printerPtr = &printer;
	Timer timer;
	timerPtr = &timer;
	Data data;
	dataPtr = &data;
	menuPtr = new Menu(&timer, &data);
	dataprinterPtr = new DataPrinter(&printer, &data);
	tracerPtr = new Tracer(&data);
	displayPtr = new Display(&timer, &data, tracerPtr, dataprinterPtr);
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
	
	Clean();
	
    return EXIT_SUCCESS;
}
