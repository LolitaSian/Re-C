#include<iostream>
using namespace std;
class test
{
public:
	int a;
	int* p;
	test(int n,int m)
	{
		a = n;
		p = new int(m);
		cout<<"�����вι��캯��"<<endl; 
	} 
	//�����VS����ôд�ᱨ������devû����
	//ǳ��������������������������Ҳ�ͷ�����p�����ͬһ�����ظ��ͷ� 
	/*test(const test &s)
	{
		a = s.a;
		p = s.p;
		cout<<"���ÿ������캯��"<<endl;
	} */
	test(const test &s)
	{
		a = s.a;
		p = new int(*s.p); //��s.pָ������� 
		cout<<"���ÿ������캯��"<<endl;
	}
	~test()
	{
		delete p;
		cout<<"������������"<<endl;
	} 
};
void func(){test t1(1,2);test t2(t1);} 
int main()
{
	func();
	return 0;
} 
