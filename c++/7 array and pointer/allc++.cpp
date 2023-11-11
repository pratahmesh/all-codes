// #include <iostream>
// #include <string>
// void printByValue(std::string val) 
// {
//     std::cout <<"copied data ByValue: "<< val << '\n'; 
// }
// void printByReference(const std::string& ref) 
// {
//     std::cout <<"ByReference only no copy of data: "<< ref << '\n'; 
// }
// void printByAddress(const std::string* ptr)  
// {
//     std::cout <<"ByAddress only no copy of data: "<< *ptr << '\n'; // print the value via the dereferenced pointer
// }
// void greet(std::string* name=nullptr)//default nullptr
// {
//     std::cout << "Hello ";
//     std::cout << (name ? *name : "guest") << '\n';
// }
// const std::string& getProgramName() // returns a const reference
// {
//     static const std::string s_programName { "Calculator" }; // has static duration, destroyed at end of program
//     return s_programName;
// }
// const int& getNextId()
// {
//     static int s_x{ 0 };
//     ++s_x;
//     return s_x;
// }

// int main()
// {
//     //pointer
//     std::cout<<"Pointers"<<"\n";
//     int v{ 5 };
//     int* iamprathamesh = &v; 
//     std::cout<<*iamprathamesh<<"\n"; //5
//     std::cout<<iamprathamesh<<"\n"; //0x7ffedd7513a0
//     std::cout<<&v<<"\n";  //0x7ffedd7513a0
//     *iamprathamesh =9;
//     std::cout<<*iamprathamesh<<"\n"; //9
//     std::cout<<iamprathamesh<<"\n"; //0x7ffd7e88a890
//     std::cout<<&v<<"\n"; //0x7ffd7e88a890
//     std::cout<<v<<"\n";  //9

//     //reference
//     std::cout<<"references"<<"\n";
//     int h{89};
//     int& ref= h;
//     std::cout<<ref<<"\n"; //89
//     std::cout<<&ref<<"\n";  //0x7ffedd7513a4
//     ref = 99;
//     std::cout<<ref<<"\n"; //99
//     std::cout<<&ref<<"\n";  //0x7fff0604f334
//     std::cout<<h<<"\n"<<"This is the Changed value of h"<<"\n";  //99
//     h= 9;
//     std::cout<<h<<" "<<"This is the Changed value of h"<<"\n";  //99
//     std::cout<<ref<<"\n"; 
//     std::cout<<&ref<<"\n";  //0x7fff0604f334
// #include <iostream>
// int passing_by_pointer(int *po){
//    int a{10};
//     (*po)=(*po)+a;
//     std::cout<<"ref: ";
//     return *po;
// }
// int passing_by_Ref(int &ref){
//     int a{10};
//     ref=ref+a;
//     std::cout<<"ref: ";
//     return ref;
// }
// int main(){
//     int a{5};
//     std::cout<<a<<"\n";;
//     int* x=&a;//here its a pointer named x which point it at address of a
//     int& r=a;//just a refrence    
//     passing_by_Ref(r);
//     std::cout<<a<<"\n";
//     passing_by_pointer(&a);
//     std::cout<<a<<"\n";
//     std::cout<<*x;//here we are defrenceing it 
//     return 0;
// }
//this is the implimentation pointer,refrence,value


