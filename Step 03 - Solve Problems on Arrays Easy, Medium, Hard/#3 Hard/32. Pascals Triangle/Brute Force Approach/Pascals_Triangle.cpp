//! Program to find the element of the Pascal's Triangle for the particular row and column.

#include <bits/stdc++.h>
using namespace std;

//* T.C is O(r)

//* S.C is O(1)

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

int main()
{
    int row;
    cout << "Enter the number of row: ";
    cin >> row;

    int col;
    cout << "Enter the number of col: ";
    cin >> col;

    long long result = nCr(row - 1, col - 1);

    if (result != -1)
    {
        cout << "The element at row " << row << " and column " << col
             << " in Pascal's Triangle is: " << result << endl;
    }
    else
    {
        cout << "Invalid row or column input." << endl;
    }

    return 0;
}