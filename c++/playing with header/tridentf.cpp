#include <iostream>
using namespace std;

int main()
{
    repeat: 

    int k, n, o;
    k = 1;
    cout << "Enter the number: " << endl;
    cin >> n;
    o = n / 2 + 1;

    for (int i = 1; i <= n / 2; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == 1 || j == o || j == n)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    while (k <= n)
    {
        cout << "*";
        k++;
    }

    cout << endl;
    for (int a = 1; a <= n / 2; a++)
    {
        for (int y = 1; y <= n; y++)
        {
            if (y == o)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << endl;

    string q;
    cout << "Do you want to print again? (y/n):" << endl;
    cin >> q;

    if (q == "n")
    {
        cout << "Thank you for using our program." << endl;
    }
    else if (q == "y")
    {
        goto repeat; 
    }
    else
    {
        cout << "Invalid input. Exiting program." << endl;
    }

    return 0;
}
