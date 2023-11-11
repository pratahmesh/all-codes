#include <iostream>
using namespace std;
int main()
{
repeat:

    int n{};
    int k{1};
    cout << "Enter the number: ";
    cin >> n;
    while (k <= n)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << "*";
            }
            cout << endl;
            for (int j = 1; j <= i; j++)
            {
                if (j == n)
                {
                    break;
                }
                else
                {
                    cout << " ";
                }
            }
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = n; j >= 1; j--)
            {
                cout << "*";
            }
            cout << endl;
            for (int j = n; j > i; j--)
            {
                cout << " ";
            }
        }
        k++;
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