#include <math.h>
#include <GL/freeglut.h>
#include <GL/glu.h>
#include <stdlib.h>
#include <string.h>
#include "hirestimer.h"
#include "object.h"
#include "keyboard.h"
#include "resizer.h"
#include "display.h"
#include "printer.h"

Keyboard *keyboardPtr;
Resizer *resizerPtr;
Display *displayPtr;
Printer *printerPtr;
int w=1000,h=700;
void
output(int x, int y, char *string);
HiResTimer timer;
float t;
bool active=false;
obj obj1(500,220,0);
obj obj2(600,220,0);

static void 
resize(int width, int height)
{
	resizerPtr->resize(width, height);
}

void
menu_select(int mode)
{
  switch (mode) {
  case 1:
	  active=true;
	  timer.init();
  break;
  case 2:
	  active=false;
	  t=0;
  break;
  }
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
	static char str[10];
	if(active)
	{
		t+=timer.GetElapsedSeconds();
	}
		
	glBegin(GL_POINTS);
	glColor3d(1,0,0);
	
	obj1.getValues(t,8,0,0);
	//obj2.getValues(t,2,0,0);
	
	static float tabx[100],taby[100],t0=0;
	static int i=0;
	if(((t-t0) >= .4) && i<100){tabx[i]=obj1.x;taby[i]=obj1.y;i++;t0=t;}
	for(int a=0;a<i;a++)
		glVertex2f(tabx[a],taby[a]);
	
	glVertex2f(obj1.x,obj1.y);
	//glVertex2f(obj2.x,obj2.y);
	glEnd();
	
	printerPtr->output(0, 30, gcvt(t,4,str));
	printerPtr->output(0, 50, gcvt(obj1.y,4,str));
	printerPtr->output(0, 70, gcvt(obj1.x,4,str));
	glutSwapBuffers();
};

static void 
key(unsigned char key, int x, int y)
{
	keyboardPtr->key(key, x, y);
}

static void 
idle(void)
{
    glutPostRedisplay();
}


int 
main(int argc, char *argv[])
{
	Keyboard keyboard;
	keyboardPtr = &keyboard;
	Resizer resizer;
	resizerPtr = &resizer;
	Display displayObj;
	displayPtr = &displayObj;
	Printer printer;
	printerPtr = &printer;
    glutInit(&argc, argv);
    glutInitWindowSize(w,h);
    glutInitWindowPosition(0,0);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutCreateWindow("Fizyka");
    glutReshapeFunc(resize);
    glutDisplayFunc(display);
    glutKeyboardFunc(key);
    glutIdleFunc(idle);
    glutCreateMenu(menu_select);
    glutAddMenuEntry("Start",1);
    glutAddMenuEntry("Stop",2);
    glutAttachMenu(GLUT_RIGHT_BUTTON);
  
    glClearColor(1,1,1,1);
    glPointSize(4);

	obj1.set_v(50000,500);
    obj2.set_a(0,1);
    glutMainLoop();

    return EXIT_SUCCESS;
}
