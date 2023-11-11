// array singal dimensional , multi demensional(martix)
// int a[10]
// double b[10][10]
// static initialization int a[10]={0,1,2,3,4,5,6,7,8,9,10} mannual value
// char c[5]={'h','e','l','l','o'}
// dynamic initialization int a[10]; store garbage value
// for (int i=0;i<n;i++)
// cin>>a[i];
#include <iostream>
using namespace std;
void printArray(int arr[], int size)
{
	cout << "printing array" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "printing done" << endl;
}
int main()
{
	int n;
	// int a[5] = {1, 2, 3, 4, 5};
	// for (int i = 0; i < 5; i++)
	// {
	// 	cout << a[i] << " " << endl;
	// }
	// char c[5] = {'h', 'e', 'l', 'l', 'o'};
	// for (int i = 0; i < 5; i++)
	// {
	// 	cout << c[i] << " ";
	// }
	// cout << endl;
	int third[12] = {2, 7};
	n = 3;
	for (int i = 0; i < n; i++)
	{
		cout << third[i] << " ";
	}
	cout << endl;
	// printArray(third, 10);
	int thirdSize=sizeof(third)/sizeof(int);
	cout<<"Size of third array is: "<<thirdSize<<endl;
	cout << endl;
	int fourth[10] = {0};
	;
	printArray(fourth, 10);

	cout << endl;

	int fifth[15] = {1};
	// n=10;
	// 	for(int i=0;i<n;i++)
	// {
	// 	cout<<fifth[i]<<" ";
	// }
	printArray(fifth, 15);
	int fifthSize=sizeof(fifth)/sizeof(int);
	//int as 4bytes and if we asign 15 elements in array 15*4=60 ttotal size 60 hence we divide 60/4 =15 sizeof elements
	cout<<"Size of fifth array is: "<<fifthSize<<endl;

char op[5]={'a','b','c','r','p'};
for (int i = 0; i < 5; i++)
	{
		cout << op[i] << " ";
	}

		return 0;
}