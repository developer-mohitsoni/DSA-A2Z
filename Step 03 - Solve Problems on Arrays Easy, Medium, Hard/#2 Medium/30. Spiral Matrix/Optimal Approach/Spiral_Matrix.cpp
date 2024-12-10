//! Program for Print the matrix in Spiral Manner

#include <bits/stdc++.h>
using namespace std;

//* This solution has exist has only one Optimal Solution

//?------------------(Optimal Force Approach)------------------------------

//* T.C = O(N^2)
//* S.C is O(N^2).

vector<int> spiralMatrix(vector<vector<int>> &matrix, int n, int m)
{
    int top = 0;
    int bottom = n - 1;

    int left = 0;
    int right = m - 1;

    vector<int> ans;

    while (top <= bottom && left <= right)
    {
        // right
        for (int i = left; i <= right; i++)
        {
            ans.push_back(matrix[top][i]);
        }
        top++;

        // bottom
        for (int i = top; i <= bottom; i++)
        {
            ans.push_back(matrix[i][right]);
        }
        right--;

        if (top <= bottom)
        {
            // left
            for (int i = right; i >= left; i--)
            {
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
        }
        if (left <= right)
        {
            // top
            for (int i = bottom; i >= top; i--)
            {
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
    }
    return ans;
}

int main()
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    int cols;
    cout << "Enter the number of cols: ";
    cin >> cols;

    vector<vector<int>> arr(rows, vector<int>(cols));

    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    vector<int> array = spiralMatrix(arr, rows, cols);

    cout << "The Final 2D Matrix in 1D Array is Like: " << endl;

    for (int i = 0; i < array.size(); i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}