// //lines 3
//     std::string str{ "Hello, world!" };
//     printByValue(str); // val is a parameter that takes a copy of a std::string as its argument.
//     // When you call printByValue with a string, it makes a copy of that string.
//     // The function then prints the copy of the string.
//     // lines 7
//     printByReference(str); // ref is a parameter that takes a reference to a std::string as its argument.
//     // When you call printByReference with a string, it doesn't make a copy of the string but directly refers to the original string.
//     // The function prints the original string through the reference., if we say const &ref it will not change the value any str 
//     // line 11
//     printByAddress(&str); //  pass str by address, does not make a copy of str
//     //use address-of operator (&) to get pointer holding address of str
//     std::string* ptr { &str }; // define a pointer variable holding the address of str
//     printByAddress(ptr); // pass str by address, does not make a copy of str
// //15lines
//     greet(); // we don't know who the user is yet
//     std::string joe{ "Joe" };
//     greet(&joe); // we know the user is joe
// //20 lines
//     std::cout << "This program is named " << getProgramName()<<"\n";
// //26 lines
//     const int id1 { getNextId() }; // id1 is a normal variable now and receives a copy of the value returned by reference from getNextId()
//     const int id2 { getNextId() }; // id2 is a normal variable now and receives a copy of the value returned by reference from getNextId()
//     std::cout << id1 << id2 << '\n';

//     return 0;
// }




// #include <iostream>
// void foo1(int x) {
//     // Implementation of foo1
//     // This function can't modify the original 'x'
// }
// void foo2(int &x) {
//     // Implementation of foo2
//     // This function can modify the original 'x'
//     x = x * 2; // For example, double the value of 'x'
// }
// void foo3(int *x) {
//     // Implementation of foo3
//     // This function can modify the value pointed to by 'x'
//     (*x)++; // For example, increment the value pointed to by 'x'
// }
// void r(int x){
//     std::cout<<"i is: "<<x<<"\n";
// }
// int main() {
//     int i{4}; r(i);      
//     foo1(i);  r(i);  // can't modify i
//     foo2(i);  r(i);  // can modify i
//     foo3(&i); r(i);  // can modify i
//     int *ptr { &i };
//     foo3(ptr);  r(i);   // can modify i
    

//     return 0;
// }


// A const pointer is a pointer whose address can not be changed (it cannot be re-pointed at some other object). However, the value of the object being pointed to can be changed.
// A pointer-to-const is a pointer that is pointing at an object whose value can’t be changed through the pointer. However, the pointer can be re-pointed at another object.


// #include <string>
// int main()
// {
//     std::string s{};
//     const std::string* ptr { &s };
//     auto ptr1{ ptr };  // const std::string*
//     auto* ptr2{ ptr }; // const std::string*
//     auto const ptr3{ ptr };  // const std::string* const
//     const auto ptr4{ ptr };  // const std::string* const
//     auto* const ptr5{ ptr }; // const std::string* const
//     const auto* ptr6{ ptr }; // const std::string
//     const auto const ptr7{ ptr };  // error: const qualifer can not be applied twice
//     const auto* const ptr8{ ptr }; // const std::string* const
//     return 0;
// }


