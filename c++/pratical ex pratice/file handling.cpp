#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ofstream fout;//write in folder 
	fout.open("country");//creating folder for storing country
	fout<<"\t INDIA \n\tUSA \n\tJAPAN";//input in folders
	fout.close();
	fout.open("capital");//creating folder for storing captil
	fout<<"DELHI \nWASHINTON \nTOKYO";//input in folders
	fout.close();
	const int n=80;
	char line1[n],line2[2];
	ifstream fin1,fin2;//to read input
	fin1.open("country");//to read input in country
	fin2.open("capital");//to read input in capital
	while (fin1&&fin2)
	{
		fin1.getline(line1,n);
		fin2.getline(line2,n);
		cout<<line1<<"-"<<line2<<endl;//representing
	}
	return 0;
}
