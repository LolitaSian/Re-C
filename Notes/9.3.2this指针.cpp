#include<iostream>
using namespace std;
class test
{
public:
	int a;
	test(int a)
	{
		this->a = a;
	}
	void print()
	{
		cout<<"a="<<a<<endl;
	}
	test& add(test &p)	
	/*���ͺ�һ��Ҫ�����ã��������ÿ������캯����9.1.2.1��
	�γ��¶���֮��Ĳ����������¶�����ִ�е�*/
	{
		this->a += p.a;
		return *this;
		//��this���ض�����
	}
	~test(){} 
};
int main()
{
	test t(1);
	t.print();
	/*���û�����ã�t.add(t)�����γ�һ���¶���t'��
	֮���Ƕ�t'����.add(t).add(t).add(t)��Ȼ�󷵻�t''...
	�Դ����ƣ�֮��Ĳ��������ڿ���֮����¶����ϣ�
	���tֻ�����һ����Ӳ���*/ 
	t.add(t).add(t).add(t).add(t);
	t.print();
	
	return 0;
}
