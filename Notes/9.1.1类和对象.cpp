#include<iostream>
#include<cmath>
using namespace std;
#define pi 3.14
//���һ��Բ��
class circle {
private:
	int r2;
public:
	//����
	int r1;	//�뾶 
	//��Ϊ 
	double circumference()	//�ܳ� 
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
	circle c1;	//ʵ����һ������ 
	c1.r1 = 5;
	//c1.r2=7; ˽�г�Ա������ֱ�ӷ��� 
	c1.set(2);
	cout<<"c1���ܳ���"<<c1.circumference()<<endl;
	cout<<"c1�������"<<c1.dimensions()<<endl; 
	return 0;
} 
