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
	}
	Person(const Person &p)
	{
		cout<<"���ÿ������캯��"<<endl; 
		age = p.age;
	}
	~Person()
	{
		cout<<"������������"<<endl; 
	}
private:
	string name;
	int age ; 
	string address; //����ֻ��д���ɶ� 
};
int main()
{
	//���ŷ� 
	Person p1;
	Person p2(1);
	Person p3(p1);
	//	Person p() �ᱻ��Ϊ���������� 
	
	// ��ʾ��
	Person p4;
	Person p5 = Person(10);
	Person p6 = Person(p4);
	//������Person(10)���������󣬲����ÿ���������ʼ����������
	//��������Ĭ��Person(p4) === Person p4
	
	//��ʽת���� --- ��������ת������ʾ�� 
	Person p7 = 10;
	Person p8 = p7;
	
	
	system("pause");
	return 0;
}
