#include<iostream>
#include<fstream>
using namespace std;
int  main()
{
	//д�ļ� 
	ofstream f;
	f.open("10.1.txt",ios::out);
	//ʹ�����·�� 
	f<<"test1\ntest2"<<endl;
	f.close(); 
	
	//���ļ�
	ifstream i;
	i.open("10.1.txt",ios::in);
	if(!i.is_open())
	{
		cout<<"�ļ���ʧ��"<<endl;
		return 0;
	} 
	//������1
	char rec[1024]={0};
	while(i>>rec){
		cout<<rec<<endl;
	} 
	/*
	//������2
	char rec[1024]={0};
	while(i.getline(rec,sizeof(rec))) 
	{
		cout<<rec<<endl;
	}
	//������3 
	string rec;
	while(getline(i,rec)){
		cout<<rec<<endl;
	} 
	//������4
	char c;
	while((c=i.get())!=EOF)
	{
		cout<<c;
	} 
	*/
	i.close();
	return 0;
} 
