#include<iostream>
#include<fstream>
class Person
{
public:
	char name[32];	//比较底层的东西用C的方法写不容易出问题 
	int age;
}; 
using namespace std;
int  main()
{
	//创建流对象
	ofstream file("10.2.txt",ios::out|ios::binary);
	
	//打开文件，C++提供了构造函数可以在创建的时候直接打开  
	//file.open("10.2.txt",ios::out|ios::binary); 
	
	//写文件 
	Person zs = {"张三",18};
	file.write((const char*)&zs,sizeof(Person));
	
	//关闭文件 
	file.close();
	
	//创建对象 
	ifstream i;
	
	//打开文件
	i.open("10.2.txt",ios::in|ios::binary); 
	if(!i.is_open())
	{
		cout<<"文件打开失败"<<endl;
		return 0;
	} 
	
	//读文件
	Person p;
	i.read((char*)&p,sizeof(Person)); 
	cout<<p.name<<" "<<p.age<<endl;
	
	//关闭
	i.close();
	 
	return 0;
} 
