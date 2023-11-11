//multie level inhertaince
#include <iostream>
using namespace std;
class Parent1{
	public:
		void par1(){
			cout<<"this is parent 1";
		}		
};
class Parent2{
	public:
		void par2(){
			cout<<"\nthis is parent 2";
		}
};
class Child: public Parent1, public Parent2{
	public:
		void show_child(){
		cout<<"\nI am child";
		}
};
int main(){
	Child obj;
	obj.par1();
	obj.par2();
	obj.show_child();
	return 0;
	}
