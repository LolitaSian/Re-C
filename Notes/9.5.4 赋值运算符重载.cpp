#include<iostream>
using namespace std;
class number
{
public:
	int *n;
	number(int a)
	{
		n = new int(a);	
	}
	void operator=(number &p)	//һ��Ҫ����&������ִ�����p�ͱ������ˡ�
	{
		//�������ṩ����ǳ������Ҫ�Լ�����дһ�����
		if (n != NULL)
		{
			delete n;
			n = NULL;
		}
		n = new int(*p.n);
	}
	~number()
	{
		if (n != NULL)
		{
			delete n;
			n = NULL;
		}
	}
};
int main()
{
	number a(5);
	number b(7);
    cout << *a.n << endl;
	cout << *b.n << endl;
	b = a;
	cout << *a.n << endl;
	cout << *b.n << endl;
	return 0;
}
