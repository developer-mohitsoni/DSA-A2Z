//! Program to Find a peak element-II Leetcode:- 1901

#include <bits/stdc++.h>
using namespace std;

//?------------------(Optimal Approach)------------------------------

//* T.C = O(logm*n)

//* S.C is O(1).

int findMaxIndex(vector<vector<int>> &matrix, int n, int col)
{
    int max = INT_MIN;
    int maxIndex = -1;

    for (int i = 0; i < n; i++)
    {
        if (matrix[i][col] > max)
        {
            max = matrix[i][col];
            maxIndex = i;
        }
    }
    return maxIndex;
}
vector<int> findPeakGrid(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();

    int low = 0, high = m - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        int maxRowIndex = findMaxIndex(matrix, n, mid);

        int left = (mid - 1 >= 0) ? matrix[maxRowIndex][mid - 1] : INT_MIN;
        int right = (mid + 1 < m) ? matrix[maxRowIndex][mid + 1] : INT_MIN;

        if (matrix[maxRowIndex][mid] > left && matrix[maxRowIndex][mid] > right)
        {
            return {maxRowIndex, mid};
        }
        else if (matrix[maxRowIndex][mid] < left)
        {
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return {-1, -1};
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

    vector<int> peak = findPeakGrid(matrix);

    cout << "Peak element at index: (" << peak[0] << ", " << peak[1] << ")" << endl;

    return 0;
}
