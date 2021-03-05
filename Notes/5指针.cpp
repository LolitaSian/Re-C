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
	//指针就是地址
	cout << "a的地址：" << &a << endl;
	cout << "p的地址：" << p << endl;
	//指针前加*代表解引用，找到指针指向的内存中的数据
	cout << "*p = " << *p << endl;
	cout << "a = " << a << endl;

	const int* q = &a;
	//*q = 20; 不能修改值
	q = &b; //可以修改指针指向

	int* const s = &a;
	*s = 666; //可以修改值
	//s = &b; 不能修改指针指向

	
	//参数传递
	cout << "交换之前\n" << "a = " << a << "\t b = " << b << endl;
	swap(a, b);
	cout << "交换之后\n" << "a = " << a << "\t b = " << b << endl;
	
	int arr[10] = { 75,52,24,44,54,78,37,18,90,10 };
	int* ar = arr;
	for (int i = 0; i < 10; i++)
	{
		cout << *ar << " ";
		ar++;
	}
	cout << endl;
	//封装一个函数，用冒泡排序实现升序排序
	BubbleSort(arr,10);
	ar = arr;
	for (int i = 0; i < 10; i++)
	{
		cout << *ar << " ";
		ar++;
	}

	return 0;
}
