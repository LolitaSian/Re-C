#include<iostream>
#include<string>
using namespace std;
class room
{
	friend void bestfriend(room &p);
	friend class goodgay;
public:
	string sittingroom;
	room():sittingroom("客厅"),bedroom("卧室"){} 
private:
	string bedroom;
};
//全局函数做友元 
void bestfriend(room &p)
{
	cout<<"好朋友正在访问"<<p.sittingroom<<endl; 
	cout<<"好朋友正在访问"<<p.bedroom<<endl; 	//如果不是友元这一句是没办法执行的 
} 
//类做友元
class goodgay
{
public:
	void visit()
	{
		cout<<"好基友正在访问"<<r.sittingroom<<endl; 
		cout<<"好基友正在访问"<<r.bedroom<<endl; 	//如果不是友元这一句是没办法执行的 
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
