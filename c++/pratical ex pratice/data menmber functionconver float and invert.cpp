#include <iostream>
using namespace std;
class ratio
{
	float deno,num,temp,n,d;//declare variable 
	public:
	 	void assign(int n,int d) //acc to question making function
		{
			num=n;
			deno=d;
		}
		//making function
		float convert();
		void invert();
		void print();
};
float ratio::convert()//inherting convert for divison only acc to condition
{
	return num/deno;
}
void ratio::invert()//inherting invert by swapping
{
	temp=num;
	num=deno;
	deno=temp;
}
void ratio::print()//inherting print for proper formating
{
	cout<<num<<"/"<<deno<<endl;
}
int main(){
	ratio r;
	r.assign(33,7);//passing perameter
	cout<<"x:";
	r.print();//for print 33\7
	cout<<"="<<r.convert();//answer will be given by convert (e1)
	cout<<"\n 1/x:";
	r.invert();//to invert the 33\7 to 7\33 by swapping 
	r.print();//for print 7\33
	cout<<"="<<r.convert();//answer will be given by convert
	return 0;//btw after (e1) the vaule will be printed again
}




