#include <iostream>
using namespace std;
int main()
{
    int arr[3][4];
    // initialize in form of mermory location
    // int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12}
    //  initialize in form of each row independent
    // int arr[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};
    //input for 2d array
    // input is in row wise
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }
// test case 1 2 3 4 5 6 7 8 9 10 11 12 
//output 1 2 3 4 
//       5 6 7 8 
//       9 10 11 12 

// input in form of column wise
// for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cin >> arr[j][i];
//         }
//     }
//output// 1 4 7 10 
        // 2 5 8 11 
        // 3 6 9 12 

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}