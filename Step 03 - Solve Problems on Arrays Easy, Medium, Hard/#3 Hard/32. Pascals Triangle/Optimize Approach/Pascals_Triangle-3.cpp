//! Program to print the Pascal's Triangle

#include <bits/stdc++.h>
using namespace std;

//* T.C is O(n^2)

//?---------------------------- Optimize Approach ---------------------------

vector<int> generateRow(int row)
{
    vector<int> ansRow;

    long long ans = 1;

    ansRow.push_back(ans);

    for (int col = 1; col < row; col++)
    {
        ans = ans * (row - col);
        ans = ans / col;

        ansRow.push_back(ans);
    }
    return ansRow;
}

vector<vector<int>> printPascalTriangle(int n)
{
    vector<vector<int>> ans;

    // Store the entire pascal's triangle:
    for (int i = 1; i <= n; i++)
    {
        vector<int> temp = generateRow(i); // temporary list

        ans.push_back(temp);
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