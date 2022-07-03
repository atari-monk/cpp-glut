#include "object.h"
#include "math.h"
obj::obj(float a,float b,float c)
{
setPosition(a,b,c);     
}
obj::~obj()
{   
}
void obj::setPosition(float a,float b,float c)
{
x0=a;
y0=b;
z0=c;    
}
void obj::set_a(float x,float y)
{
ax=x;
ay=y;     
}
void obj::set_v(float x,float y)
{
vx=x;
vy=y;     
}
void obj::getValues(float t,int s,float x1,float y1)
{
switch(s)
{
case 1://ruch jednostajny
x=x0+vx*t;
y=y0+vy*t;
break;
case 2://ruch przyspieszony
vx=vx0+ax*t;
vy=vy0+ay*t; 
x=x0+vx*t;
y=y0+vy*t;
break;
case 3://ruch opuŸniony cialo osiagnie 300 w t->do nieskoñczonoœci
x=x0;
y=y0+ (300*t)/(1+t);
break;
case 4://ruch opuŸniony 
vx=0;
if(1000-5*y>0){vy=sqrt(1000-5*y); 
x=x0+vx*t;
y=y0+vy*t;}
break;
case 5://ruch 
x=x0;
y=y0+ 100*sin(0.5*3.14*(2*t-t*t*t));
break;
case 6://ruch 
x=x0;
y=y0+ 60*t-t*t*t;
break;
case 7://rzut ukosny
vx=6;
vy=-(30-2*t); 
x=x0+vx*t;
y=y0+vy*t;
break;
case 8://rzut poziomy
vx=46;
vy=9*t; 
x=x0+vx*t;
y=y0+vy*t;
break;
}
}
