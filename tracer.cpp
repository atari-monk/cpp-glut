#include "tracer.h"

#include <GL/freeglut.h>

void Tracer::Calculate()
{
	if(data->t - t0 >= 0.6 
		&& index < 100)
	{
		tabx[index] = data->obj1->x;
		taby[index] = data->obj1->y;
		index++;
		t0=data->t;
	}
}

void Tracer::Draw()
{
	for(int a=0; a < index; a++)
		glVertex2f(tabx[a], taby[a]);
}
