#include<iostream>
using namespace std;
int main()
{
	int x,y;
	void swap(int*x,int*y);//parameter by referancne
	x=100;
	y=20;
	cout<<"X="<<x<<" Y="<<y<<endl;
	swap(&x,&y);
	cout<<"X="<<x<<" Y="<<y<<endl;
	return 0;	
}
void swap(int*x,int*y)//function call by value
{
int temp;
temp=*x;
*x=*y;
*y=temp;
}

