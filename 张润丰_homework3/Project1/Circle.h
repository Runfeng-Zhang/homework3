#pragma once


//定义了圆形的类，参数分别代表半径和输入的长度单位是厘米还是英寸。

class Circle
{
private:
	double r;
	bool u;
public:
	/*
	将圆的半径的单位转化为厘米
	*/
	double getRadius();
	
	
	/*
	计算圆的面积，并且让结果以平方厘米的单位输出
	*/
	double area();
	Circle(double r0=0,bool u0=0);
	~Circle();
};

