#pragma once
class Triangle 
{
private:
	double b, h;
	bool u;
public:
	double getBottom();
	double getHeight();
	double area();
	Triangle(double b0 = 0, double h0 = 0,bool u0=0);
	~Triangle();
};

