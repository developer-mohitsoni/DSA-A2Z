//! Program for Rotate Matrix by 90 deg

#include <bits/stdc++.h>
using namespace std;

//?------------------(Brute Force Approach)------------------------------

//* T.C = O(N^2)
//* S.C is O(N^2).

vector<vector<int>> rotateMatrixBy90(vector<vector<int>> &matrix, int n)
{
    vector<vector<int>> arr(n, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[j][n - i - 1] = matrix[i][j]; // Swap elements
        }
    }

    return arr;
}

int main()
{
    int n;
    cout << "Enter the number of n * n size: ";
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(n));

    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    vector<vector<int>> array = rotateMatrixBy90(arr, n);

    cout << "The Final 2D Matrix is: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl; // To print the next row in a new line
    }

    return 0;
}
