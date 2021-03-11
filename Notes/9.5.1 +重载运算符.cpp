#include<iostream> 
using namespace std;
class number
{
public:
	int a,b;
	number(int m=0,int n=0):a(m),b(n){}
	//成员函数重载 
	/*number operator+ (number &p)
	{
		number s;
		s.a = p.a + this->a;
		s.b = p.b + this->b;
		return s;
	}*/
};
//全局函数重载
number operator+(number &p,number &q)
{
	number s;
	s.a = p.a + q.a;
	s.b = p.b + q.b;
	return s;
}
int main()
{
	number a(5,8),c(1,3);
	number b = operator+(a,a);	//写法1 
	cout<<b.a<<" "<<b.b<<endl;
	b = c + a;					//写法2 
	cout<<b.a<<" "<<b.b<<endl;
	return 0;
}
