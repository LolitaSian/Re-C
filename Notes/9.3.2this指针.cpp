#include<iostream>
using namespace std;
class test
{
public:
	int a;
	test(int a)
	{
		this->a = a;
	}
	void print()
	{
		cout<<"a="<<a<<endl;
	}
	test& add(test &p)	
	/*类型后一定要加引用，否则会调用拷贝构造函数（9.1.2.1）
	形成新对象，之后的操作都是在新对象上执行的*/
	{
		this->a += p.a;
		return *this;
		//用this返回对象本身
	}
	~test(){} 
};
int main()
{
	test t(1);
	t.print();
	/*如果没加引用，t.add(t)返回形成一个新对象t'，
	之后是对t'进行.add(t).add(t).add(t)，然后返回t''...
	以此类推，之后的操作都是在拷贝之后的新对象上，
	因此t只会进行一次相加操作*/ 
	t.add(t).add(t).add(t).add(t);
	t.print();
	
	return 0;
}
