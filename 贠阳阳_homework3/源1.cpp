#include<iostream>
#include<cstring>
#include<cmath>
#include<iomanip>
using namespace std;
const double PI = 3.1415926;
double parameter1 = 0, parameter2 = 0;//���ڽ�������ʱ�õĲ���
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
		cout << "ͼ�����ͣ�Բ��" << endl;
		cout << "Բ��ֱ����" << setiosflags(ios::fixed) << setprecision(3) << m_radius << "����" << endl;
		cout << "Բ�������" << setiosflags(ios::fixed) << setprecision(3) << getArea() << "ƽ������" << endl<<endl;
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
		cout << "ͼ�����ͣ�������" << endl;
		cout << "�����εĳ���" << setiosflags(ios::fixed) << setprecision(3) << m_length << "����";
		cout << "		" << "�����εĿ�" << setiosflags(ios::fixed) << setprecision(3) << m_width << "����" << endl;
		cout << "�����ε������" << setiosflags(ios::fixed) << setprecision(3) << getArea() << "ƽ������" << endl<<endl;
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
		cout << "ͼ�����ͣ�������" << endl;
		cout << "�����εĵף�" << setiosflags(ios::fixed) << setprecision(3) << m_bottom << "����";
		cout << "		"<< "�����εĸߣ�" << setiosflags(ios::fixed) << setprecision(3) << m_high << "����" << endl;
		cout << "�����ε������" << setiosflags(ios::fixed) << setprecision(3) << getArea() << "ƽ������" << endl<<endl;
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
		cout << "ͼ�����ͣ�������" << endl;
		cout << "�����εı߳���" << setiosflags(ios::fixed) << setprecision(3) << m_side_length << "����" << endl;
		cout << "�����ε������" << setiosflags(ios::fixed) << setprecision(3) << getArea() << "ƽ������"<<endl<<endl;
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
		cout << "��ѡ����Ҫ�����ͼ�����ͣ�" << endl<<"1.������		2.������		3.������		4.Բ��"<<endl;
	    cout << "��������ţ�";
		cin >> shape_sequence_number;
		Shape * shape = NULL;
		if (shape_sequence_number>=1&& shape_sequence_number<=4)
		{
			input_parameter(shape_sequence_number, length_unit_sequence_number);
			shape=shape_build(shape_sequence_number, parameter1, parameter2);
		}
		else
		{
			cout << endl << endl << "����ȷ�������ͼ�ε�����!" << endl << endl << endl;
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
		cout <<endl<< "��ѡ�񳤶ȵ�λ��"<<endl<<"1.����		2.Ӣ��"<<endl;
		cout << "��������ţ�";
		cin >> length_unit;
		if (length_unit==1)
		{
			strcpy_s(length_unit_Chinese, "����");
			break;
		}
		else if (length_unit == 2)
		{
			strcpy_s(length_unit_Chinese, "Ӣ��");
			break;
		}
		else
		{
			cout <<endl<<endl<< "����ȷѡ�񳤶ȵ�λ��ţ�" << endl << endl;
		}
	}
	switch (shape_sequence_number)
	{
	case 1:
	{
		cout << endl << "�����������α߳���" << length_unit_Chinese << "):";
		cin >> parameter1;
		change_unit(length_unit);
		break;
	}
	case 2:
	{
		cout << endl << "���������볤���εĳ��Ϳ�" << length_unit_Chinese << "):";
		cin >> parameter1 >> parameter2;
		change_unit(length_unit);
		break;
	}
	case 3:
	{
		cout << endl << "���������������εĵ׺͸ߣ�" << length_unit_Chinese << "):";
		cin >> parameter1 >> parameter2;
		change_unit(length_unit);
		break;
	}
	case 4:
	{
		cout << endl << "������Բ��ֱ����" << length_unit_Chinese << "):";
		cin >> parameter1;
		change_unit(length_unit);
		break;
	}
	default:
		break;
	}
	cout << endl << endl;
}
void change_unit(int length_unit)    //������ĳ���ת��Ϊ��������λ
{
	if (length_unit==2)
	{
		parameter1 *= 2.53999;
		parameter2 *= 2.53999;
	}
}

void end_calculate()           //��������
{
	cout << endl << endl<< "����0�������㣺" << endl;
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