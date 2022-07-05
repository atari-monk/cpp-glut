#include "dataprinter.h"

void DataPrinter::output()
{
	printer->output(0, 30, data->t, 4);
	printer->output(0, 50, data->obj1->y, 4);
	printer->output(0, 70, data->obj1->x, 4);
}
