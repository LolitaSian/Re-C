#include<iostream>
using namespace std;
class test
{
public:
	int a,b,c;
	/*´«Í³Ğ´·¨ 
	test(int n1,int n2,int n3)
	{
		a = n1;
		b = n2;
		c = n3;
	}*/
	test(int n1,int n2,int n3):a(n1),b(n2),c(n3)
	{
		
	}
	void print()
	{
		cout<<"a="<<a<<",b="<<b<<",c="<<c<<endl;
	}
	~test(){} 
};
int main()
{
	test t(1,2,3);
	t.print();
	return 0;
} 
