#include <math.h>
#include <GL/freeglut.h>
#include <GL/glu.h>
#include <stdlib.h>
#include "HiResTimer.h"
#include "object.h"
#include <string.h>

int w=1000,h=700;
void
output(int x, int y, char *string);
CHiResTimer timer;
float t;
bool active=false;
obj obj1(500,220,0);
obj obj2(600,220,0);

static void 
resize(int width, int height)
{
    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, width, height, 0);
    glMatrixMode(GL_MODELVIEW);
}

void
menu_select(int mode)
{
  switch (mode) {
  case 1:
  active=true;t=0;
 
  break;
  case 2:
  active=false;  
  
  break;
  }
}

static void 
display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3d(1,0,0);
    static char str[10];
    if(active)t+=timer.GetElapsedSeconds();
    
 

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
    
    output(0, 30, gcvt(t,4,str));
    output(0, 50, gcvt(obj1.y,4,str));
    output(0, 70, gcvt(obj1.x,4,str));
    glutSwapBuffers();
}

void 
key(unsigned char key, int x, int y)
{
    switch (key) 
    {
        case 27 : 
        case 'q':
            exit(0);
            break;
    }

    glutPostRedisplay();
}

static void 
idle(void)
{
    glutPostRedisplay();
}
void *font = GLUT_BITMAP_TIMES_ROMAN_24;
void
output(int x, int y, char *string)
{
  int len, i;

  glRasterPos2f(x, y);
  len = (int) strlen(string);
  for (i = 0; i < len; i++) {
    glutBitmapCharacter(font, string[i]);
  }
}

int 
main(int argc, char *argv[])
{
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
    timer.init();

	obj1.set_v(50000,500);
    obj2.set_a(0,1);
    glutMainLoop();

    return EXIT_SUCCESS;
}
