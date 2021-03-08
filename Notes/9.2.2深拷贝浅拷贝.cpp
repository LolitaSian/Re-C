#include<iostream>
using namespace std;
class test
{
public:
	int a;
	int* p;
	test(int n,int m)
	{
		a = n;
		p = new int(m);
		cout<<"调用有参构造函数"<<endl; 
	} 
	//如果在VS里这么写会报错（但是dev没报错。
	//浅拷贝，声明两个对象，析构函数也释放两次p，造成同一区域重复释放 
	/*test(const test &s)
	{
		a = s.a;
		p = s.p;
		cout<<"调用拷贝构造函数"<<endl;
	} */
	test(const test &s)
	{
		a = s.a;
		p = new int(*s.p); //对s.p指针解引用 
		cout<<"调用拷贝构造函数"<<endl;
	}
	~test()
	{
		delete p;
		cout<<"调用析构函数"<<endl;
	} 
};
void func(){test t1(1,2);test t2(t1);} 
int main()
{
	func();
	return 0;
} 
