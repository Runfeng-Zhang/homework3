#pragma once

/*定义一个正方形的类*/

class Square
{
private:
	double s;
	bool u;
public:
	/*将正方形的边长的单位转为厘米制*/
	double getSideWidth();


	/*计算正方形的面积，并且以平方厘米作为单位输出*/
	double area();


	Square(double s0=0,bool u0=0);
	~Square();
};

