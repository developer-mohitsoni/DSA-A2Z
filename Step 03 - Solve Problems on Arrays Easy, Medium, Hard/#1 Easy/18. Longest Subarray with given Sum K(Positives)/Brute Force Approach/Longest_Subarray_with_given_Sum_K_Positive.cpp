//! Program to find the longest subarray with given sum K Positive

#include <bits/stdc++.h>
using namespace std;

//?------------------(Brute Force Approach)------------------------------

//* T.C is O(n^3)

//* S.C is O(1).

int longestSubarrayWithSumK(vector<int> &v, int key)
{
    int n = v.size();

    int len = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int s = 0;

            for (int k = i; k <= j; k++)
            {
                s += v[k];
            }
            if (s == key)
                len = max(len, j - i + 1);
        }
    }
    return len;
}

int main()
{

    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cout << "Enter The Value of K:- " << endl;
    cin >> k;

    int ans = longestSubarrayWithSumK(arr, k);

    cout << "\nThe Longest Subarray with Sum K(Positive) in the array is: " << ans << endl;

    return 0;
}