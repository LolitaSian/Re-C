
#include<iostream>
#include"4����.h"
using namespace std;
int add(int a, int b); //ab���β�
void swap(int a, int b) //ֵ�����βθı䲻Ӱ��ʵ��
{
	int c = a;
	a = b;
	b = c;
}
int main()
{
	int n1 = 2, n2 = 8;
	cout << add(n1, n2)<<endl; // n1n2��ʵ�� 
	cout << "����ǰ: a = " << n1 << ", b = " << n2 << endl;
	swap(n1, n2);
	cout << "������: a = " << n1 << ", b = " << n2 << endl;

	cout << multiply(n1, n2) << endl; // n1n2��ʵ�� 
	return 0;
}
int add(int a, int b) //ab���β�
{
	int sum = a + b;
	return sum;
}
