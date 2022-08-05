#ifndef PRINTER_H
#define PRINTER_H

#include <GL/freeglut.h>

class Printer {
private:
	void *font = GLUT_BITMAP_TIMES_ROMAN_24;
	char buffer[10];
public:
	void output(int x, int y, char *text, double r, double g, double b);
	void output(int x, int y, double value, int numofdigits, double r, double g, double b);
};

#endif
