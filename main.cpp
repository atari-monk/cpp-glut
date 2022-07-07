#include <math.h>
#include <GL/freeglut.h>
#include <GL/glu.h>
#include <stdlib.h>
#include <string.h>
#include "model.h"
#include "glutapp.h"

Model *model;
GlutApp *glutApp;

static void menuSelect(int mode)
{
	model->menu->menuSelect(mode);
}

static void resize(int width, int height)
{
	model->resizer->resize(width, height);
}

static void display()
{
	model->display->calculate();
	model->display->display();
}

static void key(unsigned char key, int x, int y)
{
	model->keyboard->key(key, x, y);
}

static void idle()
{
    glutPostRedisplay();
}

void SetupGlutCallbacks()
{
	glutCreateMenu(menuSelect);
	glutReshapeFunc(resize);
	glutDisplayFunc(display);
	glutKeyboardFunc(key);
	glutIdleFunc(idle);
}

int main(int argc, char *argv[])
{
	model = new Model();
	glutApp = new GlutApp(model);
	
	glutApp->setup(argc, argv);
	SetupGlutCallbacks();
	glutApp->setup();
	glutApp->run();
	glutApp->clean();
	
	delete model;
	delete glutApp;
	
    return EXIT_SUCCESS;
}
