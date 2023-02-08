#include "../h/object.h"
#include "math.h"

obj::obj(double x, double y)
{
	setPosition(x, y);     
}

obj::~obj()
{   
}

void obj::setPosition(double x, double y)
{
	x0=x;
	y0=y;    
}

void obj::set_a(double x,double y)
{
	ax=x;
	ay=y;     
}

void obj::set_v(double x,double y)
{
	vx=x;
	vy=y;     
}

void obj::reset()
{
	ax0 = 0.0;
	ay0 = 0.0;
	vx0 = 0.0;
	vy0 = 0.0;
	//x0 = 0.0;
	//y0 = 0.0;
	ax = 0.0;
	ay = 0.0;
	vx = 0.0;
	vy = 0.0;
	//x = 0.0;
	//y = 0.0;  
}

void obj::getValues(double t, int s)
{
	switch(s)
	{
		case 1:
		//constant speed
		x=x0+vx*t;
		y=y0+vy*t;
		break;
		case 2:
		//constant acceleration
		vx=vx0+ax*t;
		vy=vy0+ay*t; 
		x=x0+vx*t;
		y=y0+vy*t;
		break;
		case 3:
		//deceleration
		x=x0;
		y=y0 + (300*t)/(1+t);
		break;
		case 4:
		//deceleration
		if(400-y>0)
		{
			vy=sqrt(400-y); 
			x=x0+vx*t;
			y=y0+vy*t;
		}
		break;
		case 5:
		//movement 
		x=x0 + 5*sin(0.7*3.14*(t-t*t));
		y=y0 + 10*sin(0.1*3.14*(t-t*t));
		break;
		case 6:
		//movement 
		x=x0+ 12*t-t*t;
		y=y0+ 24*t-t*t;
		break;
		case 7:
		//Projectile motion
		vx=25;
		vy=-(40-2*t); 
		x=x0+vx*t;
		y=y0+vy*t;
		break;
		case 8:
		//Horizontal projection
		vx=46;
		vy=9*t; 
		x=x0+vx*t;
		y=y0+vy*t;
		break;
	}
}
