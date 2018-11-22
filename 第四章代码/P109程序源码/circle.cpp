#include "circle.h"          
double Circle::Area()							//求圆的面积
{
	return PI * Radius*Radius;
}
double Circle::Circumference()					//求圆的周长
{
	return 2 * PI*Radius;
}
double Circle::GetRadius()const                 //常成员函数给，获取半径值的实现代码
{
	return Radius;
}