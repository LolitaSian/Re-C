#include<iostream>
using namespace std;
void swap1(int a,int b)
{
	int c = a;
	a = b;
	b = c;
}
void swap2(int* a,int* b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
void swap3(int &a,int &b)
{
	int c = a;
	a = b;
	b = c;
}
int &test()
{
	static int num = 666;
	return num;
}
void print(const int &n)
{
	cout<<"n = "<<n<<endl;
}
int main()
{
	int a=1,b=5;
	cout<<"a="<<a<<"\tb="<<b<<endl;
	//swap1(a,b);
	//swap2(&a,&b);
	swap3(a,b);
	cout<<"a="<<a<<"\tb="<<b<<endl;
	
	//�����������ֵ�����ã������ĵ��ÿ�����Ϊ��ֵ��
	int &res = test();
	cout<<"res = "<<res<<endl;
	res = 100;
	cout<<"res = "<<res<<endl;
	test() = 200;
	cout<<"res = "<<res<<endl;
	
	//���ñ������úϷ����ڴ�ռ�
	const int &q = 10; 
	//���������βΣ���ֹ�������
	int d = 10;
	print(d);
	cout<<"d = "<<d<<endl;
	
	return 0;
} 
