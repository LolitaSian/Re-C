#include<iostream>
using namespace std;
#define MaxSize 5

//��ϵ�˽ṹ��
struct Person
{
	string name;
	string number;
	string tips;
};
//ͨѶ¼�ṹ��
struct AddressBook
{
	Person arr[MaxSize];
	int size = 0;
};
void ShowMenu();
void Write(AddressBook* p, int n);
void Add(AddressBook* p);
void Print(AddressBook* p);
int Find(AddressBook* p, string name);
void Search(AddressBook* p);
void Delete(AddressBook* p);
void ReWrite(AddressBook* p);
void Clear(AddressBook* p);