#include<iostream>
using namespace std;
class Person
{
public:
	Person()
	{
		cout<<"�����޲ι��캯��"<<endl; 
	}
	Person(int a)
	{
		cout<<"�����вι��캯��"<<endl; 
		age = a;
	}
	Person(const Person &p)
	{
		cout<<"���ÿ������캯��"<<endl; 
		age = p.age;
	}
	~Person()
	{
		cout<<age<<endl; 
		cout<<"������������"<<endl; 
	}
	int age ; 
};
//Ϊ����������ֵ 
void func1(Person p)
{	p.age++;
	cout<<"���Ǻ���1"<<endl; 
}
//��Ϊ����ֵ 
Person func2()
{
	Person p;
	cout<<"���Ǻ���2"<<endl; 
	return p;
}
int main()
{
	//1.ʹ��һ�� �Ѿ�������ϵĶ�������ʼ��һ���¶��� 
	Person p1(17);
	Person p2(p1);
	
	func1(p1);
	func2();
	
	return 0;
} 
