
#include<iostream>
#include"4函数.h"
using namespace std;
int add(int a, int b); //ab是形参
void swap(int a, int b) //值传递形参改变不影响实参
{
	int c = a;
	a = b;
	b = c;
}
int main()
{
	int n1 = 2, n2 = 8;
	cout << add(n1, n2)<<endl; // n1n2是实参 
	cout << "交换前: a = " << n1 << ", b = " << n2 << endl;
	swap(n1, n2);
	cout << "交换后: a = " << n1 << ", b = " << n2 << endl;

	cout << multiply(n1, n2) << endl; // n1n2是实参 
	return 0;
}
int add(int a, int b) //ab是形参
{
	int sum = a + b;
	return sum;
}
