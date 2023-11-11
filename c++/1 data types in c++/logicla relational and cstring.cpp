#include <iostream>
#include <cstring>
using namespace std;
int main(){
	//logical opertors
	//true is 1 and false is 0
	bool a= true;
	bool b= false;
	cout<<(a&&b)<<endl;
	cout<<(a||b)<<endl;
	cout<<(a&&a)<<endl;
	//relational opertors
	int g=100;
	int h=4000;
	cout<<(g==h)<<endl;
	cout<<(g!=h)<<endl;
	cout<<((h>g)?g:h)<<endl;
	//if its true ? beside will printed or beside : is prined
	char c1[]="great";
	char c2[]="learning";
	cout<<"concetenation:"<<strcat(c1,c2);
	cout<<"\n copy:"<<strcpy(c1,c2);
	cout<<strlen(c1);
	return 0;
	
}
	
