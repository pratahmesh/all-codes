#include <iostream>
using namespace std;
class student
{
	protected:
int rollno;
char name[10];
public:
void getdata()
	{
		cout<<"Enter student Roll no:";
		cin>>rollno;
		cout<<"Enter student Name:";
		cin>>name;
	}
void putdata()
{
	cout<<"\n The Roll No. is:"<<rollno;
	cout<<"\n Name is:"<<name;	
}
};
class test:public student
{
protected:
	int cs,phy;
public:
	void getmamarks()
			{
				cout<<"\n Enter marks obtained in cs:";
				cin>>cs;
				cout<<"\n Enter marks obtained in physic:";
				cin>>phy;	
			}
	 void putmamarks()
		    {
		    	cout<<"\nmarks obtained in cs:";
		    	cout<<"\nmarks obtained in physic:";
			}
};










