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
		cout<<"������"<<name;
		if(age>0 && age<110)
			cout<<" ���䣺"<<age; 
		cout<<"\n";
	}
private:
	string name;
	int age ; 
	string address; //����ֻ��д���ɶ� 
};
int main()
{
	Person p1,p2;
	p1.SetMessage("����",120,"");
	p2.SetMessage("����",23,"");
	p1.print();
	p2.print();
	return 0;
}
