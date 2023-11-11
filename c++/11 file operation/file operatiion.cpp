//file opertions
//ofstream-used for write files, ifstream-used for reading files, fstream-used for write and read
//file creation: open(),data read: read(),data write: write(),file closing: close()
#include <iostream>
#include <fstream>
using namespace std;
int main(){
		ofstream Myfile("abcd.txt");
	Myfile <<"this is op ok now i am learing c++ in advance in the ajdfionao and having so much fun this is the null typing to see how it comes out ";
	Myfile.close();
	
	//if we cancel the code belove the come out to be null
	string myText;
	ifstream MyReadFile("abcd.txt");
while(getline(MyReadFile,myText))
	cout<<myText;

}






