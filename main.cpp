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

int w=1920,h=1080;

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
	keyboardPtr = new Keyboard();
	resizerPtr = new Resizer();
	printerPtr = new Printer();
	timerPtr = new Timer();
	dataPtr = new Data();
	menuPtr = new Menu(timerPtr, dataPtr);
	dataprinterPtr = new DataPrinter(printerPtr, dataPtr);
	tracerPtr = new Tracer(dataPtr);
	displayPtr = new Display(timerPtr, dataPtr, tracerPtr, dataprinterPtr);
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
	delete keyboardPtr;
	delete resizerPtr;
	delete printerPtr;
	delete timerPtr;
	delete dataPtr;
	delete menuPtr;
	delete dataprinterPtr;
	delete tracerPtr;
	delete displayPtr;
}

int main(int argc, char *argv[])
{
	SetupDI();
	SetupWindow(argc, argv);
	SetupMenu();
	SetupGlutCallbacks();
    displayPtr->setup();
	dataPtr->setup();
    glutMainLoop();
	Clean();
    return EXIT_SUCCESS;
}
