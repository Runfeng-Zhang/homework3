#pragma once


//������Բ�ε��࣬�����ֱ����뾶������ĳ��ȵ�λ�����׻���Ӣ�硣

class Circle
{
private:
	double r;
	bool u;
public:
	/*
	��Բ�İ뾶�ĵ�λת��Ϊ����
	*/
	double getRadius();
	
	
	/*
	����Բ������������ý����ƽ�����׵ĵ�λ���
	*/
	double area();
	Circle(double r0=0,bool u0=0);
	~Circle();
};

