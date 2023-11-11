#include <iostream>
using namespace std;
class complex
{
	float x,y;
	public:
	complex()//no parameters
		{}
	complex(float a)//one perameter passed 8.5+i8.5
		{
			x=a;// 8.5
			y=a;// 8.5
		}
	complex(float real,float imag)//2 perameter passed	6.5+i7.5
	{
		x=real;
		y=imag;
	}
		friend complex sum(complex,complex);//friend function 1
		friend void show(complex);//friend function 2
};
complex sum(complex c1,complex c2)//function calling 1  real>6.5,immg>7.5,real>8.5<immg
{
	complex c3;
	c3.x=c1.x+c2.x; // 6.5+8.5= 15 real
	c3.y=c1.y+c2.y; // 7.5+8.5= 16 imag
	return c3;
}
void show (complex c)//function calling 2
{
	cout<<c.x<<"+i"<<c.y<<"\n";// just to denote corect
	
}
int main()
{
complex a(6.5,7.5);//declraing a as of two parameter 
complex b(8.5);//declraing b as of two parameter 
complex c;//for having +i in between complex and real
c=sum(a,b);
cout<<"a=";show(a);//go to 14 & 31
cout<<"b=";show(b);//go to 9 & 31
cout<<"c=";show(c);//go to 22 for sum & 31
return 0;
}







