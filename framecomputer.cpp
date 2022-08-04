#include "framecomputer.h"

void FrameComputer::Compute()
{
	if(data->active)
	{
		data->t=timer->getElapsedTimeInSec();
	}
	
	int sel = 8;
	data->obj1->getValues(data->t, sel);
	data->obj2->getValues(data->t, sel);
	
	tracer->Calculate();
}
