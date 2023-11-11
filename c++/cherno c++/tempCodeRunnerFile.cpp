#include <iostream>
using namespace std;
// #define struct class

struct Player{
    int X, Y;
    int speed;

    void Move(int Xa,int Ya)
    {
        X += Xa *speed;
        Y += Ya *speed;
        }
};

int main(){
   Player p;
   p.Move( 1, -1);
  
std::cin.get();
}