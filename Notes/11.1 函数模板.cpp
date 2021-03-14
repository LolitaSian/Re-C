#include<iostream>
using namespace std;
template<typename T>
void myswap(T& a,T& b)
{
	T tem = a;
	a = b;
	b = tem;
}
/*-------------------*/
template<typename T>
T add1(T a,T b)
{
	return a+b;
}
int add2(int a,int b)
{
	return a+b;
}
/*-------------------*/
template<typename T>
void print(T a,T b)
{
	cout<<"函数模板"<<a<<b<<endl;
}
void print(int a)
{
	cout<<"函数"<<a<<endl;
}
template<typename T>
void print(T a)
{
	cout<<"函数模板"<<a<<endl;
}
/*-------------------*/
//模板局限性 
class test
{
public:
	int n;
	test(int num):n(num){}
};
template<typename T>
bool compare(T a,T b)
{
	if(a == b)
	{
		return true;
	}
	else
	{
		return false; 
	} 
}
//具体化
template<> bool compare(test a,test b)
{
	if(a.n == b.n)
	{
		return true;
	}
	else
	{
		return false; 
	} 
}
/*-------------------*/
void test1()	//模板的两种施用方法测试 
{
	//两种方法使用模板
	//1.自动推导
	int a=5,b=7;
	cout<<a<<" "<<b<<endl;
	myswap(a,b);
	cout<<a<<" "<<b<<endl;
	
	// 显式指定类型
	double c=2.49,d=4.2;
	cout<<c<<" "<<d<<endl;
	myswap<double>(c,d);
	cout<<c<<" "<<d<<endl;
}
void test2()	//区别 
{
	int a=1;
	double c = 3.1;
	// 会报错add1(a,c);
	cout<<add2(a,c)<<endl;	//c会隐式转换为int类型 
	cout<<add1<int>(a,c)<<endl; 
}
void test3()	//调用规则 
{
	int a = 1;
	print(a);		//函数模板和普通模板都可以实现的时候优先调用普通模板
	print<>(a);		//可以通过空模板参数列表优先调用函数模板
	print(a,a);		//函数模板也可以重载
	
	char c = 's';	//c++觉得普通函数强制类型转换不如直接调用模板 
	print(c);		//如果函数模板可产生更好的匹配，优先调用函数模板
}
void test4()	//具体化 
{
	test a(1),b(1);
	cout<<compare(a,b)<<endl;
}
int main()
{
	test1(); 
	test2();
	test3();
	test4();
	return 0;
} 
