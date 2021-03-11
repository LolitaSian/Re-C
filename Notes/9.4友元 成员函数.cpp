#include<iostream>
#include<string>
using namespace std;
class room;
//成员函数做友元
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
	room() :sittingroom("客厅"), bedroom("卧室") {}
private:
	string bedroom;
};
bromeo::bromeo() 
{
	r = new room; 
}
void bromeo::visit()
{
	cout << "好基友正在访问" << r->sittingroom << endl;
	cout << "好基友正在访问" << r->bedroom << endl; 	//如果不是友元这一句是没办法执行的 
}
int main()
{
	bromeo c;
	c.visit();
	return 0;
}
