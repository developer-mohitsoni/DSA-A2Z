//! Program of Median of Row Wise Sorted Matrix

#include <bits/stdc++.h>
using namespace std;

//?------------------(Brute Force Approach)------------------------------

//* T.C => O(MXN) + O(MXN(log(MXN)))

//* S.C => O(MXN)

int median(vector<vector<int>> &matrix, int m, int n)
{
    vector<int> lst;

    // traverse the matrix and
    // copy the elements to list:
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            lst.push_back(matrix[i][j]);
        }
    }

    // sort the list:
    sort(lst.begin(), lst.end());
    return lst[(m * n) / 2];
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

    int ans = median(matrix, rows, cols);

    cout << "Median of the given matrix is: " << ans << endl;

    return 0;
}
