#include<iostream>
using namespace std;
class test1
{
	 
};
class test2
{
	int a;
};
class test3
{
	int a;
	static int b;
	void func(){};
	static void f(){}
};
int main()
{
	//C++��ÿ���ն������һ���ֽڵĿռ䣬Ϊ�����ֿն���ռ�ڴ��λ��
	//ÿ���ն���Ҳ��һ����һ�޶����ڴ��ַ 
	test1 t1;
	cout<<"sizeof(t1)="<<sizeof(t1)<<endl;
	
	//������ǿյģ��Ͱ����ڲ����ݷ���ռ� 
	test2 t2;
	cout<<"sizeof(t2)="<<sizeof(t2)<<endl;
	
	//ֻ�зǾ�̬�ĳ�Ա������������Ķ�����
	test3 t3;
	cout<<"sizeof(t3)="<<sizeof(t3)<<endl;
	return 0;
}
