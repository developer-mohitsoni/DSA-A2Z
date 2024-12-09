//! Program to find the longest subarray with given sum K Positive

#include <bits/stdc++.h>
using namespace std;

//?------------------(Better Force Approach)------------------------------

//* Hashing Concept
int longestSubarrayWithSumK(vector<int> &v, long long k)
{
    map<long long, int> preSumMap;

    long long sum = 0;

    int maxLenght = 0;

    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];

        if (sum == k)
        {
            maxLenght = max(maxLenght, i + 1);
        }
        long long rem = sum - k;

        if (preSumMap.find(rem) != preSumMap.end())
        {
            int len = i - preSumMap[rem];
            maxLenght = max(maxLenght, len);
        }
        if (preSumMap.find(sum) == preSumMap.end())
        {
            preSumMap[sum] = i;
        }
    }

    return maxLenght;
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