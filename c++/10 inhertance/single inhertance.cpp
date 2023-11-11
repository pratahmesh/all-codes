//chlid class can inherite its parents 
#include <iostream>
using namespace std;
class Vehicle{
	public:
		int mileage=30;
		int cost=500;
		void put_vehicle_detail(){
			cout<<"i am a vehicle";
			cout<<"\nmileage of velicle is"<<mileage;
			cout<<"\ncost of velicle is"<<cost;;
		} 
};
class car:public Vehicle{
	public:
		string color="blue";
		int tyres=4;
		void show_car_details(){
			cout<<"i am a car ";
			cout<<"\n color of car is: "<<color;
			cout<<"\n number of tyres in car are "<<tyres;
		}
};
int main(){
	car c1;
    c1.put_vehicle_detail();
return 0;
}
