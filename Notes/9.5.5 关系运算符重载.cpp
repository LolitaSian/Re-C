#include<iostream>
using namespace std;
class number
{
public:
	int n;
	number(int a):n(a){}
	int operator==(number &p)
	{
		if(this->n==p.n)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
};
int operator!=(number &p,number &q)
{
	if(q.n==p.n)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int main()
{
	number a(8);
	number b(8);
	cout<<(a==b)<<endl;
	cout<<(a!=b)<<endl;
	return 0;
}
