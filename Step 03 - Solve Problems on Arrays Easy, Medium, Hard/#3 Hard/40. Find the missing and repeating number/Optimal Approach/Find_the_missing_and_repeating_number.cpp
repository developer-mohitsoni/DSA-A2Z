//! Program to Find the Missing and Repeating Numbers

#include <bits/stdc++.h>
using namespace std;

//?------------------(Optimal Approach)------------------------------

//* T.C is O(N)

//* S.C is O(1)

//! Using Maths
vector<int> findMissingRepeatingNumbers(vector<int> &v)
{
    long long n = v.size(); // size of the array

    // Find Sn and S2n:
    long long SN = (n * (n + 1)) / 2;
    long long S2N = (n * (n + 1) * (2 * n + 1)) / 6;

    // Calculate S and S2:
    long long S = 0, S2 = 0;
    for (int i = 0; i < n; i++)
    {
        S += v[i];
        S2 += (long long)v[i] * (long long)v[i];
    }

    // S-Sn = X-Y:
    long long val1 = S - SN;

    // S2-S2n = X^2-Y^2:
    long long val2 = S2 - S2N;

    // Find X+Y = (X^2-Y^2)/(X-Y):
    val2 = val2 / val1;

    // Find X and Y: X = ((X+Y)+(X-Y))/2 and Y = X-(X-Y),
    //  Here, X-Y = val1 and X+Y = val2:
    long long x = (val1 + val2) / 2;
    long long y = x - val1;

    return {(int)x, (int)y};
}

int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> ans = findMissingRepeatingNumbers(arr);

    cout << "The repeating and missing numbers are: " << ans[0] << " " << ans[1] << endl;

    return 0;
}