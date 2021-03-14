#include<iostream>
#include<string>
using namespace std;
template<class NameType, class AgeType = int>
class Person
{
public:
	NameType name;
	AgeType age;
	Person(NameType n,AgeType a):name(n),age(a){}
	void show()
	{
		cout<<name<<"\t"<<age<<endl;
	} 
};
/*---------------------------------------------*/
class c1
{
public:
	void print1()
	{
		cout<<"c1类"<<endl;
	}
}; 
class c2
{
public:
	void print2()
	{
		cout<<"c2类"<<endl;
	}
}; 
template<class T>
class demo
{
public:
	T obj;
	void func1(){obj.print1();}
	void func2(){obj.print2();}
};

/*---------------------------------------------*/
void test1()
{
	Person<string,int> p1("孙悟空",9999);
	//类模板没有自动类型推导，Person p("孙悟空",9999);会报错 
	p1.show(); 
	Person<string> p2("猪八戒",9995);
	//class AgeType = int 默认参数，在template中直接设置上类型，使用的时候就可以不用在<>中指明了 
	p2.show();
}
void test2()	//成员函数创建时机 
{
	demo<c1> d;
	d.func1();
	//print2不能调用，但是如果不执行func2就不会报错 
}
/*---------------------------------------------*/
//指定传入类型
void f1(Person<string,int>&p)
{
	p.show();
} 
//参数模板化
template<class NameType, class AgeType>
void f2(Person<NameType,AgeType>&p)
{
	p.show();
	cout<<"NameType的数据类型"<<typeid(NameType).name()<<endl;
	cout<<"AgeType的数据类型"<<typeid(AgeType).name()<<endl;
}  
//整个类模板化 
template<class T>
void f3(T &p)
{
	p.show();
	cout<<"T的数据类型"<<typeid(T).name()<<endl;
} 
void test3()
{
	//指定传入类型
	Person<string,int> p3("沙和尚",10000);
	f1(p3); 
	//参数模板化
	f2(p3);
	f3(p3);
}
int main()
{
	test1();
	test2();
	test3();
	return 0;
} 
