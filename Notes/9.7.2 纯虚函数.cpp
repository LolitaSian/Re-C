#include<iostream>
using namespace std;
class animal 	//³éÏóÀà 
{
public:
	virtual void speak() = 0;	//´¿Ğéº¯Êı 
}; 
class cat:public animal
{
public:
	virtual void speak()
	{
		cout<<"ß÷ß÷ß÷"<<endl; 
	}
};
int main()
{
	cat a;
	a.speak();
	return 0;
}
