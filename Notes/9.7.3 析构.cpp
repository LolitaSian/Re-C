#include<iostream>
#include<string>
using namespace std;
class animal 	//抽象类 
{
public:
	animal()
	{
		cout<<"animal构造"<<endl;
	}
	virtual void speak() = 0;	//纯虚函数
	/*virtual ~animal()	//虚析构 
	{
		cout<<"animal析构"<<endl;
	} */
	//纯虚析构  
	virtual ~animal() = 0;  
}; 
//animal的纯虚析构
animal::~animal()
{
	cout<<"animal纯虚析构"<<endl;
} 
class cat:public animal
{
public:
	string *name; 
	cat(string n)
	{
		name = new string(n);
		cout<<"cat构造"<<endl;
	}
	virtual void speak()
	{
		cout<<*name<<"喵喵喵"<<endl; 
	}
	~cat()
	{
		delete name;
		name = NULL;
		cout<<"cat析构"<<endl;
	}
};
int main()
{
	animal* c = new cat("tom");
	c->speak();
	/*父类指针析构的时候不会调用子类析构函数，
	会导致子类又在堆区的属性，造成子类泄露
	改成虚析构之后就会走子类的析构*/ 
	delete c;
	return 0;
}
