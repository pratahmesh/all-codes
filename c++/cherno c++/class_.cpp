#include <iostream>
using namespace std;

#define LOG(x) set::cout << x << endl;

class Player{
    public:
    
        int X, Y;
        int speed=50;

};
void Move(Player&player,int Xa, int Ya){
        player.X += Xa * player.speed;
        player.Y += Ya * player.speed;
        }

int main(){
   Player player;
   Move(player, 1, -1);
  
std::cin.get();
}



#include <iostream>
using namespace std;
#define struct class

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