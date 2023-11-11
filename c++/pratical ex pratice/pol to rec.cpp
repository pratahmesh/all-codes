#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

float x,y,ang,r,rad,angle;

class polar 
{
	public:
		void rectopol(float,float)
		{
			r=pow((x*x+y*y),0.5);
			angle=atan2(y,x);
			cout<<"\n The polar coordinates are:";
			cout<<"\nR="<<r<<endl<<"angles="<<angle<<"radians";
		}
		void getinfo()
		{
			cout<<"\n Enter Rectangle Coordinates:"<<endl;
			cin>>x>>y;
		}
};
class rectangular
{
	public:
	void getinfo()
	{
	cout<<"\nEnter the radius and angle"<<endl;
	cin>>rad>>ang;	
	}
	void poltorec(float,float)
	{
		x=rad*cos(ang);
		y=rad*sin(ang);
		cout<<"\nThe rectangular coordinates are:"<<endl;
		cout<<"X="<<x<<"\nY"<<y<<endl;
	}
};
int main()
{
	int opt;
	cout<<"INput option:"<<endl;
	cout<<"1.Rectangular To Polar \n2.Polar TO Rectangualar \n3.Quit\n"<<endl;
	cin>>opt;
	switch(opt)
	{
	case 1:
		polar q;
		q.getinfo();
		q.rectopol(x,y);
		break;
	case 2:
		rectangular p;
		p.getinfo();
		p.poltorec(rad,ang);
		break;
	case 3:
		exit(0);
			
	default:
		cout<<"Enter correct option";			
	}
return 0;
}
