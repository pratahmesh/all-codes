//functions: the set of task performed at same time
//overloding:function whith same name different function defination
#include <iostream>
using namespace std;

int add(int x,int y){
	return x+y;
}
double add(double  x,double y){
	return x+y;
}
int main(){
	cout<<"add int: "<<add(80,43);		
    cout<<"\nadd double: "<<add(3.45,5.67);
	return 0;
}
