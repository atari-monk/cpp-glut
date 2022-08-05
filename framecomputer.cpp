#include "framecomputer.h"

void FrameComputer::Compute()
{
	if(data->active)
	{
		data->t=timer->getElapsedTimeInSec();
	}
	
	data->obj1->getValues(data->t, data->select);
	data->obj2->getValues(data->t, data->select);
	
	tracer->Calculate();
}
