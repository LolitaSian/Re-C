#include<iostream>
using namespace std;
#define Sian "可爱"
int main()
{
	cout << "hello world" << endl;
	//变量 类型 名称 = 值
	//常量 记录程序中不可以更改的部分
		// #define 宏常量
		// const 类型 名称 = 值
	cout << "sian这个人" << Sian << endl;

	//sizeof(类型或变量)
	int n = 1;
	short short1 = 1;
	cout << "sizeof(int) = " << sizeof(int) << endl;
	cout << "sizeof(short) = " << sizeof(short1) << endl;
	
	float f1 = 3.14;
	//会默认3.14是double类型，用float接收时会产生一个类型转换，所以声明float变量时后边加f
	float f2 = 3.14f;

	char c = 'y';
	cout << c << endl;

	//科学计数法 AeB = A*10^B
	cout << "3e-2 = " << 3e-2 << endl;

	int n1 = 2, n2 = 2;
	int n3 = ++n1, n4 = n2++;
	cout << "n1 = " << n1 << endl;
	cout << "n2 = " << n2 << endl;
	cout << "n3 = " << n3 << endl;
	cout << "n4 = " << n4 << endl;

	return 0;
}
