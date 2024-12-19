//! Program to Find a peak element-II Leetcode:- 1901

#include <bits/stdc++.h>
using namespace std;

//?------------------(Brute Force Approach)------------------------------

//* T.C = O(rows*cols*4)

//* S.C is O(1).

pair<int, int> findPeakGrid(vector<vector<int>> &matrix)
{
    int rows = matrix.size();
    int cols = matrix[0].size();

    pair<int, int> peak = {-1, -1};
    int maxVal = INT_MIN; // Keep track of the maximum value found

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            // Check all neighbors of mat[i][j] while handling boundary cases
            bool isPeak = true;

            // Check up
            if (i > 0 && matrix[i][j] < matrix[i - 1][j])
                isPeak = false;

            // Check down
            if (i < rows - 1 && matrix[i][j] < matrix[i + 1][j])
                isPeak = false;

            // Check left
            if (j > 0 && matrix[i][j] < matrix[i][j - 1])
                isPeak = false;

            // Check right
            if (j < cols - 1 && matrix[i][j] < matrix[i][j + 1])
                isPeak = false;

            // Update if a valid peak is found and it's greater than the current max
            if (isPeak && matrix[i][j] > maxVal)
            {
                maxVal = matrix[i][j];
                peak = {i, j};
            }
        }
    }

    return peak; // Return the best peak found
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

    pair<int, int> peak = findPeakGrid(matrix);

    cout << "Peak found at: (" << peak.first << ", " << peak.second << ")" << endl;

    return 0;
}
