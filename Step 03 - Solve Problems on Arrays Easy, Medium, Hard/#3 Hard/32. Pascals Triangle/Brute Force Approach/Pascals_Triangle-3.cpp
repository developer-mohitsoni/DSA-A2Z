//! Program to print the Pascal's Triangle

#include <bits/stdc++.h>
using namespace std;

//* T.C is O(n^3)

//?---------------------------- Optimize Approach ---------------------------

int nCr(int n, int r)
{
    if (r == 0 || r == n)
        return 1;
    int result = 1;

    for (int i = 0; i < r; i++)
    {
        result *= (n - i);
        result /= (i + 1);
    }

    return result;
}

vector<vector<int>> printPascalTriangle(int n)
{
    vector<vector<int>> ans;

    // Store the entire pascal's triangle:
    for (int row = 1; row <= n; row++)
    {
        vector<int> tempLst; // temporary list
        for (int col = 1; col <= row; col++)
        {
            tempLst.push_back(nCr(row - 1, col - 1));
        }
        ans.push_back(tempLst);
    }
    return ans;
}

int main()
{
    int n;

    cout << "Enter the row number: ";
    cin >> n;

    if (n < 0)
    {
        cout << "Invalid input. Row number must be non-negative." << endl;
        return 1;
    }

    vector<vector<int>> ans = printPascalTriangle(n);

    cout << "The Pascal's Triangle is: " << endl;

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans.size() - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        for (int j = 0; j < ans.size() - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}