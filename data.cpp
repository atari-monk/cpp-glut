#include "data.h"

Data::Data()
{
	obj1 = new obj(500,220,0);
	obj2 = new obj(600,220,0);
}

Data::~Data()
{
	delete obj1;
	delete obj2;
}
