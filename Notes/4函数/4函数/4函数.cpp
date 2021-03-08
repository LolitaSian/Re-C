#include<iostream>
#include"4函数.h"
using namespace std;
int add(int a, int b); //ab是形参
void swap(int a, int b); //值传递形参改变不影响实参
int subtract(int a = 5, int b = 2)
{
	return a - b;
}
double subtract(double a, double b)
{
	return a - b;
}
//引用作为重载条件
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
	cout << add(n1, n2) << endl; // n1n2是实参 
	cout << "交换前: a = " << n1 << ", b = " << n2 << endl;
	swap(n1, n2);
	cout << "交换后: a = " << n1 << ", b = " << n2 << endl;

	cout << multiply(n1, n2) << endl; // n1n2是实参

	cout << subtract() << endl; 
	cout << subtract(n1) << endl; 
	cout << subtract(n1,-5) << endl;
	cout << subtract(1.5,3.14) << endl;

	func(n1);
	func(2);

	
	return 0;
}
int add(int a, int b) //ab是形参
{
	int sum = a + b;
	return sum;
}
void swap(int a, int b)//值传递形参改变不影响实参
{
	int c = a;
	a = b;
	b = c;
}