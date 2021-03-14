#include<iostream>
using namespace std;
template<typename T>
void myswap(T& a,T& b)
{
	T tem = a;
	a = b;
	b = tem;
}
/*-------------------*/
template<typename T>
T add1(T a,T b)
{
	return a+b;
}
int add2(int a,int b)
{
	return a+b;
}
/*-------------------*/
template<typename T>
void print(T a,T b)
{
	cout<<"����ģ��"<<a<<b<<endl;
}
void print(int a)
{
	cout<<"����"<<a<<endl;
}
template<typename T>
void print(T a)
{
	cout<<"����ģ��"<<a<<endl;
}
/*-------------------*/
//ģ������� 
class test
{
public:
	int n;
	test(int num):n(num){}
};
template<typename T>
bool compare(T a,T b)
{
	if(a == b)
	{
		return true;
	}
	else
	{
		return false; 
	} 
}
//���廯
template<> bool compare(test a,test b)
{
	if(a.n == b.n)
	{
		return true;
	}
	else
	{
		return false; 
	} 
}
/*-------------------*/
void test1()	//ģ�������ʩ�÷������� 
{
	//���ַ���ʹ��ģ��
	//1.�Զ��Ƶ�
	int a=5,b=7;
	cout<<a<<" "<<b<<endl;
	myswap(a,b);
	cout<<a<<" "<<b<<endl;
	
	// ��ʽָ������
	double c=2.49,d=4.2;
	cout<<c<<" "<<d<<endl;
	myswap<double>(c,d);
	cout<<c<<" "<<d<<endl;
}
void test2()	//���� 
{
	int a=1;
	double c = 3.1;
	// �ᱨ��add1(a,c);
	cout<<add2(a,c)<<endl;	//c����ʽת��Ϊint���� 
	cout<<add1<int>(a,c)<<endl; 
}
void test3()	//���ù��� 
{
	int a = 1;
	print(a);		//����ģ�����ͨģ�嶼����ʵ�ֵ�ʱ�����ȵ�����ͨģ��
	print<>(a);		//����ͨ����ģ������б����ȵ��ú���ģ��
	print(a,a);		//����ģ��Ҳ��������
	
	char c = 's';	//c++������ͨ����ǿ������ת������ֱ�ӵ���ģ�� 
	print(c);		//�������ģ��ɲ������õ�ƥ�䣬���ȵ��ú���ģ��
}
void test4()	//���廯 
{
	test a(1),b(1);
	cout<<compare(a,b)<<endl;
}
int main()
{
	test1(); 
	test2();
	test3();
	test4();
	return 0;
} 
