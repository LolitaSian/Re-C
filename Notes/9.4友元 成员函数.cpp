#include<iostream>
#include<string>
using namespace std;
class room;
//��Ա��������Ԫ
class bromeo
{
public:
	room *r;
	bromeo();
	void visit();
};
class room
{
	friend void bromeo::visit();
public:
	string sittingroom;
	room() :sittingroom("����"), bedroom("����") {}
private:
	string bedroom;
};
bromeo::bromeo() 
{
	r = new room; 
}
void bromeo::visit()
{
	cout << "�û������ڷ���" << r->sittingroom << endl;
	cout << "�û������ڷ���" << r->bedroom << endl; 	//���������Ԫ��һ����û�취ִ�е� 
}
int main()
{
	bromeo c;
	c.visit();
	return 0;
}
