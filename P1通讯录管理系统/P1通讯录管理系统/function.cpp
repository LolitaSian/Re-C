#include"function.h"
#include<regex>
void ShowMenu()
{
	cout << "***********************" << endl;
	cout << "***** 1�����ϵ�� *****" << endl;
	cout << "***** 2��ʾ��ϵ�� *****" << endl;
	cout << "***** 3������ϵ�� *****" << endl;
	cout << "***** 4�޸���ϵ�� *****" << endl;
	cout << "***** 5ɾ����ϵ�� *****" << endl;
	cout << "***** 6�����ϵ�� *****" << endl;
	cout << "***** 0�˳�ͨѶ¼ *****" << endl;
	cout << "***********************" << endl;
}
void Write(AddressBook* p, int n)
{
	string input;
	cout << "������������";
	cin >> input;
	p->arr[n].name = input;
	cout << "������绰��";
	while (true)
	{
		cin >> input;
		if (regex_match(input, regex("\\d{11}")))
		{
			p->arr[n].number = input;
			break;
		}
		else
		{
			cout << "�����������������" << endl;
		}
	}
	cout << "�����뱸ע��";
	cin >> input;
	p->arr[n].tips = input;
}
void Add(AddressBook* p)
{
	if (p->size == MaxSize)
	{
		cout << "ͨѶ¼�������޷����" << endl;
		return;
	}
	else
	{
		Write(p, p->size);
		p->size++;
	}
}
void Print(AddressBook* p)
{
	if (p->size == 0)
	{
		cout << "ͨѶ¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < p->size; i++)
		{
			cout << "��ϵ��" << i + 1 << "\t������" << p->arr[i].name << "\t�绰��" << p->arr[i].number << "\t��ע��" << p->arr[i].tips << endl;
		}
	}
}
//����ĳ����ϵ������
int Find(AddressBook* p, string s)
{
	for (int i = 0; i < p->size; i++) 
	{
		if (s == p->arr[i].name)
			return i;
	}
	return -1;
}
void Search(AddressBook* p)
{
	if (p->size == 0)
	{
		cout << "ͨѶ¼Ϊ��" << endl;
	}
	else
	{
		cout << "������Ҫ���ҵ���ϵ�˵�������";
		string name;
		cin >> name;
		int n = Find(p, name);
		if (n != -1)
		{
			cout << "��ϵ��" << n << " ������" << p->arr[n].name << " �绰��" << p->arr[n].number << " ��ע��" << p->arr[n].tips << endl;
		}
		else
		{
			cout << "ͨѶ¼�в��޴���" << endl;
		}
	}
}
void Delete(AddressBook* p)
{
	if (p->size == 0)
	{
		cout << "ͨѶ¼Ϊ��" << endl;
	}
	else
	{
		cout << "������Ҫɾ����ϵ�˵�������";
		string name;
		cin >> name;
		int n = Find(p, name);
		if (n != -1)
		{

			for (int i = n; i < p->size; i++)
			{
				if (i != MaxSize - 1)
				{
					p->arr[i] = p->arr[i + 1];
				}
				else
				{
					p->arr[i] = { "","","" };
				}
			}
			p->size--;
		}
		else
		{
			cout << "ͨѶ¼�в��޴���" << endl;
		}
	}
}
void ReWrite(AddressBook* p)
{
	if (p->size == 0)
	{
		cout << "ͨѶ¼Ϊ��" << endl;
	}
	else
	{
		cout << "������Ҫ�޸���ϵ�˵�������";
		string name;
		cin >> name;
		int n = Find(p, name);
		if (n != -1)
		{

			Write(p, n);
		}
		else
		{
			cout << "ͨѶ¼�в��޴���" << endl;
		}

	}
}
void Clear(AddressBook* p)
{
	if (p->size == 0)
	{
		cout << "ͨѶ¼Ϊ��" << endl;
	}
	else
	{
		p->size = 0;
		cout << "ͨѶ¼�����" << endl;
		system("cls");
	}
}