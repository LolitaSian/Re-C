#include<iostream>
#include<string>
using namespace std;
class animal 	//������ 
{
public:
	animal()
	{
		cout<<"animal����"<<endl;
	}
	virtual void speak() = 0;	//���麯��
	/*virtual ~animal()	//������ 
	{
		cout<<"animal����"<<endl;
	} */
	//��������  
	virtual ~animal() = 0;  
}; 
//animal�Ĵ�������
animal::~animal()
{
	cout<<"animal��������"<<endl;
} 
class cat:public animal
{
public:
	string *name; 
	cat(string n)
	{
		name = new string(n);
		cout<<"cat����"<<endl;
	}
	virtual void speak()
	{
		cout<<*name<<"������"<<endl; 
	}
	~cat()
	{
		delete name;
		name = NULL;
		cout<<"cat����"<<endl;
	}
};
int main()
{
	animal* c = new cat("tom");
	c->speak();
	/*����ָ��������ʱ�򲻻������������������
	�ᵼ���������ڶ��������ԣ��������й¶
	�ĳ�������֮��ͻ������������*/ 
	delete c;
	return 0;
}
