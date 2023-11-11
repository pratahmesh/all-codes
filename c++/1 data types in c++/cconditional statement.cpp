//coditional statement
#include <iostream>
using namespace std;
int main(){
	int a=20;
	int b=30;
	
	if(b<a){
		cout<<"b is greater than a";
	}
	else{
		cout<<"a is smaller than b"<<endl;
	}
	
	//example
	int c,d,e;
	cout<<"enter the 1st no:"; 
	cin>>c;
		cout<<"enter the 2nd no:"; 
	cin>>d;
		cout<<"enter the 3rd no:"; 
	cin>>e;
	if(c>d){
		if (c>e){
			cout<<"a is the largest number";
		}
	}
	else{
		if(d>e){
			cout<<"b is the largest number";
		}
		else{
			cout<<"c is the largest number";
		}
	}
	
	
	int t=30;
	int u=90;
	int y=60;
	if((t>u)&&(t>y)){
		cout<<"\nt  is greater";
	}else if((u>t)&&(u>y)){	
	cout<<"\nu  is greater";
}
else{
	cout<<"\ny  is greater";
}
	
	//switch case when we use multiple conditional statement
	int q;
	cout<<"\nenter no.";
	cin>>q;
	switch(q){
		case 1:
			cout<<"1 is stored in a";
			break;
			case 2:
			cout<<"2 is stored in a";
			break;
			case 3:
			cout<<"3 is stored in a";
			break;
			default:
				cout<<"none of the value match";
	}
return 0;
}

