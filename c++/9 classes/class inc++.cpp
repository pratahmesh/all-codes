// //class is the bundle of function
// #include <iostream>
// using namespace std;
// //name of the class should start with capital
// class Student{
// 	public: //acecss spicifiers
// 	int id;
// 	string name;
// 	void putdata(int i,string n){
// 		id=i;
// 		name=n;	
// 	}
	
// 	void getdata(){
	
// 	cout<<"id is: "<<id;
// 	cout<<"\nname: "<<name;
// 	}
// }; 
// //to invoke the class we need to add object
// int main(){
// 	Student s1;
// 	int s_id;
// 	string s_name;
// 	cout<<"Enter id of student: ";
// 	cin>>s_id;
// 	cout<<"Enter name of student: ";
// 	cin>>s_name;
// 	s1.putdata(s_id,s_name);
// 	s1.getdata();
// }

#include <iostream>
#include <string>
#include <string_view>

class Employee
{
	std::string m_name{};

public:
	void setName(std::string_view name) { m_name = name; }
	const auto& getName() const { return m_name; } //  getter returns by const reference
};

// createEmployee() returns an Employee by value (which means the returned value is an rvalue)
Employee createEmployee(std::string_view name)
{
	Employee e;
	e.setName(name);
	return e;
}

int main()
{
	// Case 1: okay: use returned reference to member of rvalue class object in same expression
	std::cout << createEmployee("Frank").getName()<<"\n";

	// Case 2: bad: save returned reference to member of rvalue class object for use later
	const std::string& ref { createEmployee("Garbo").getName() }; // reference becomes dangling when return value of createEmployee() is destroyed
	std::cout << ref<<"\n"; // undefined behavior

	// Case 3: okay: copy referenced value to local variable for use later
	std::string val { createEmployee("Hans").getName() }; // makes copy of referenced member
	std::cout << val; // okay: val is independent of referenced member

	return 0;
}