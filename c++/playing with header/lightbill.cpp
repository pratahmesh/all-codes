#include <iostream>
using namespace std;
int main()
{
    float a, b, c;
    cout<<"\tFor Single Face"<<endl;
    cout << "Enter Billed Units: ";
    cin >> a;
cout<<endl;
    if (a <= 100)
    {
        b = a * 3.36;
    }
    else if (a >= 101 && a <= 300)
    {
        b = a * 7.34;
    }
    else if (a >= 301 && a <= 500)
    {
        b = a * 10.37;
    }
    else
    {
        b = a * 11.86; 
    }
c=b+115+82+101;
cout<<"Fixed Charge: rs 115/-"<<endl;
cout<<"Energy Duty: rs 101/-"<<endl;
cout<<"Energy Tax: rs 82/-"<<endl;
cout<<"Energy Charge: rs "<<b<<"/-"<<endl;
    cout << "\n\tTotal Bill: rs " << c<<"/-";
}
  