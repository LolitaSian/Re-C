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
		cout<<"messagee�Ĺ��캯��"<<endl; 
	}
	~message()
	{
		cout<<"messagee����������"<<endl; 
	}
};
class person
{
public:
	string name;
	message mes;
	person(string s1,string s2,string s3):name(s1),mes(s2,s3)
	{
		cout<<"person�Ĺ��캯��"<<endl; 
	}
	void print()
	{
		cout<<"������"<<name<<endl;
		cout<<"������Ϣ��"<<endl;
		cout<<" -�绰��"<<mes.PhoneNumber<<"\n -�ʼ�:"<<mes.EMail<<endl; 
	}
	~person()
	{
		cout<<"person����������"<<endl; 
	}
};
int main()
{
	person p("����","111111111","asdada@ada.com");
	p.print(); 
	return 0;
}
