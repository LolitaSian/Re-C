#include<iostream>
#include<ctime>
#include<cmath>
using namespace std;
int main()
{	
	int num = 0;
	while (num < 10)
	{
		cout << ++num << endl;
	}

	cout << "\n ��������Ϸ" << endl;
	srand((unsigned)time(NULL)); //C++û�������random
	int ran = rand() % 100 + 1, val;
	while (cin>>val)
	{
		if (val < ran)
		{
			cout << "̫С�ˣ�������" << endl;
		}
		else if (val > ran)
		{
			cout << "̫���ˣ�������" << endl;
		}
		else
		{
			cout << "��ϲ�㣬�¶���" << endl;
			break;
		}
	}

	//��do while ���ˮ�ɻ�������λ����ʮ�ٵ����η��͵���������
	cout << "��λ����ˮ�ɻ�����" << endl;
	int nas = 100;
	do
	{
		if (pow(nas % 10,3) + pow(nas / 10 % 10,3) + pow(nas / 100,3) == nas)
		{
			cout << nas << endl;
		}
		nas++;
	} while (nas < 1000);
	

	for (int i=0;i<10;i++)
	{
		cout << i << endl;
	}
	

	//�����ӡ�1-100���������7������7�ı�����ӡ�����ӣ������Ķ���ӡ����
	for (int i = 1; i <= 100; i++)
	{
		if (i % 7 == 0 || i / 10 ==7 || i % 10 == 7)
		{
			cout << "������" << endl;
		}
		else
		{
			cout << i << endl;
		}
	}

	//Ƕ��ѭ���ھ���
	for(int i=1;i<10;i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j << "��" << i << "\t";
		}
		cout << endl;
	}

	return 0;
}
