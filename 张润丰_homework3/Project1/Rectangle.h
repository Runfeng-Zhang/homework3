#pragma once


/*定义了一个长方形的类，参数分别为长、宽以及输入的长度单位的类型*/


class Rectangle
{
private:
	double l, w;
	bool u;
public:
	/*将长方形的长转为厘米作为单位输出*/
	double getLength();


	/*将长方形的宽转为厘米作为单位输出*/
	double getWidth();


	/*计算长方形的面积，并且结果以平方厘米作为单位输出*/
	double area();
	Rectangle(double l0=0,double w0=0,bool u0=0);
	~Rectangle();
};

