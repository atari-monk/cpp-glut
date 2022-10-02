#include "../h/resizer.h"
#include <GL/freeglut.h>
#include <GL/glu.h>

void Resizer::resize(int width, int height)
{
	glViewport(0, 0, width, height);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, width, height, 0);
	glMatrixMode(GL_MODELVIEW);
}
