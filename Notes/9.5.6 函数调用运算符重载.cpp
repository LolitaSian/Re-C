#include<iostream>
#include<string>
using namespace std;
class print
{
public:
	void operator()(string test)
	{
		cout<<test<<endl;
	}	
};
class Add 
{
public:
	int operator()(int a,int b)
	{
		return a+b;
	}
};
int main()
{
	print s;
	s("hello world");
	Add a;
	cout<<a(2,5)<<endl;
	cout<<Add()(1,7)<<endl;
	//Add()是匿名函数对象，声明一个a占空间没啥用，所以声明一个匿名对象操作。 
	return 0;
} 
