//! Program to Search in a 2D Matrix-II Leetcode:- 240

#include <bits/stdc++.h>
using namespace std;

//?------------------(Optimal Approach)------------------------------

//* T.C = O(N+M)

// Reason => We are starting traversal from (0, M-1), and at most, we can end up being in the cell (M-1, 0). So, the total distance can be at most (N+M). So, the time complexity is O(N+M).

//* S.C is O(1).

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int n = matrix.size();
    int m = matrix[0].size();
    int row = 0, col = m - 1;

    // traverse the matrix from (0, m-1):
    while (row < n && col >= 0)
    {
        if (matrix[row][col] == target)
            return true;
        else if (matrix[row][col] < target)
            row++;
        else
            col--;
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
