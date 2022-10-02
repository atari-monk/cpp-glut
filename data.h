#ifndef DATA_H
#define DATA_H

#include "h/object.h"

class Data {
public:
	int select = 0;
	float t = 0;
	bool active=false;
	obj *obj1;
	obj *obj2;
	Data();
	~Data();
	void setup();
};

#endif
