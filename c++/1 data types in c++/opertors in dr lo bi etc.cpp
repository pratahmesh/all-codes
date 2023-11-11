#include <iostream>
using namespace std;
int main (){
	int a,b,c,d,f,g,i,j,k,p;
	cout<<"enter a";
	cin>>a;
	cout<<"enter b";
	cin>>b;

cout<<"binary op sum:"<<a+b<<"\n";
cout<<"ternary op:"<<((a>b)?a:b)<<"\n";
cout<<"relation op:"<<(a<b)<<"\n";
cout<<"logical op:"<<(true&&false)<<" "<<(true&&true)<<" "<<(true||false)<<"\n";
cout<<"assigment op:sum"<<(c+=a)<<"\n";
//the inc and drec are used specratly coz it changes the vlaue of our operators
	cout<<"enter A value to increment:";
	cin>>f;
c=++f;
cout<<"unary op is for n++ is:"<<c<<"\n";
cout<<"enter B value to increment:";
	cin>>g;
	d=g++;
		//the inc and drec are used specratly coz it changes the vlaue of our operators
	cout<<"enter A value to increment:";
	cin>>j;
i=++j;
cout<<"unary op is for n++ is:"<<i<<"\n";
cout<<"enter B value to increment:";
	cin>>k;
	p=k++;
cout<<"unary op is for ++n is:"<<p<<"\n";
cout<<k<<endl;
		return 0;
}
//arithmetic operators
//unary operators ++,--
//binary operators +,-,*,/
//relation opertors
//==,<=,>=,
//logical opertors
//and (&&),or(||),not(!)
//bitwise opertors
//asignment optration
