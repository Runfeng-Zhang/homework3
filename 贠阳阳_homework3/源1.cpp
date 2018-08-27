#include<iostream>
#include<cstring>
#include<cmath>
#include<iomanip>
using namespace std;
const double PI = 3.1415926;
double parameter1 = 0, parameter2 = 0;//用于建立对象时用的参数
int end_label = 0;
class Shape
	{
	protected:
		char shapename[30];
	public:
		Shape()
		{
			strcpy_s(shapename, "Shape");
		}
		Shape(char *name)
		{
			strcpy_s(shapename, name);
		}
		char* getName()
		{
			return shapename;
		}
	public:
		virtual double getArea() = 0;
		virtual void getMessage() = 0;
	};
class Circle :public Shape
{
private:
	double m_radius;
public:
	Circle(double radius = 0, const char *name = "Circle")
	{
		strcpy_s(shapename, name);
		m_radius = radius;
	}
	double getArea()
	{
		return PI * pow(m_radius/2, 2);
	}
	void getMessage()
	{
		cout << "图形类型：圆形" << endl;
		cout << "圆的直径：" << setiosflags(ios::fixed) << setprecision(3) << m_radius << "厘米" << endl;
		cout << "圆的面积：" << setiosflags(ios::fixed) << setprecision(3) << getArea() << "平方厘米" << endl<<endl;
	}
};
class Rectangle :public Shape
{
private:
	double m_length,m_width;
public:
	Rectangle(double length=0,double width=0, const char *name = "Rectangle")
	{
		strcpy_s(shapename, name);
		m_length = length;
		m_width = width;
	}
	double getArea()
	{
		return m_length*m_width;
	}
	void getMessage()
	{
		cout << "图形类型：长方形" << endl;
		cout << "长方形的长：" << setiosflags(ios::fixed) << setprecision(3) << m_length << "厘米";
		cout << "		" << "长方形的宽：" << setiosflags(ios::fixed) << setprecision(3) << m_width << "厘米" << endl;
		cout << "长方形的面积：" << setiosflags(ios::fixed) << setprecision(3) << getArea() << "平方厘米" << endl<<endl;
	}
};
class Tritangle :public Shape
{
private:
	double m_bottom, m_high;
public:
	Tritangle(double bottom = 0, double high = 0, const char *name = "Tritangle")
	{
		strcpy_s(shapename, name);
		m_bottom = bottom;
		m_high = high;
	}
	double getArea()
	{
		return m_bottom * m_high/2;
	}
	void getMessage()
	{
		cout << "图形类型：三角形" << endl;
		cout << "三角形的底：" << setiosflags(ios::fixed) << setprecision(3) << m_bottom << "厘米";
		cout << "		"<< "三角形的高：" << setiosflags(ios::fixed) << setprecision(3) << m_high << "厘米" << endl;
		cout << "正方形的面积：" << setiosflags(ios::fixed) << setprecision(3) << getArea() << "平方厘米" << endl<<endl;
	}
};
class Square :public Shape
{
private:
	double m_side_length;
public:
	Square(double side_length=0,const char *name="Square")
	{
		strcpy_s(shapename, name);
		m_side_length = side_length;
	}
	double getArea()
	{
		return pow(m_side_length, 2);
	}
	void getMessage()
	{
		cout << "图形类型：正方形" << endl;
		cout << "正方形的边长：" << setiosflags(ios::fixed) << setprecision(3) << m_side_length << "厘米" << endl;
		cout << "正方形的面积：" << setiosflags(ios::fixed) << setprecision(3) << getArea() << "平方厘米"<<endl<<endl;
	}
};
int main()
{
	int shape_sequence_number = 0;
	int length_unit_sequence_number=0;
	void input_parameter(int,int&);
	void change_unit(int);
	void end_calculate();
	Shape* shape_build(int, double, double);
	while (true)
	{
		cout << "请选择所要计算的图形类型：" << endl<<"1.正方形		2.长方形		3.三角形		4.圆形"<<endl;
	    cout << "请输入序号：";
		cin >> shape_sequence_number;
		Shape * shape = NULL;
		if (shape_sequence_number>=1&& shape_sequence_number<=4)
		{
			input_parameter(shape_sequence_number, length_unit_sequence_number);
			shape=shape_build(shape_sequence_number, parameter1, parameter2);
		}
		else
		{
			cout << endl << endl << "请正确输入计算图形的类型!" << endl << endl << endl;
			continue;
		}
		shape->getMessage();
		end_calculate();
		delete(shape);
	}	
	system("pause");		
	return 0;
}
void input_parameter(int shape_sequence_number,int &length_unit)
{
	char length_unit_Chinese[10];
	void change_unit(int);
	while (true)
	{
		cout <<endl<< "请选择长度单位："<<endl<<"1.厘米		2.英寸"<<endl;
		cout << "请输入序号：";
		cin >> length_unit;
		if (length_unit==1)
		{
			strcpy_s(length_unit_Chinese, "厘米");
			break;
		}
		else if (length_unit == 2)
		{
			strcpy_s(length_unit_Chinese, "英寸");
			break;
		}
		else
		{
			cout <<endl<<endl<< "请正确选择长度单位序号！" << endl << endl;
		}
	}
	switch (shape_sequence_number)
	{
	case 1:
	{
		cout << endl << "请输入正方形边长（" << length_unit_Chinese << "):";
		cin >> parameter1;
		change_unit(length_unit);
		break;
	}
	case 2:
	{
		cout << endl << "请依次输入长方形的长和宽（" << length_unit_Chinese << "):";
		cin >> parameter1 >> parameter2;
		change_unit(length_unit);
		break;
	}
	case 3:
	{
		cout << endl << "请依次输入三角形的底和高（" << length_unit_Chinese << "):";
		cin >> parameter1 >> parameter2;
		change_unit(length_unit);
		break;
	}
	case 4:
	{
		cout << endl << "请输入圆形直径（" << length_unit_Chinese << "):";
		cin >> parameter1;
		change_unit(length_unit);
		break;
	}
	default:
		break;
	}
	cout << endl << endl;
}
void change_unit(int length_unit)    //将输入的长度转化为厘米作单位
{
	if (length_unit==2)
	{
		parameter1 *= 2.53999;
		parameter2 *= 2.53999;
	}
}

void end_calculate()           //结束计算
{
	cout << endl << endl<< "输入0结束计算：" << endl;
	cin >> end_label;
	if (end_label==0)
	{
		exit(0);
	}
	cout << endl << endl << endl;
}
Shape* shape_build(int shape_sequence_number, double parameter1, double parameter2)
{
	switch (shape_sequence_number)
	{
	case 1:
	{
		return new Square(parameter1);
		break;
	}
	case 2:
	{
		return new Rectangle(parameter1, parameter2);
		break;
	}
	case 3:
	{
		return new Tritangle(parameter1, parameter2);
		break;
	}
	case 4:
	{
		return new Circle(parameter1);
		break;
	}
	default:
		return NULL;
		break;
	}
}