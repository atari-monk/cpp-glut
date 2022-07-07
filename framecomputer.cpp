#include "framecomputer.h"

void FrameComputer::Compute()
{
	if(data->active)
	{
		data->t=timer->getElapsedTimeInSec();
	}
	
	int sel = 2;
	data->obj1->getValues(data->t, sel, 0, 0);
	data->obj2->getValues(data->t, sel, 0, 0);
	
	tracer->Calculate();
}
