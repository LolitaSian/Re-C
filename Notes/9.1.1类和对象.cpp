#include<iostream>
#include<cmath>
using namespace std;
#define pi 3.14
//设计一个圆类
class circle {
private:
	int r2;
public:
	//属性
	int r1;	//半径 
	//行为 
	double circumference()	//周长 
	{
		return 2*pi*r1;
	}
	double dimensions()
	{
		return pow(pi,r2);
	}
	void set(int n)
	{
		r2 = n;
	} 
}; 
int main()
{
	circle c1;	//实例化一个对象 
	c1.r1 = 5;
	//c1.r2=7; 私有成员不可以直接访问 
	c1.set(2);
	cout<<"c1的周长："<<c1.circumference()<<endl;
	cout<<"c1的面积："<<c1.dimensions()<<endl; 
	return 0;
} 