// #include <iostream>
// #include <string_view>
// enum Color
// {
//     black,
//     red,
//     blue,
// };
// constexpr std::string_view getColor(Color color)
// {
//     switch (color)
//     {
//     case black: return "black";
//     case red:   return "red";
//     case blue:  return "blue";
//     default:    return "???";
//     }
// }
// int main()
// {
//     constexpr Color shirt{ blue };
//     std::cout << "Your shirt is " << getColor(shirt) << '\n';
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){
//     if(__cplusplus == 202002L) std::cout<< "c++20";
//     else if(__cplusplus == 201703L) std::cout<< "c++17";
//     else if(__cplusplus == 201403L) std::cout<< "c++14";
//     else if(__cplusplus == 201103L) std::cout<< "c++11";
//     else return 1;
// }

// #include <iostream>
// #include <utility> // for std::to_underlying() (C++23)
// int main()
// {
//     enum class Color
//     {
//         red,
//         blue,
//     };
//     Color color { Color::blue };
//     std::cout << color << '\n'; // won't work, because there's no implicit conversion to int
//     std::cout << static_cast<int>(color) << '\n';   // explicit conversion to int, will print 1
//     std::cout << std::to_underlying(color) << '\n'; // convert to underlying type, will print 1 (C++23)
//     return 0;
// }

// #include <iostream>
// int main()
// {
//     enum class Pet
//     {
//         cat, // assigned 0
//         dog, // assigned 1
//         pig, // assigned 2
//         whale, // assigned 3
//     };
//     std::cout << "Enter a pet (0=cat, 1=dog, 2=pig, 3=whale): ";
//     int input{};
//     std::cin >> input; // input an integer
//     Pet pet{ static_cast<Pet>(input) }; // static_cast our integer to a Pet
// std::cout<<pet;
//     return 0;
// }

// #include <iostream>
// struct Employee
// {
//     int id {};
//     int age {};
//     double wage {};
// };
// void printEmployee(const Employee& employee) // note pass by reference here
// {
//     std::cout << "ID:   " << employee.id << '\n';
//     std::cout << "Age:  " << employee.age << '\n';
//     std::cout << "Wage: " << employee.wage << '\n';
// }
// int main()
// {
//     Employee joe { 14, 32, 24.15 };
//     Employee frank { 15, 28, 18.27 };
//     // Print Joe's information
//     printEmployee(joe);
//     std::cout << '\n';
//     // Print Frank's information
//     printEmployee(frank);
//     return 0;
// }

// #include <iostream>
// struct Employee
// {
//     int id{};
//     int age{};
//     double wage{};
// };
// int main()
// {
//     Employee joe{ 1, 34, 65000.0 };
//     ++joe.age;
//     joe.wage = 68000.0;
//     Employee* ptr{ &joe };
//     std::cout << ptr->id << '\n'; // Better: use -> to select member from pointer to object
//     return 0;
// }

// #include <iostream>
// struct Employee
// {
//     int id {};
//     int age {};
//     double wage {};
// };
// struct Company
// {
//     int numberOfEmployees {};
//     Employee CEO {}; // Employee is a struct within the Company struct
// };
// int main()
// {
//     Company myCompany{ 7, { 1, 32, 55000.0 } }; // Nested initialization list to initialize Employee
//     std::cout << myCompany.CEO.wage << '\n'; // print the CEO's wage
//     std::cout << myCompany.numberOfEmployees << '\n'; // print the CEO's wage
//     return 0;
// }

// #include <iostream>
// class Point3d{
//     int m_x{};
//     int m_y{};
//     int m_z{};
//     public:
//     void setValues(int x,int y,int z){
//             m_x=x;
//             m_y=y;
//             m_z=z;
//     }
//     void print(){
//         std::cout<<"<"<<m_x<<","<<m_y<<","<<m_z<<">";
//     }
// };
// int main(){
//   Point3d point;
//     point.setValues(1, 2, 3);
//     point.print();
//     std::cout << '\n';
//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <string_view>
// class Employee
// {
// private:
//     std::string m_name{};
//     int m_id{ 0 };
// public:
//     Employee(std::string_view name)
//         : m_name{ name }
//     {
//         std::cout << "Employee " << m_name << " created\n";
//     }
//     Employee(std::string_view name, int id)
//         : m_name{ name }, m_id{ id }
//     {
//         std::cout << "Employee " << m_name <<" "<< m_id<< " created\n";
//     }
// };
// int main()
// {
//     Employee e1{ "James" };
//     Employee e2{ "Dave", 42 };
// }

#include <iostream>
class Ball{
std::string m_x{"black"};
double m_y{10.0};
public:
void print(){
    std::cout<<"Ball("<<m_x<<","<<m_y<<")"<<"\n";
}
Ball()
{
    print();
}
Ball(std::string x,double y):m_x{x},m_y{y}
{
    print();
}
Ball(double y)
:m_y{y}
{
    print();
}
Ball(std::string x):m_x{x}
{
    print();
}

};
int main(){
 Ball def{};
    Ball blue{ "blue" };
    Ball twenty{ 20.0 };
    Ball blueTwenty{ "blue", 20.0 };

    return 0;
}




