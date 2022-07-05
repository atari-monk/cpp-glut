#include "printer.h"

void Printer::output(int x, int y, char *string)
{
	int len, i;
	glRasterPos2f(x, y);
	len = (int) strlen(string);
	for (i = 0; i < len; i++) {
		glutBitmapCharacter(font, string[i]);
	}
}

void Printer::output(int x, int y, double value, int numofdigits)
{
	output(x, y, gcvt(value, numofdigits, buffer));
}
