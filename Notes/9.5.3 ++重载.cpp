#include<iostream>
using namespace std;
class myInteger
{
	friend ostream & operator<<(ostream &cout,myInteger s);
private:
	int n ; 
public:
	myInteger():n(0){}
	//����ǰ��++�����
	myInteger& operator++()	
	//��������Ϊ�˶�ͬһ�����ݲ���  
	{
		n++;
 		return *this;
	} 
	//���غ���++����� 
	myInteger& operator++(int) 
	{
		myInteger temp = *this;
		n++;
		return temp;
	} 
	//intռλ������������ǰ�ú��õ����� 
};
ostream & operator<<(ostream &cout,myInteger s)
{
	cout<<s.n;
	return cout;
} 
int main()
{
	myInteger n;
	cout<<n++<<endl;
	return 0;
}
