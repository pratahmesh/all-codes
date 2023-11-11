#include <iostream>
using namespace std;
class ratio
{
	public:
	ratio();//contructor 
	void ratiox();//insitze
	~ratio();	//destructor
};

ratio::ratio()//inhertance
{
	cout<<"\n Object born"; //initialization
}
void ratio::ratiox()//inhertance
{
	cout<<"\n Now x is alive";  //called the program must dispaly
}
ratio::~ratio()//inhertance
{
	cout<<"\n Object dies";   //object reaches end of its scope
}

int main()
{
{
ratio r;
r.ratiox();
}
return 0;
}

