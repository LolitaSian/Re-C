#include<iostream>
using namespace std;
#define Sian "�ɰ�"
int main()
{
	cout << "hello world" << endl;
	//���� ���� ���� = ֵ
	//���� ��¼�����в����Ը��ĵĲ���
		// #define �곣��
		// const ���� ���� = ֵ
	cout << "sian�����" << Sian << endl;

	//sizeof(���ͻ����)
	int int1 = 1;
	short short1 = 1;
	cout << "sizeof(int) = " << sizeof(int) << endl;
	cout << "sizeof(short) = " << sizeof(short1) << endl;
	/*
	��������
	- ���ͣ���ʾ������������
		- short:2�ֽ�
		- int:4�ֽ�
		- long:Windows4�ֽ� linux��32λ��4�ֽ� linux��64λ��8�ֽ�
		- long long:8�ֽ�
	- ������
		- float:4B
		- double:8B
	- �ַ���
		- char:1B
		- �õ�������������ֻ����һ���ַ�
		- �ַ���Ӧ��ASCII�룬cout<<(int)a���������a��ASCII�� A64 a97
	- �ַ���
		- C���Է�� char a[] = "sdf";
		- C++��� string a = "asd"; ��Ҫͷ�ļ�#include<string>,vs2019���ü����ͷ�ļ���
		- ��˫����������
	- ������
		- true 1
		- false 0
	*/

	float f1 = 3.14;
	//��Ĭ��3.14��double���ͣ���float����ʱ�����һ������ת������������float����ʱ��߼�f
	float f2 = 3.14f; 

	char c = 'y';
	cout << c << endl;

	//��ѧ������ AeB = A*10^B
	cout << "3e-2 = " << 3e-2 << endl;

	/*
	ת���ַ�
	\b �˸�
	\n ����
	\r �س�
	\t ˮƽ�Ʊ�
	\\ \
	*/

	//�������� cin>>������

	/*
	�����
	- ��������� + - * / % ++ --
	- ��ֵ����� = += -= *= /= %=
	- �Ƚ������ ==��� !=���� > < >= <=
	- �߼������ !�� &&�� ||��
	*/
	int n1 = 2, n2 = 2;
	int n3 = ++n1, n4 = n2++;
	cout << "n1 = " << n1 << endl;
	cout << "n2 = " << n2 << endl;
	cout << "n3 = " << n3 << endl;
	cout << "n4 = " << n4 << endl;
	
	return 0;
}