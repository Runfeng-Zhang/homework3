#pragma once


/*������һ�������ε��࣬�����ֱ�Ϊ�������Լ�����ĳ��ȵ�λ������*/


class Rectangle
{
private:
	double l, w;
	bool u;
public:
	/*�������εĳ�תΪ������Ϊ��λ���*/
	double getLength();


	/*�������εĿ�תΪ������Ϊ��λ���*/
	double getWidth();


	/*���㳤���ε���������ҽ����ƽ��������Ϊ��λ���*/
	double area();
	Rectangle(double l0=0,double w0=0,bool u0=0);
	~Rectangle();
};

