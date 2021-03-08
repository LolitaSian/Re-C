#include<iostream>
using namespace std;
class Person
{
public:
	Person()
	{
		cout<<"调用无参构造函数"<<endl; 
	}
	Person(int a)
	{
		cout<<"调用有参构造函数"<<endl; 
		age = a;
	}
	Person(const Person &p)
	{
		cout<<"调用拷贝构造函数"<<endl; 
		age = p.age;
	}
	~Person()
	{
		cout<<age<<endl; 
		cout<<"调用析构函数"<<endl; 
	}
	int age ; 
};
//为函数参数传值 
void func1(Person p)
{	p.age++;
	cout<<"这是函数1"<<endl; 
}
//作为返回值 
Person func2()
{
	Person p;
	cout<<"这是函数2"<<endl; 
	return p;
}
int main()
{
	//1.使用一个 已经创建完毕的对象来初始化一个新对象 
	Person p1(17);
	Person p2(p1);
	
	func1(p1);
	func2();
	
	return 0;
} 
