#include <math.h>
#include <GL/freeglut.h>
#include <GL/glu.h>
#include <stdlib.h>
#include <string.h>
#include "model.h"

Model *model;

static void resize(int width, int height)
{
	model->resizer->resize(width, height);
}

static void menuSelect(int mode)
{
	model->menu->menuSelect(mode);
}

static void display(void)
{
	model->display->calculate();
	model->display->display();
}

static void key(unsigned char key, int x, int y)
{
	model->keyboard->key(key, x, y);
}

static void idle(void)
{
    glutPostRedisplay();
}

void SetupModel()
{
	model = new Model();
	model->Setup();
};

void SetupWindow(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitWindowSize(1920, 1080);
	glutInitWindowPosition(0, 0);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	glutCreateWindow("Fizyka");
}

void SetupMenu()
{
	glutCreateMenu(menuSelect);
	model->menu->addMenu();
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
	model->Clean();
	delete model;
}

int main(int argc, char *argv[])
{
	SetupModel();
	SetupWindow(argc, argv);
	SetupMenu();
	SetupGlutCallbacks();
    model->display->setup();
	model->data->setup();
    glutMainLoop();
	Clean();
    return EXIT_SUCCESS;
}
