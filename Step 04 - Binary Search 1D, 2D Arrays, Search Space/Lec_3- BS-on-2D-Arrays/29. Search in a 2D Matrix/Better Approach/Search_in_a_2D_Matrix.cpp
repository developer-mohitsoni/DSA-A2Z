//! Program to Search in a 2D Matrix Leetcode:- 74

#include <bits/stdc++.h>
using namespace std;

//?------------------(Better Force Approach)------------------------------

//* T.C = O(N + logM)

// Reason => We are traversing all rows and it takes O(N) time complexity. But for all rows, we are not applying binary search rather we are only applying it once for a particular row. That is why the time complexity is O(N + logM) instead of O(N*logM).

//* S.C is O(1).

bool binarySearch(vector<int> &nums, int target)
{
    int n = nums.size(); // size of the array
    int low = 0, high = n - 1;

    // Perform the steps:
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (nums[mid] == target)
            return true;
        else if (target > nums[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return false;
}

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int n = matrix.size();
    int m = matrix[0].size();

    for (int i = 0; i < n; i++)
    {
        if (matrix[i][0] <= target && target <= matrix[i][m - 1])
        {
            return binarySearch(matrix[i], target);
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
