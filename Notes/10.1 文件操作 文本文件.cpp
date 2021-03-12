#include<iostream>
#include<fstream>
using namespace std;
int  main()
{
	//写文件 
	ofstream f;
	f.open("10.1.txt",ios::out);
	//使用相对路径 
	f<<"test1\ntest2"<<endl;
	f.close(); 
	
	//读文件
	ifstream i;
	i.open("10.1.txt",ios::in);
	if(!i.is_open())
	{
		cout<<"文件打开失败"<<endl;
		return 0;
	} 
	//读数据1
	char rec[1024]={0};
	while(i>>rec){
		cout<<rec<<endl;
	} 
	/*
	//读数据2
	char rec[1024]={0};
	while(i.getline(rec,sizeof(rec))) 
	{
		cout<<rec<<endl;
	}
	//读数据3 
	string rec;
	while(getline(i,rec)){
		cout<<rec<<endl;
	} 
	//读数据4
	char c;
	while((c=i.get())!=EOF)
	{
		cout<<c;
	} 
	*/
	i.close();
	return 0;
} 
