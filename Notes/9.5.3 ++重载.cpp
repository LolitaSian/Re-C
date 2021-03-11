#include<iostream>
using namespace std;
class myInteger
{
	friend ostream & operator<<(ostream &cout,myInteger s);
private:
	int n ; 
public:
	myInteger():n(0){}
	//重载前置++运算符
	myInteger& operator++()	
	//返回引用为了对同一个数据操作  
	{
		n++;
 		return *this;
	} 
	//重载后置++运算符 
	myInteger& operator++(int) 
	{
		myInteger temp = *this;
		n++;
		return temp;
	} 
	//int占位符，用于区分前置后置的重载 
};
ostream & operator<<(ostream &cout,myInteger s)
{
	cout<<s.n;
	return cout;
} 
int main()
{
	myInteger n;
	cout<<n++<<endl;
	return 0;
}
