#include<iostream>
using namespace std;
class animal
{
public:
	//����virtual�����麯���� 
	virtual void speak()
	{
		cout<<"�����ڽ�"<<endl; 
	}
	// virtual void speak() = 0��  ���麯�� 
};
class cat:public animal 
{
public:
	void speak(){cout<<"������"<<endl; }
}; 
class dog:public animal 
{
public:
	void speak(){cout<<"������"<<endl; }
}; 
void doSpeak(animal &a)
{
	a.speak();
}
int main()
{
	cat c;
	doSpeak(c); 
	/*�β���animal &a ʵ���� cat c ���������ָ��һ������Ķ���
	��C++֮������������ֱ��ת�� 
	ִ���������֮������ǡ������ڽС�
	��Ϊ��ַ��󶨣��ڱ���׶ξ�ȷ���˺�����ַ 
	�����ʾ���������������͵��õ���̬��̬*/ 
	dog d;
	doSpeak(d);
	
	return 0;
}
