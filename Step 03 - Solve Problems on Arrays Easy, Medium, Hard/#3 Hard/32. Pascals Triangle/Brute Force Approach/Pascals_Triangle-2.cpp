//! Program to print the nth row of the Pascal's Triangle.

#include <bits/stdc++.h>
using namespace std;

//* T.C is O(n*r)

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

vector<long long> pascalRow(int n)
{
    vector<long long> result;
    for (int col = 1; col <= n; ++col)
    { // This will be print like for particular row as if n=5 then it will print 5C0, 5C1, 5C2, 5C3, 5C4, 5C5
        result.push_back(nCr(n - 1, col - 1));
    }
    return result;
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

    vector<long long> row = pascalRow(n);

    cout << "The " << n << "-th row of Pascal's Triangle is: ";
    for (long long element : row)
    {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}