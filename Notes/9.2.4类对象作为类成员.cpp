#include<iostream>
#include<string>
using namespace std;
class message
{
public:
	string PhoneNumber;
	string EMail;
	message(string s1,string s2):PhoneNumber(s1),EMail(s2)
	{
		cout<<"messagee的构造函数"<<endl; 
	}
	~message()
	{
		cout<<"messagee的析构函数"<<endl; 
	}
};
class person
{
public:
	string name;
	message mes;
	person(string s1,string s2,string s3):name(s1),mes(s2,s3)
	{
		cout<<"person的构造函数"<<endl; 
	}
	void print()
	{
		cout<<"姓名："<<name<<endl;
		cout<<"个人信息："<<endl;
		cout<<" -电话："<<mes.PhoneNumber<<"\n -邮件:"<<mes.EMail<<endl; 
	}
	~person()
	{
		cout<<"person的析构函数"<<endl; 
	}
};
int main()
{
	person p("张三","111111111","asdada@ada.com");
	p.print(); 
	return 0;
}
