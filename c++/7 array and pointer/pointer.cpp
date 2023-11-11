//pointers are variables which store the address of a variable
#include <iostream>
#include <string>
using namespace std;
int main(){
	string name="Great Learning";// a vaiable of type string
	string*ptr=&name;//a pointer variable with the name ptr thatdrtore the address of name
	//output the value name
	cout<<"vlaue of variable: "<<name<<"\n";
	//output the memory address of name
	cout<<"address of variable: "<<&name<<"\n";
	//output the memory address of name with the pointer 
	cout<<"address of variable: "<<ptr<<"\n";
return 0;
}
