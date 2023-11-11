#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	int i,j,t;
	cout<<"Enter 10 numbers which are to be sorted\n";
	
	for(i=0;i<=9;i++)//92 83 54 19 15 45 67 56 34 13
	{                // 0 1  2  3  4  5  6  7  8  9   
	cin>>arr[i];	//4th 19
	}
	for(i=1;i<10;i++)//4 ++
	{
	for(j=0;j<=10-i;j++)//j=4-1=3
	{
	if(arr[j]>arr[j+1])	//arr[j]=19>arr[3+1]=15
	{                   // arr[3]>arr[4] therefore 19>15 hence swap 
		t=arr[j];
		arr[j]=arr[j+1]; //algo for swap
		arr[j+1]=t;
	}
	}
	}
	cout<<"\nsorted list is:";//store again
	for(i=0;i<=9;i++)
	{
		cout<<arr[i]<<endl;
	}
	return 0;
	
}
