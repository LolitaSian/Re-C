#include<iostream>
using namespace std;
class test
{
public:
	static int a;
	int b;
	static void func()
	{
		a = 5;
		//b = 6;	��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
		cout<<"static void func()"<<endl;
	}
}; 
//��̬��Ա�����������������ʼ�� 
int test::a = 1;
int main()
{
	test t;
	cout<<t.a<<endl;
	
	//̬��Ա�������ж�����ͬһ������  
	test t2;
	t2.a = 100; 
	cout<<t.a<<endl; 
	//��˾�̬��Ա���������ַ��ʷ�ʽ��ͨ�������ͨ������
	cout<<test::a<<endl; 
	
	t2.func();
	test::func();
	return 0;
} 
