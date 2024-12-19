//! Program to Find the row with maximum number of 1's

#include <bits/stdc++.h>
using namespace std;

//?------------------(Brute Force Approach)------------------------------

//* T.C = O(N*M)
//* S.C is O(1).

int rowWithMax1s(vector<vector<int>> &matrix, int n, int m)
{
    int cnt_max = 0;
    int index = -1;

    // traverse the matrix:
    for (int i = 0; i < n; i++)
    {
        int cnt_ones = 0;
        for (int j = 0; j < m; j++)
        {
            cnt_ones += matrix[i][j];
        }
        if (cnt_ones > cnt_max)
        {
            cnt_max = cnt_ones;
            index = i;
        }
    }
    return index;
}

int main()
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    int cols;
    cout << "Enter the number of cols: ";
    cin >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));

    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
    }

    cout << "The row with maximum no. of 1's is: " << rowWithMax1s(matrix, rows, cols) << '\n';

    return 0;
}
