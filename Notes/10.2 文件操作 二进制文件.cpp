#include<iostream>
#include<fstream>
class Person
{
public:
	char name[32];	//�Ƚϵײ�Ķ�����C�ķ���д�����׳����� 
	int age;
}; 
using namespace std;
int  main()
{
	//����������
	ofstream file("10.2.txt",ios::out|ios::binary);
	
	//���ļ���C++�ṩ�˹��캯�������ڴ�����ʱ��ֱ�Ӵ�  
	//file.open("10.2.txt",ios::out|ios::binary); 
	
	//д�ļ� 
	Person zs = {"����",18};
	file.write((const char*)&zs,sizeof(Person));
	
	//�ر��ļ� 
	file.close();
	
	//�������� 
	ifstream i;
	
	//���ļ�
	i.open("10.2.txt",ios::in|ios::binary); 
	if(!i.is_open())
	{
		cout<<"�ļ���ʧ��"<<endl;
		return 0;
	} 
	
	//���ļ�
	Person p;
	i.read((char*)&p,sizeof(Person)); 
	cout<<p.name<<" "<<p.age<<endl;
	
	//�ر�
	i.close();
	 
	return 0;
} 
