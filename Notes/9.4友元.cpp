#include<iostream>
#include<string>
using namespace std;
class room
{
	friend void bestfriend(room &p);
	friend class goodgay;
public:
	string sittingroom;
	room():sittingroom("����"),bedroom("����"){} 
private:
	string bedroom;
};
//ȫ�ֺ�������Ԫ 
void bestfriend(room &p)
{
	cout<<"���������ڷ���"<<p.sittingroom<<endl; 
	cout<<"���������ڷ���"<<p.bedroom<<endl; 	//���������Ԫ��һ����û�취ִ�е� 
} 
//������Ԫ
class goodgay
{
public:
	void visit()
	{
		cout<<"�û������ڷ���"<<r.sittingroom<<endl; 
		cout<<"�û������ڷ���"<<r.bedroom<<endl; 	//���������Ԫ��һ����û�취ִ�е� 
	}
	room r;
}; 

int main()
{
	room a;
	bestfriend(a);
	
	goodgay b;
	b.visit();
	
	return 0;
} 
