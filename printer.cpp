#include "printer.h"

void Printer::output(int x, int y, char *text, double r, double g, double b)
{
	glColor3d(r, g, b);
	int len, i;
	glRasterPos2f(x, y);
	len = (int) strlen(text);
	for (i = 0; i < len; i++) {
		glutBitmapCharacter(font, text[i]);
	}
}

void Printer::output(int x, int y, double value, int numofdigits, double r, double g, double b)
{
	output(x, y, gcvt(value, numofdigits, buffer), r, g, b);
}
