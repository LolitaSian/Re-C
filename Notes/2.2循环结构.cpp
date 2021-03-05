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

	cout << "\n 猜数字游戏" << endl;
	srand((unsigned)time(NULL)); //C++没有随机数random
	int ran = rand() % 100 + 1, val;
	while (cin>>val)
	{
		if (val < ran)
		{
			cout << "太小了，继续猜" << endl;
		}
		else if (val > ran)
		{
			cout << "太大了，继续猜" << endl;
		}
		else
		{
			cout << "恭喜你，猜对了" << endl;
			break;
		}
	}

	//用do while 完成水仙花数（三位数个十百的三次方和等于他本身）
	cout << "三位数的水仙花数：" << endl;
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
	

	//敲桌子。1-100，如果含有7或者是7的倍数打印敲桌子，其他的都打印数字
	for (int i = 1; i <= 100; i++)
	{
		if (i % 7 == 0 || i / 10 ==7 || i % 10 == 7)
		{
			cout << "敲桌子" << endl;
		}
		else
		{
			cout << i << endl;
		}
	}

	//嵌套循环口诀表
	for(int i=1;i<10;i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j << "×" << i << "\t";
		}
		cout << endl;
	}

	return 0;
}
