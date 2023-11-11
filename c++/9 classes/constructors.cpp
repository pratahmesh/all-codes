//constructors are special function of a class which are used to intialize the attributes of a class
//they are of two types parameterized and non parameterized 
//name and name of class same ,it doesnt have return type
#include <iostream>
using namespace std;
class Myclass{
	public:
	int a;
	int b;
	Myclass(int x, int y){
		a=x+y;
		b=y-x;
	}
	void print(){
		cout<<"a:"<<a;
		cout<<"\nb:"<<b;
	}
};
int main(){
	Myclass m1(10,20);
	m1.print();
	return 0;
}
