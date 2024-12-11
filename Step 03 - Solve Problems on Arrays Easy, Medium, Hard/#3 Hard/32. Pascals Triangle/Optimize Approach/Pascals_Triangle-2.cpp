//! Program to print the nth row of the Pascal's Triangle.

#include <bits/stdc++.h>
using namespace std;

//* T.C is O(n)

//* S.C is O(1)

//?---------------------------- Optimize Approach ---------------------------

vector<long long> pascalRow(int n)
{
    vector<long long> result;

    long long ans = 1;

    result.push_back(ans);

    for (int i = 1; i < n; i++)
    {
        ans = ans * (n - i);
        ans = ans / i;

        result.push_back(ans);
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