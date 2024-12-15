//! Program to Find the Maximum Product of Subarray Leetcode 152

#include <bits/stdc++.h>
using namespace std;

//?------------------(Better Force Approach)------------------------------

//* T.C is O(n^2)

//* S.C is O(1)
int maxProductSubArray(vector<int> &arr, int n)
{
    int result = arr[0];

    for (int i = 0; i < n; i++)
    {
        int p = 1;
        for (int j = i; j < n; j++)
        {
            p *= arr[j];
            result = max(result, p);
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