#include "tracer.h"

#include <GL/freeglut.h>

void Tracer::Calculate()
{
	if(data->t - t0 >= 0.6 
		&& i < 100)
	{
		tabx[i] = data->obj1->x;
		taby[i] = data->obj1->y;
		i++;
		t0=data->t;
	}
}

void Tracer::Draw()
{
	for(int a=0; a < i; a++)
		glVertex2f(tabx[a], taby[a]);
}
