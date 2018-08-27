#include "Circle.h"
/*
计算圆形的面积（始终以平方厘米为单位）。
*/
double Circle::area()
{
	return 3.14159*r*r;
}


double Circle::getRadius()
{
	return r;
}
Circle::Circle(double r0,bool u0)
{
	u = u0;
	if (!u)
		r = r0;
	if (u)
		r = 2.54*r0;
}


Circle::~Circle()
{
}
