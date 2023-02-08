class obj
{
public:
	obj(double x,double y);
	~obj();
	
	double ax0, ay0;
	double vx0, vy0;
	double x0, y0;
	
	double x, y;
	double ax, ay;
	double vx, vy;
	
	void setPosition(double x, double y);
	void set_a(double x, double y);
	void set_v(double x, double y);
	void reset();
	void getValues(double t, int select);
};
