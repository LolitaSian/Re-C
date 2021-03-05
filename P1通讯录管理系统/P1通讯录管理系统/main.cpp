#include<iostream>
#include<cstring>
#include"function.h"
using namespace std;

int main()
{
	AddressBook ab;
	while (true)
	{
		ShowMenu();
		int choice;
		cin >> choice;
		switch (choice)
		{
		case 1:
			Add(&ab);
			break;
		case 2:
			Print(&ab);
			break;
		case 3:
			Search(&ab);
			break;
		case 4:
			ReWrite(&ab);
			break;
		case 5:
			Delete(&ab);
			break;
		case 6:
			Clear(&ab);
			break;
		case 0:
			cout << "欢迎下次使用" << endl;
			return 0;
		}
	}
}