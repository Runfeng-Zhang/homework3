#include "Triangle.h"
double Triangle::area()
{
	return h * b / 2;

}


double Triangle::getBottom()
{
	return b;
}


double Triangle::getHeight()
{
	return h;
}


Triangle::Triangle(double b0,double h0,bool u0)
{
	u = u0;
	if (!u)
	{
		b = b0;
		h = h0;
	}
	if (u)
	{
		b = 2.54*b0;
		h = 2.54*h0;
	}
}


Triangle::~Triangle()
{
}
