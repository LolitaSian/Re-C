#include<iostream>
using namespace std;
class test
{
public:
	static int a;
	int b;
	static void func()
	{
		a = 5;
		//b = 6;	静态成员函数只能访问静态成员变量
		cout<<"static void func()"<<endl;
	}
}; 
//静态成员变量类内声明类外初始化 
int test::a = 1;
int main()
{
	test t;
	cout<<t.a<<endl;
	
	//态成员变量所有对象共享同一份数据  
	test t2;
	t2.a = 100; 
	cout<<t.a<<endl; 
	//因此静态成员对象有两种访问方式，通过对象和通过类名
	cout<<test::a<<endl; 
	
	t2.func();
	test::func();
	return 0;
} 
