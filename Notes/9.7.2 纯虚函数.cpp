#include<iostream>
using namespace std;
class animal 	//������ 
{
public:
	virtual void speak() = 0;	//���麯�� 
}; 
class cat:public animal
{
public:
	virtual void speak()
	{
		cout<<"������"<<endl; 
	}
};
int main()
{
	cat a;
	a.speak();
	return 0;
}
