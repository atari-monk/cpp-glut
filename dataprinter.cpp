#include "dataprinter.h"

void DataPrinter::output()
{
	const int rowX1 = 10;
	const int rowX2 = 170;
	const int XComma = 55;
	const int rowX3 = 65;
	
	const int rowY1 = 30;
	const int rowY2 = 60;
	const int rowY3 = 90;
	const int rowY4 = 120;
	const int rowY5 = 150;
	const int rowY6 = 180;
	const int rowY7 = 210;
	const int rowY8 = 240;
	const int rowY9 = 270;
	const int rowY10 = 300;
	const int rowY11 = 330;
	const int rowY12 = 360;
	const int rowY13 = 390;
	const int rowY14 = 420;
	
	printer->output(rowX1, rowY1, "select: ", 0 , 0 , 0);
	printer->output(rowX2, rowY1, data->select, 4, 0 , 0 , 0);

	printer->output(rowX1, rowY2, "time: ", 0 , 0 , 0);
	printer->output(rowX2, rowY2, data->t, 4, 0 , 0 , 0);
	
	//obj1
	
	printer->output(rowX1, rowY3, "obj1->(x0, y0): ", 0 , 0 , 1);
	printer->output(rowX2, rowY3, data->obj1->x0, 4, 0 , 0 , 1);
	printer->output(rowX2 + XComma, rowY3, ", ", 0 , 0 , 1);
	printer->output(rowX2 + rowX3, rowY3, data->obj1->y0, 4, 0 , 0 , 1);
	
	printer->output(rowX1, rowY4, "obj1->(ax0, ay0): ", 0 , 0 , 1);
	printer->output(rowX2, rowY4, data->obj1->ax0, 4, 0 , 0 , 1);
	printer->output(rowX2 + XComma, rowY4, ", ", 0 , 0 , 1);
	printer->output(rowX2 + rowX3, rowY4, data->obj1->ay0, 4, 0 , 0 , 1);
	
	printer->output(rowX1, rowY5, "obj1->(vx0, vy0): ", 0 , 0 , 1);
	printer->output(rowX2, rowY5, data->obj1->vx0, 4, 0 , 0 , 1);
	printer->output(rowX2 + XComma, rowY5, ", ", 0 , 0 , 1);
	printer->output(rowX2 + rowX3, rowY5, data->obj1->vy0, 4, 0 , 0 , 1);
	
	printer->output(rowX1, rowY6, "obj1->(x, y): ", 0 , 0 , 1);
	printer->output(rowX2, rowY6, data->obj1->x, 4, 0 , 0 , 1);
	printer->output(rowX2 + XComma, rowY6, ", ", 0 , 0 , 1);
	printer->output(rowX2 + rowX3, rowY6, data->obj1->y, 4, 0 , 0 , 1);
	
	printer->output(rowX1, rowY7, "obj1->(vx, vy): ", 0 , 0 , 1);
	printer->output(rowX2, rowY7, data->obj1->vx, 4, 0 , 0 , 1);
	printer->output(rowX2 + XComma, rowY7, ", ", 0 , 0 , 1);
	printer->output(rowX2 + rowX3, rowY7, data->obj1->vy, 4, 0 , 0 , 1);
	
	printer->output(rowX1, rowY8, "obj1->(ax, ay): ", 0 , 0 , 1);
	printer->output(rowX2, rowY8, data->obj1->ax, 4, 0 , 0 , 1);
	printer->output(rowX2 + XComma, rowY8, ", ", 0 , 0 , 1);
	printer->output(rowX2 + rowX3, rowY8, data->obj1->ay, 4, 0 , 0 , 1);
	
	//obj2
	printer->output(rowX1, rowY9, "obj2->(x0, y0): ", 1 , 0 , 0);
	printer->output(rowX2, rowY9, data->obj2->x0, 4, 1 , 0 , 0);
	printer->output(rowX2 + XComma, rowY9, ", ", 1 , 0 , 0);
	printer->output(rowX2 + rowX3, rowY9, data->obj2->y0, 4, 1 , 0 , 0);
	
	printer->output(rowX1, rowY10, "obj2->(ax0, ay0): ", 1 , 0 , 0);
	printer->output(rowX2, rowY10, data->obj2->ax0, 4, 1 , 0 , 0);
	printer->output(rowX2 + XComma, rowY10, ", ", 1 , 0 , 0);
	printer->output(rowX2 + rowX3, rowY10, data->obj2->ay0, 4, 1 , 0 , 0);
	
	printer->output(rowX1, rowY11, "obj2->(vx0, vy0): ", 1 , 0 , 0);
	printer->output(rowX2, rowY11, data->obj2->vx0, 4, 1 , 0 , 0);
	printer->output(rowX2 + XComma, rowY11, ", ", 1 , 0 , 0);
	printer->output(rowX2 + rowX3, rowY11, data->obj2->vy0, 4, 1 , 0 , 0);
	
	printer->output(rowX1, rowY12, "obj2->(x, y): ", 1 , 0 , 0);
	printer->output(rowX2, rowY12, data->obj2->x, 4, 1 , 0 , 0);
	printer->output(rowX2 + XComma, rowY12, ", ", 1 , 0 , 0);
	printer->output(rowX2 + rowX3, rowY12, data->obj2->y, 4, 1 , 0 , 0);
	
	printer->output(rowX1, rowY13, "obj2->(vx, vy): ", 1 , 0 , 0);
	printer->output(rowX2, rowY13, data->obj2->vx, 4, 1 , 0 , 0);
	printer->output(rowX2 + XComma, rowY13, ", ", 1 , 0 , 0);
	printer->output(rowX2 + rowX3, rowY13, data->obj2->vy, 4, 1 , 0 , 0);
	
	printer->output(rowX1, rowY14, "obj2->(ax, ay): ", 1 , 0 , 0);
	printer->output(rowX2, rowY14, data->obj2->ax, 4, 1 , 0 , 0);
	printer->output(rowX2 + XComma, rowY14, ", ", 1 , 0 , 0);
	printer->output(rowX2 + rowX3, rowY14, data->obj2->ay, 4, 1 , 0 , 0);
}
