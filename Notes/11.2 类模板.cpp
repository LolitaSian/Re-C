#include<iostream>
#include<string>
using namespace std;
template<class NameType, class AgeType = int>
class Person
{
public:
	NameType name;
	AgeType age;
	Person(NameType n,AgeType a):name(n),age(a){}
	void show()
	{
		cout<<name<<"\t"<<age<<endl;
	} 
};
/*---------------------------------------------*/
class c1
{
public:
	void print1()
	{
		cout<<"c1��"<<endl;
	}
}; 
class c2
{
public:
	void print2()
	{
		cout<<"c2��"<<endl;
	}
}; 
template<class T>
class demo
{
public:
	T obj;
	void func1(){obj.print1();}
	void func2(){obj.print2();}
};

/*---------------------------------------------*/
void test1()
{
	Person<string,int> p1("�����",9999);
	//��ģ��û���Զ������Ƶ���Person p("�����",9999);�ᱨ�� 
	p1.show(); 
	Person<string> p2("��˽�",9995);
	//class AgeType = int Ĭ�ϲ�������template��ֱ�����������ͣ�ʹ�õ�ʱ��Ϳ��Բ�����<>��ָ���� 
	p2.show();
}
void test2()	//��Ա��������ʱ�� 
{
	demo<c1> d;
	d.func1();
	//print2���ܵ��ã����������ִ��func2�Ͳ��ᱨ�� 
}
/*---------------------------------------------*/
//ָ����������
void f1(Person<string,int>&p)
{
	p.show();
} 
//����ģ�廯
template<class NameType, class AgeType>
void f2(Person<NameType,AgeType>&p)
{
	p.show();
	cout<<"NameType����������"<<typeid(NameType).name()<<endl;
	cout<<"AgeType����������"<<typeid(AgeType).name()<<endl;
}  
//������ģ�廯 
template<class T>
void f3(T &p)
{
	p.show();
	cout<<"T����������"<<typeid(T).name()<<endl;
} 
void test3()
{
	//ָ����������
	Person<string,int> p3("ɳ����",10000);
	f1(p3); 
	//����ģ�廯
	f2(p3);
	f3(p3);
}
int main()
{
	test1();
	test2();
	test3();
	return 0;
} 
