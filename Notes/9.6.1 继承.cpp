#include<iostream>
using namespace std;
class father
{
public:
	string name;
	static int age; 
	father (){ name = "����";} 
	void print()
	{
		cout<<"father��Ա����:"<<name<<endl;
	} 
	static void f()
	{
		cout<<"father��"<<endl;
	} 
}; 
int father::age = 50;
class son :public father
{
public:
	string name;
	static int age; 
	son (){ name = "�����Ķ���";} 
	void print()
	{
		cout<<"son��Ա����:"<<name<<endl;
	} 
	static void f()
	{
		cout<<"son��"<<endl;
	} 
};
int son::age = 18;
int main()
{
	son p;
	//ͬ����Ա���� 
	cout<<"p.name"<<p.name<<endl;
	cout<<"p.father::name"<<p.father::name<<endl;
	cout<<"-------------------------------"<<endl;
	//ͬ����Ա���� 
	p.print();
	p.father::print();
	cout<<"-------------------------------"<<endl;
	//ͬ����Ա��̬����
	cout<<"ͨ��������ʣ�"<<endl;
	cout<<"���ӵ�����"<<p.age<<endl; 
	cout<<"���׵�����"<<p.father::age<<endl<<endl;
	
	cout<<"ͨ���������ʣ�"<<endl;
	cout<<"���ӵ�����"<<son::age<<endl;
	cout<<"���׵�����"<<son::father::age<<endl;
	cout<<"-------------------------------"<<endl;
	//ͬ����Ա��̬���� 
	p.f();
	p.father::f();
	son::f();
	son::father::f();
	return 0;
} 
