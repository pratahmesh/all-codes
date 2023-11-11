//functions are block of codes which are desinged to perform specific task
#include <iostream>
int Multiply(int a,int b)
{
    return a*b;
}
void Multiplyandlog(int a,int b)
{
int result = Multiply(a,b);
std::cout<<result<<std::endl;
}
int main()
{
Multiplyandlog(54,58);
std::cin.get();
}