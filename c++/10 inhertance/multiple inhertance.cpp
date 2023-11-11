//multie level inhertaince
#include <iostream>
using namespace std;
class Grandparent{
	public:
	string name;
	void get_name(string n){
		name=n;
	}
	void  put_name(){
		cout<<"\nname is: "<<name;
	}
	
};

class Parent: public Grandparent{
	public:
		int age;
		void get_age(int a){
			age=a;
			
		}
		void put_age(){
		cout<<"\nage is: "<<age;
		}
};

class Child: public Parent{
	public:
	string gender;
    void get_gender(string g){
    	gender=g;
	}
	void put_gender(){
		cout<<"\ngender is: "<<gender;
	}

};

int main(){
	
   Child c;
           c.get_name("prathamesh");
           c.get_age(25);
           c.get_gender("male");
           
           c.put_name();
           c.put_age();
           c.put_gender();
return 0;
}




