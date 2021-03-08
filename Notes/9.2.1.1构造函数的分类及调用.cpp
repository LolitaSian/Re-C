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
	}
	Person(const Person &p)
	{
		cout<<"调用拷贝构造函数"<<endl; 
		age = p.age;
	}
	~Person()
	{
		cout<<"调用析构函数"<<endl; 
	}
private:
	string name;
	int age ; 
	string address; //设置只可写不可读 
};
int main()
{
	//括号法 
	Person p1;
	Person p2(1);
	Person p3(p1);
	//	Person p() 会被认为是声明函数 
	
	// 显示法
	Person p4;
	Person p5 = Person(10);
	Person p6 = Person(p4);
	//单独的Person(10)是匿名对象，不能用拷贝函数初始化匿名对象
	//编译器会默认Person(p4) === Person p4
	
	//隐式转换法 --- 编译器会转换成显示法 
	Person p7 = 10;
	Person p8 = p7;
	
	
	system("pause");
	return 0;
}
