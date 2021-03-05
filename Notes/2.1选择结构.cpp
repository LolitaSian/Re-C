#include<iostream>
using namespace std;
int main()
{
	int score;
	cout << "if-else: \n 请输入初试分数" << endl;
	cin >> score;
	if (score > 250)
	{
		cout << "通过初试，可以参加复试" << endl;
	}
	else
	{
		cout << "未通过" << endl;
	}

	cout << "if-elseif: \n 请输入初试分数" << endl;
	cin >> score;
	if (score >= 300)
	{
		cout << "通过初试，放心参加复试" << endl;
	}
	else if (score >= 250 && score < 300)
	{
		cout << "通过初试，分数较低请考虑调剂" << endl;
	}
	else
	{
		cout << "未通过" << endl;
	}

	cout << "给电影打分1-5" << endl;
	cin >> score;
	switch (score)
	{
	case 5:
		cout << "您认为是经典电影" << endl;
		break;
	case 4:
		cout << "您认为电影较好" << endl;
		break;
	case 3:
		cout << "您认为电影一般" << endl;
		break;
	default:
		cout << "您认为电影较差" << endl;
		break;
	}
	return 0;
}
