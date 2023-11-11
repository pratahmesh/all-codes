#include <iostream>
using namespace std;
int main()
{
//a pointers is integer or a number which stores the memory address

//     int var=8;
// int*ptr=&var;
// int**pro=&ptr;//double pointer
// int***pre=&pro;//triple pointer
// ***pre=80;//over write in var , var as been passed over
// cout<<var;
// std::cin.get();


//when we use the pointer the asshtick sign we are actully with value and address sign is for address


// #include <iostream>
// #include <cstring>
// using namespace std;
// int main()
// {
// char* buffer = new char[8];//aocatles 8bytes of memory to the pointer
// memset(buffer,0,8);//fill the block of memory with data that we specify to the begingging of memory (,value,bytes)
//  delete[] buffer;
// }

//refrences 
//refrences are not new varibles they are already existing varialbe
//they are refrences to a variable

int a=5;
int& op=a;
op=2;//a as been overwritten  
cout<<a;
std::cin.get();
}