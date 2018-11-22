#pragma once
#ifndef _Circle            
#define _Circle           
class Circle
{
private:
	double Radius;             //����Բ�İ뾶
	const double PI;          //����һ�������ݳ�ԱPI����Բ����
public:
	Circle(double r = 0) :PI(3.1415926)             //ֻ��ͨ����ʼ���б��ʼ�������ݳ�Ա
	{
		Radius = r;
	}
	double Area();                    //��Բ�����
	double Circumference();          //��Բ���ܳ�
};
#endif