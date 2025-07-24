//! Program to find out the Length of the longest subarray with zero Sum

#include <bits/stdc++.h>
using namespace std;

//?------------------(Brute Force Approach)------------------------------

//* T.C is O(n^2)

//* S.C is O(1)

int logestSubarray0Sum(vector<int> &v)
{
    int maxLen = 0;
    unordered_map<int, int> sumIndexMap;
    int sum = 0;

    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];

        if (sum == 0)
        {
            maxLen = i + 1;
        }
        else if (sumIndexMap.find(sum) != sumIndexMap.end())
        {
            maxLen = max(maxLen, i - sumIndexMap[sum]);
        }
        else
        {
            sumIndexMap[sum] = i;
        }
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

    int ans = logestSubarray0Sum(arr);

    cout << "\nThe Length of the longest subarray with zero Sum is: " << ans << endl;

    return 0;
}