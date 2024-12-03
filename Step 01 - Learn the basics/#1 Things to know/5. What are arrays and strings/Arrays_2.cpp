#include <bits/stdc++.h>

using namespace std;

int main()
{
    // 2D Array
    // int arr[row][col];
    int arr[3][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    //! Note:- If we don't assign the value of array, and if we print them then it shows some garbage value...

    // Accessing 2nd row and 4th column
    arr[1][3] = 78;
    cout << arr[1][3] << endl;

    return 0;
}