/*
#include<iostream>
using namespace std;
void swap(int *p1,int *p2)
{
	int mid = *p1;
	*p1 = *p2;
	*p2 = mid;
}
void BubbleSort(int* p, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (p[j] > p[j + 1])
			{
				int mid = p[j];
				p[j] = p[j + 1];
				p[j + 1] = mid;
			}
		}
	}
}
int main()
{
	int a = 10, b = 5;
	int* p = &a;
	//ָ����ǵ�ַ
	cout << "a�ĵ�ַ��" << &a << endl;
	cout << "p�ĵ�ַ��" << p << endl;
	//ָ��ǰ��*��������ã��ҵ�ָ��ָ����ڴ��е�����
	cout << "*p = " << *p << endl;
	cout << "a = " << a << endl;

	const int* q = &a;
	//*q = 20; �����޸�ֵ
	q = &b; //�����޸�ָ��ָ��

	int* const s = &a;
	*s = 666; //�����޸�ֵ
	//s = &b; �����޸�ָ��ָ��

	
	//��������
	cout << "����֮ǰ\n" << "a = " << a << "\t b = " << b << endl;
	swap(a, b);
	cout << "����֮��\n" << "a = " << a << "\t b = " << b << endl;
	
	int arr[10] = { 75,52,24,44,54,78,37,18,90,10 };
	int* ar = arr;
	for (int i = 0; i < 10; i++)
	{
		cout << *ar << " ";
		ar++;
	}
	cout << endl;
	//��װһ����������ð������ʵ����������
	BubbleSort(arr,10);
	ar = arr;
	for (int i = 0; i < 10; i++)
	{
		cout << *ar << " ";
		ar++;
	}

	return 0;
}
*/