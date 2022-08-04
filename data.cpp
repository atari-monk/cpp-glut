#include "data.h"

Data::Data()
{
	obj1 = new obj(500,220,0);
	obj2 = new obj(400,220,0);
}

Data::~Data()
{
	delete obj1;
	delete obj2;
}

void Data::setup()
{
	obj1->set_v(0,10);
	obj2->set_v(0,15);
	//obj1->set_a(1,5);
	//obj2->set_a(1,4);
}
