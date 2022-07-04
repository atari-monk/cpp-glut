#ifndef PRINTER_H
#define PRINTER_H

#include <GL/freeglut.h>

class Printer {
private:
	void *font = GLUT_BITMAP_TIMES_ROMAN_24;
public:
	void output(int x, int y, char *string);
};

#endif
