#include<iostream>
using namespace std;
class number
{
public:
	int *n;
	number(int a)
	{
		n = new int(a);	
	}
	void operator=(number &p)	//一定要加上&，否则执行完后p就被析构了。
	{
		//编译器提供的是浅拷贝，要自己重载写一个深拷贝
		if (n != NULL)
		{
			delete n;
			n = NULL;
		}
		n = new int(*p.n);
	}
	~number()
	{
		if (n != NULL)
		{
			delete n;
			n = NULL;
		}
	}
};
int main()
{
	number a(5);
	number b(7);
    cout << *a.n << endl;
	cout << *b.n << endl;
	b = a;
	cout << *a.n << endl;
	cout << *b.n << endl;
	return 0;
}
