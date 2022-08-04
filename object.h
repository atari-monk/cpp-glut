class obj
{
public:
	obj(double a,double b,double c);
	~obj();
	
	double t;
	
	double x0,y0,z0;
	double ax0,ay0,vx0,vy0;
	
	double x,y,z;
	double ax,ay,vx,vy;
	
	void setPosition(double a,double b,double c);
	void set_a(double x,double y);
	void set_v(double x,double y);
	void reset();
	void getValues(double t,int s);
};
