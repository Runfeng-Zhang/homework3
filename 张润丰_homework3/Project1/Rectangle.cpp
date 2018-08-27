#include "Rectangle.h"


double Rectangle::area()
{
	return l * w;
}


double Rectangle::getLength()
{
	return l;
}

double Rectangle::getWidth()
{
	return w;
}
Rectangle::Rectangle(double l0,double w0,bool u0)
{
	u = u0;
	if (!u)
	{
		l = l0;
		w = w0;
	}
	if (u)
	{
		l = 2.54*l0;
		w = 2.54*w0;
	}
}


Rectangle::~Rectangle()
{
}
