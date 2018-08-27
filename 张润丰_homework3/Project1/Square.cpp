#include "Square.h"


double Square::area()
{
	return s * s;

}


double Square::getSideWidth()
{
	return s;
}


Square::Square(double s0,bool u0)
{
	u = u0;
	if (!u)
		s = s0;
	if (u)
		s = 2.54*s0;
}


Square::~Square()
{
}
