#include<iostream>
#include"4����.h"
using namespace std;
int add(int a, int b); //ab���β�
void swap(int a, int b); //ֵ�����βθı䲻Ӱ��ʵ��
int subtract(int a = 5, int b = 2)
{
	return a - b;
}
double subtract(double a, double b)
{
	return a - b;
}
//������Ϊ��������
void func(int& a)
{
	cout << "void func(int& a)" << endl;
}
void func(const int& a)
{
	cout << "void func(const int& a)" << endl;
}
int main()
{
	int n1 = 2, n2 = 8;
	cout << add(n1, n2) << endl; // n1n2��ʵ�� 
	cout << "����ǰ: a = " << n1 << ", b = " << n2 << endl;
	swap(n1, n2);
	cout << "������: a = " << n1 << ", b = " << n2 << endl;

	cout << multiply(n1, n2) << endl; // n1n2��ʵ��

	cout << subtract() << endl; 
	cout << subtract(n1) << endl; 
	cout << subtract(n1,-5) << endl;
	cout << subtract(1.5,3.14) << endl;

	func(n1);
	func(2);

	
	return 0;
}
int add(int a, int b) //ab���β�
{
	int sum = a + b;
	return sum;
}
void swap(int a, int b)//ֵ�����βθı䲻Ӱ��ʵ��
{
	int c = a;
	a = b;
	b = c;
}