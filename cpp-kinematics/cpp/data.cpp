#include "../h/data.h"

Data::Data()
{
	obj1 = new obj(400, 220);
	obj2 = new obj(600, 220);
	select = 1;
}

Data::~Data()
{
	delete obj1;
	delete obj2;
}

void Data::setup()
{
	obj1->reset();
	obj2->reset();
	switch(select)
	{
		case 1:
		//constant speed
		obj1->set_v(0, 10);
		obj2->set_v(0, 15);
		break;
		case 2:
		//constant acceleration
		obj1->set_a(1, 5);
		obj2->set_a(1, 4);
		break;
		case 3:
		//deceleration
		break;
		break;
		case 4:
		//deceleration
		obj1->set_v(10, 100);
		obj2->set_v(30, 150);
		break;
		case 5:
		//movement
		break;
		case 6:
		//movement
		break;
		case 7:
		//Projectile motion
		break;
		case 8:
		//Horizontal projection
		break;
	}
}
