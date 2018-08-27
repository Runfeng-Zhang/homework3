#pragma once
#include"iostream"
#include"iomanip"
using namespace std;
/*
* 显示出计算的图形类型，用户输入的长度（以厘米作为单位），以及最后的面积计算结果（平方厘米作为单位）。
* shape:形状代码
* radius:圆形的半径
* sideWidth:正方形的边长
* length:长方形的长
* width:长方形的宽
* bottom:三角形的底
* height:三角形的高
* area: 图形面积
*/
void show(int shape, double radius = 0, double sideLength = 0, double length = 0, double width = 0, double bottom = 0, double height = 0, double area = 0)
{
	cout << endl;
	if (shape == 1)
	{
		cout << "该圆的半径为" << fixed << setprecision(3) << radius;
		cout << "厘米,计算所得的面积为" << fixed << setprecision(3) << area;
		cout << "平方厘米。" << endl << endl;
	}
	if (shape == 2)
	{
		cout << "该正方形的边长为：" << fixed << setprecision(3) << sideLength;
		cout << "厘米，计算所得的面积为" << fixed << setprecision(3) << area;
		cout << "平方厘米。" << endl << endl;
	}
	if (shape == 3)
	{
		cout << "该长方形的长为：" << fixed << setprecision(3) << length;
		cout << "厘米，宽为：" << fixed << setprecision(3) << width;
		cout << "厘米，面积为：";
		cout << fixed << setprecision(3) << area << "平方厘米。" << endl;
	}
	if (shape == 4)
	{
		cout << "该三角形的底为：" << fixed << setprecision(3) << bottom;
		cout << "厘米，高为：" << fixed << setprecision(3) << height;
		cout << "厘米，面积为：";
		cout << fixed << setprecision(3) << area << "平方厘米。" << endl;
	}
	cout << "按0继续计算，按1键退出程序" << endl << endl;
}
void check(double radius = 0, double sideLength = 0, double length = 0, double width = 0, double bottom = 0, double height = 0)
{
	if (radius < 0 || sideLength < 0 || length < 0 || width < 0 || bottom < 0 || height < 0)
		cout << "请输入大于0的参数！" << endl;
}