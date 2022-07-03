/*
cel: dane i metody cia³a fizycznego
*/
class obj
{
public:
obj(float a,float b,float c);
~obj();

float t;

float x0,y0,z0;
float ax0,ay0,vx0,vy0;

float x,y,z;
float ax,ay,vx,vy;


void setPosition(float a,float b,float c);
void set_a(float x,float y);
void set_v(float x,float y);
void reset();
void getValues(float t,int s,float x1,float y1);
};
