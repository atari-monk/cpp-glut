#include "tracer.h"

#include <GL/freeglut.h>

void Tracer::Calculate()
{
	if(data->t - t0 >= 0.6 
		&& index < 100)
	{
		x1[index] = data->obj1->x;
		y1[index] = data->obj1->y;
		x2[index] = data->obj2->x;
		y2[index] = data->obj2->y;
		index++;
		t0=data->t;
	}
}

void Tracer::Draw()
{
	for(int a=0; a < index; a++)
	{
		glColor3d(0, 0, 1);
		glVertex2f(x1[a], y1[a]);
		glColor3d(1, 0, 0);
		glVertex2f(x2[a], y2[a]);
	}
}

void Tracer::Reset()
{
	index = 0;
	t0=0;
}
