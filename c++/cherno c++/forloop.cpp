#include <iostream>
using namespace std;

int main()
{
    int n, j;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        j = n % 2;
        i = n;
        if (n == 1)
        {
            cout << "one";
        }
        else if (n == 2)
        {
            cout << "two";
        }
        else if (n == 3)
        {
            cout << "three";
        }
        else if (n == 4)
        {
            cout << "four";
        }
        else if (n == 5)
        {
            cout << "five";
        }
        else if (n == 6)
        {
            cout << "six";
        }
        else if (n == 7)
        {
            cout << "seven";
        }
        else if (n == 8)
        {
            cout << "eight";
        }
        else if (n == 9)
        {
            cout << "nine";
        }
        else if (j == 0)
        {
            cout << "Even";
        }
        else
        {
            cout << "Odd";
        }
        return 0;
}
}