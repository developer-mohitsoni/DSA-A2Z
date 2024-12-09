//! Program to find the longest subarray with given sum K Positive

#include <bits/stdc++.h>
using namespace std;

//?------------------(Optimal Force Approach)------------------------------

//* Hashing Concept
int longestSubarrayWithSumK(vector<int> &v, long long k)
{
    int left = 0;
    int right = 0;

    long long sum = v[0];

    int maxLen = 0;

    int n = v.size();

    while (right < n)
    {

        while (left <= right && sum > k)
        {
            sum -= v[left];
            left++;
        }

        if (sum == k)
        {
            maxLen = max(maxLen, right - left + 1);
        }
        right++;

        if (right < n)
            sum += v[right];
    }
    return maxLen;
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

    long long k;
    cout << "Enter the value of k:- " << endl;
    cin >> k;

    int ans = longestSubarrayWithSumK(arr, k);

    cout << "\nThe Longest Subarray with Sum K(Positive) in the array is: " << ans << endl;

    return 0;
}