#include <iostream>
using namespace std;
class person//base class
{
	public:
		virtual void print()//virtual funtion //here word virtual is so important
		{
			cout<<"Bob\n";
		}
};
class student:public person//derived class 
{
	public:
	void print()
{
	cout<<"Tom\n";
}
};
int main()
{
	person x,*p;//base class 
	student y;//derived class
	p=&x;
	p->print();//call THIS function
	p=&y;
	p->print();
	return 0;
}
