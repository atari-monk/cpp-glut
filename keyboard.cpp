#include "keyboard.h"
#include <GL/freeglut.h>

Keyboard::Keyboard()
{};

void Keyboard::key(unsigned char key, int x, int y)
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
