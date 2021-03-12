#include<iostream>
using namespace std;
class animal
{
public:
	//加上virtual就是虚函数了 
	virtual void speak()
	{
		cout<<"动物在叫"<<endl; 
	}
	// virtual void speak() = 0；  纯虚函数 
};
class cat:public animal 
{
public:
	void speak(){cout<<"喵喵喵"<<endl; }
}; 
class dog:public animal 
{
public:
	void speak(){cout<<"汪汪汪"<<endl; }
}; 
void doSpeak(animal &a)
{
	a.speak();
}
int main()
{
	cat c;
	doSpeak(c); 
	/*形参是animal &a 实参是 cat c 父类的引用指向一个子类的对象
	在C++之间允许父子类型直接转换 
	执行这个函数之后输出是“动物在叫”
	因为地址早绑定，在编译阶段就确定了函数地址 
	如果显示传入参数的输出，就得用到动态多态*/ 
	dog d;
	doSpeak(d);
	
	return 0;
}
