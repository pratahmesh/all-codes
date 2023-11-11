#include <iostream>
using namespace std;
int main()
{
    int a, j, k, i;
    cout << "Enter Number: ";
    cin >> a;

    for (i = 1; i <= a; i++)
    {
        j = i % 3;
        k = i % 5;
        if (j == 0 && k == 0)
        {
            cout << "\nFizzBuss";
        }
        else if (j == 0)
        {
            cout << "\nFizz";
        }
        else if (k == 0)
        {
            cout << "\nBuzz";
        }
        else
        {
            cout << "\n"<< i;
        }
    }
}
// aagar vo multipuly hai tho 0 aur aagar nhi hai tho 1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, j, k, i;
//     cout << "enter number: ";
//     cin >> a;

//     for (i = 1; i <= a; i++)
//     {
//         j = i % 3;
//         k = i % 5;

//         while (j < 1)
//         {
//             cout << "hello:" << endl;
//             break;
//         }

//         while (j > 0)
//         {
//             cout << i << endl;
//             break;
//         }
//     }
// }