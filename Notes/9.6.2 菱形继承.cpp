#include<iostream>
using namespace std;
class animal
{
	string name;
};
class sheep:virtual public animal {}; 
class camel:virtual public animal {}; 
class camel1:virtual public animal {}; 
class llama:public sheep,public camel,public camel1 {}; 
int main()
{
	animal a;
	sheep s;
	camel c;
	llama l;
	cout<<sizeof(a)<<endl<<sizeof(s)<<endl<<sizeof(c)<<endl<<sizeof(l)<<endl;
	return 0; 
}
