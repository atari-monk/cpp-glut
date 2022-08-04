#include "object.h"
#include "math.h"

obj::obj(double a,double b,double c)
{
	setPosition(a,b,c);     
}

obj::~obj()
{   
}

void obj::setPosition(double a,double b,double c)
{
	x0=a;
	y0=b;
	z0=c;    
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
