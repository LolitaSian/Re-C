#include<iostream>
using namespace std;
int main()
{
	cout << 1 << endl;
	cout << 2 << endl;
	cout << 3 << endl;
	goto FLAG;
	cout << 4 << endl;
	cout << 5 << endl;
	FLAG:	//λ����ð�ţ�һ�㶼��д
	cout << 6 << endl;

}