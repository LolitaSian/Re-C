#include<iostream>
using namespace std;
class test
{
public:
	int a;
	mutable int b;
	test(){} 
	void func() const 
	//test* const this ��Ϊ const test* const this 
	{
		// a = 1;  ��ʱa�Ѿ������޸��� 
		/*�൱��this->a = 1; 
		this��ָ�볣��test* const this 
		ָ�򲻿����޸ģ�����ֵ���Ը�
		�ڳ�Ա�������const������ֵҲ���ɸ���*/ 
		
		b = 2;	//��mutable�����޸� 
	}
	void f(){} 
	~test(){} 
};
int main()
{
	const test t;	//������ 
	//t.a = 2; ����������ֻ���޸ļ�mutable�ı��� 
	t.b = 6;
	//t.f(); ����������ֻ�ܵ��ó���������Ϊ��ͨ��Ա�������ܻ��޸����� 
	t.func();
	return 0;
}
