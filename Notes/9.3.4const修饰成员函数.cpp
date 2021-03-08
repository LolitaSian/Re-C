#include<iostream>
using namespace std;
class test
{
public:
	int a;
	mutable int b;
	test(){} 
	void func() const 
	//test* const this 变为 const test* const this 
	{
		// a = 1;  此时a已经不可修改了 
		/*相当于this->a = 1; 
		this是指针常量test* const this 
		指向不可以修改，但是值可以改
		在成员函数后加const，令其值也不可更改*/ 
		
		b = 2;	//加mutable可以修改 
	}
	void f(){} 
	~test(){} 
};
int main()
{
	const test t;	//常对象 
	//t.a = 2; 报错，常对象只能修改加mutable的变量 
	t.b = 6;
	//t.f(); 报错，常对象只能调用常函数，因为普通成员函数可能会修改属性 
	t.func();
	return 0;
}
