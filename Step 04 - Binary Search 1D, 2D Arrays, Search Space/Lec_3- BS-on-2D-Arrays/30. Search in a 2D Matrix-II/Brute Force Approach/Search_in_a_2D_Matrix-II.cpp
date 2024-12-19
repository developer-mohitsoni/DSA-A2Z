//! Program to Search in a 2D Matrix-II Leetcode:- 240

#include <bits/stdc++.h>
using namespace std;

//?------------------(Brute Force Approach)------------------------------

//* T.C = O(N*M)
//* S.C is O(1).

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int n = matrix.size(), m = matrix[0].size();

    // traverse the matrix:
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == target)
                return true;
        }
    }
    return false;
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

    int target;
    cout << "Enter the target element: ";
    cin >> target;

    bool found = searchMatrix(matrix, target);

    if (found)
        cout << "Element found in the matrix" << endl;
    else
        cout << "Element not found in the matrix" << endl;

    return 0;
}
