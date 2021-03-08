#include<iostream>
using namespace std;
class Person
{
public:
	void SetMessage(string s1,int n,string s2)
	{
		name = s1;
		address = s2;
		if(age<0||age>110)
			return;
		age = n;
	}
	void print()
	{
		cout<<"姓名："<<name;
		if(age>0 && age<110)
			cout<<" 年龄："<<age; 
		cout<<"\n";
	}
private:
	string name;
	int age ; 
	string address; //设置只可写不可读 
};
int main()
{
	Person p1,p2;
	p1.SetMessage("张三",120,"");
	p2.SetMessage("李四",23,"");
	p1.print();
	p2.print();
	return 0;
}
