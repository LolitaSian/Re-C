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
	//Add()������������������һ��aռ�ռ�ûɶ�ã���������һ��������������� 
	return 0;
} 
