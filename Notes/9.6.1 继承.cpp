#include<iostream>
using namespace std;
class father
{
public:
	string name;
	static int age; 
	father (){ name = "张三";} 
	void print()
	{
		cout<<"father成员函数:"<<name<<endl;
	} 
	static void f()
	{
		cout<<"father类"<<endl;
	} 
}; 
int father::age = 50;
class son :public father
{
public:
	string name;
	static int age; 
	son (){ name = "张三的儿子";} 
	void print()
	{
		cout<<"son成员函数:"<<name<<endl;
	} 
	static void f()
	{
		cout<<"son类"<<endl;
	} 
};
int son::age = 18;
int main()
{
	son p;
	//同名成员属性 
	cout<<"p.name"<<p.name<<endl;
	cout<<"p.father::name"<<p.father::name<<endl;
	cout<<"-------------------------------"<<endl;
	//同名成员函数 
	p.print();
	p.father::print();
	cout<<"-------------------------------"<<endl;
	//同名成员静态属性
	cout<<"通过对象访问："<<endl;
	cout<<"儿子的年龄"<<p.age<<endl; 
	cout<<"父亲的年龄"<<p.father::age<<endl<<endl;
	
	cout<<"通过类名访问："<<endl;
	cout<<"儿子的年龄"<<son::age<<endl;
	cout<<"父亲的年龄"<<son::father::age<<endl;
	cout<<"-------------------------------"<<endl;
	//同名成员静态函数 
	p.f();
	p.father::f();
	son::f();
	son::father::f();
	return 0;
} 
