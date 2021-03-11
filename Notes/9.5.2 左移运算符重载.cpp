#include<iostream >
using namespace std;
class number
{
public:
	int a,b;
	number(int m=0,int n=0):a(m),b(n){}
}; 
//只能用全局函数重载左移运算符
ostream& operator<<(ostream &cout,number &p)
{	
	cout<<"a = "<<p.a<<", b = "<<p.b<<endl;
	return cout;	//实现链式编程 
}  
int main()
{
	number a;
	cout<<a; 
	number b(1,3);
	cout<<b;
	return 0;
}
