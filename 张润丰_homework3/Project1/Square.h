#pragma once

/*����һ�������ε���*/

class Square
{
private:
	double s;
	bool u;
public:
	/*�������εı߳��ĵ�λתΪ������*/
	double getSideWidth();


	/*���������ε������������ƽ��������Ϊ��λ���*/
	double area();


	Square(double s0=0,bool u0=0);
	~Square();
};

