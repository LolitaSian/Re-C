#include"function.h"
#include<regex>
void ShowMenu()
{
	cout << "***********************" << endl;
	cout << "***** 1添加联系人 *****" << endl;
	cout << "***** 2显示联系人 *****" << endl;
	cout << "***** 3查找联系人 *****" << endl;
	cout << "***** 4修改联系人 *****" << endl;
	cout << "***** 5删除联系人 *****" << endl;
	cout << "***** 6清空联系人 *****" << endl;
	cout << "***** 0退出通讯录 *****" << endl;
	cout << "***********************" << endl;
}
void Write(AddressBook* p, int n)
{
	string input;
	cout << "请输入姓名：";
	cin >> input;
	p->arr[n].name = input;
	cout << "请输入电话：";
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
			cout << "输入错误请重新输入" << endl;
		}
	}
	cout << "请输入备注：";
	cin >> input;
	p->arr[n].tips = input;
}
void Add(AddressBook* p)
{
	if (p->size == MaxSize)
	{
		cout << "通讯录已满，无法添加" << endl;
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
		cout << "通讯录为空" << endl;
	}
	else
	{
		for (int i = 0; i < p->size; i++)
		{
			cout << "联系人" << i + 1 << "\t姓名：" << p->arr[i].name << "\t电话：" << p->arr[i].number << "\t备注：" << p->arr[i].tips << endl;
		}
	}
}
//查找某个联系人姓名
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
		cout << "通讯录为空" << endl;
	}
	else
	{
		cout << "请输入要查找的联系人的姓名：";
		string name;
		cin >> name;
		int n = Find(p, name);
		if (n != -1)
		{
			cout << "联系人" << n << " 姓名：" << p->arr[n].name << " 电话：" << p->arr[n].number << " 备注：" << p->arr[n].tips << endl;
		}
		else
		{
			cout << "通讯录中并无此人" << endl;
		}
	}
}
void Delete(AddressBook* p)
{
	if (p->size == 0)
	{
		cout << "通讯录为空" << endl;
	}
	else
	{
		cout << "请输入要删除联系人的姓名：";
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
			cout << "通讯录中并无此人" << endl;
		}
	}
}
void ReWrite(AddressBook* p)
{
	if (p->size == 0)
	{
		cout << "通讯录为空" << endl;
	}
	else
	{
		cout << "请输入要修改联系人的姓名：";
		string name;
		cin >> name;
		int n = Find(p, name);
		if (n != -1)
		{

			Write(p, n);
		}
		else
		{
			cout << "通讯录中并无此人" << endl;
		}

	}
}
void Clear(AddressBook* p)
{
	if (p->size == 0)
	{
		cout << "通讯录为空" << endl;
	}
	else
	{
		p->size = 0;
		cout << "通讯录已清空" << endl;
		system("cls");
	}
}