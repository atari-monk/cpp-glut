#include "dataprinter.h"

void DataPrinter::output()
{
	printer->output(0, 30, "t: ", 1 , 0 , 1);
	printer->output(20, 30, data->t, 4, 1 , 0 , 1);
	
	const int dy1 = 10;
	printer->output(0, 70 + dy1, "obj1->x: ", 0 , 0 , 1);
	printer->output(95, 70 + dy1, data->obj1->x, 4, 0 , 0 , 1);
	printer->output(0, 50 + dy1, "obj1->y: ", 0 , 0 , 1);
	printer->output(95, 50 + dy1, data->obj1->y, 4, 0 , 0 , 1);
	
	const int dy2 = 60;
	printer->output(0, 70 + dy2, "obj2->x: ", 1 , 0 , 0);
	printer->output(95, 70 + dy2, data->obj2->x, 4, 1 , 0 , 0);
	printer->output(0, 50 + dy2, "obj2->y: ", 1 , 0 , 0);
	printer->output(95, 50 + dy2, data->obj2->y, 4, 1 , 0 , 0);
}
