#include<iostream>
#include<string>
using namespace std;
void test1()	//构造函数 
{
	string s1;

	const char* a = "hello";
	string s2(a);
	
	string s = "喵喵喵";
	string s3(s);
	
	char c = 'a';	
	string s4(7,c);
	
	cout<<s1<<endl;
	cout<<s2<<endl;
	cout<<s3<<endl;
	cout<<s4<<endl;
	cout<<"--------------"<<endl;
}
void test2()	//赋值 
{
	string str = "hello";
	string s1 = str;
	string s2 = "a";
	string s3,s4,s5,s6;
	s3.assign("hello");
	s4.assign("hello",3);
	s5.assign(5,'a');
	s6.assign(s5);
	cout<<s1<<endl; 
	cout<<s2<<endl; 
	cout<<s3<<endl; 
	cout<<s4<<endl; 
	cout<<s5<<endl; 
	cout<<s6<<endl; 
	cout<<"--------------"<<endl;
} 
void test3()
{
	cout<<"--------------"<<endl;
}
void test4()
{
	cout<<"--------------"<<endl;
} 
void test5()
{
	cout<<"--------------"<<endl;
}
int main()
{
	test1();
	test2();
	test3();
	test4();
	test5();
	return 0;
} 
