#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void myprint(int a)
{
	cout<<a<<endl;
} 
class Person
{
public:
	int age;
	string name;
	Person(string n,int a):name(n),age(a){}
};
int main()
{
	vector<int> a;
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	a.push_back(4);
	a.push_back(5);
	
	//可以用while可以用for，也可以用自带遍历算法 
	for_each(a.begin(),a.end(),myprint);
	for(vector<int>::iterator begin = a.begin();begin != a.end();begin++) 
	{
		myprint(*begin);
	}
	
	//存放自定义数据类型 
	vector<Person> p;
	Person p1("aaa",12);
	Person p2("bbb",12);
	Person p3("ccc",12);
	Person p4("ddd",12);
	Person p5("eee",12);
	p.push_back(p1);
	p.push_back(p2);
	p.push_back(p3);
	p.push_back(p4);
	p.push_back(p5);
	
	for(vector<Person>::iterator begin = p.begin();begin != p.end();begin++) 
	{
		cout<<(*begin).name<<" "<<(*begin).age<<endl;
	}
	
	//存放自定义数据类型的指针
	vector<Person*> pe;
	pe.push_back(&p1);
	pe.push_back(&p2);
	pe.push_back(&p3);
	pe.push_back(&p4);
	pe.push_back(&p5);
	
	for(vector<Person*>::iterator begin = pe.begin();begin != pe.end();begin++) 
	{
		cout<<(*begin)->name<<" "<<(*begin)->age<<endl;
	}
	
	//vector容器嵌套
	vector<vector<int>> v;
	//小容器 
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	vector<int> v4;
	for(int i=0;i<5;i++)
	{
		v1.push_back(i+1);
		v2.push_back(i+2);
		v3.push_back(i+3);
		v4.push_back(i+4);
	}
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);
	//大容器遍历 
	for(vector<vector<int>>::iterator begin = v.begin();begin!=v.end();begin++)
	{
		for(vector<int>::iterator i = (*begin).begin();i!=(*begin).end();i++){
			cout<<*i<<" ";
		}
		cout<<endl;
	} 
	return 0;
} 
