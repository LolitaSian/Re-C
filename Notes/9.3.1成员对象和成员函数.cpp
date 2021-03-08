#include<iostream>
using namespace std;
class test1
{
	 
};
class test2
{
	int a;
};
class test3
{
	int a;
	static int b;
	void func(){};
	static void f(){}
};
int main()
{
	//C++给每个空对象分配一个字节的空间，为了区分空对象占内存的位置
	//每个空对象也有一个独一无二的内存地址 
	test1 t1;
	cout<<"sizeof(t1)="<<sizeof(t1)<<endl;
	
	//如果不是空的，就按照内部数据分配空间 
	test2 t2;
	cout<<"sizeof(t2)="<<sizeof(t2)<<endl;
	
	//只有非静态的成员变量才属于类的对象上
	test3 t3;
	cout<<"sizeof(t3)="<<sizeof(t3)<<endl;
	return 0;
}
