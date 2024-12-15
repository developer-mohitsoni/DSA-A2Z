//! Program to Find the Maximum Product of Subarray Leetcode:- 152

#include <bits/stdc++.h>
using namespace std;

//?------------------(Brute Force Approach)------------------------------

//* T.C is O(n^3)

//* S.C is O(1)
int maxProductSubArray(vector<int> &arr, int n)
{
    if (n == 1)
        return arr[0];

    int result = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int prod = 1;
            for (int k = i; k <= j; k++)
                prod *= arr[k];
            result = max(result, prod);
        }
    }
    return result;
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

    int ans = maxProductSubArray(arr, n);

    cout << "The maximum product of the subarray is " << ans << endl;

    return 0;
}