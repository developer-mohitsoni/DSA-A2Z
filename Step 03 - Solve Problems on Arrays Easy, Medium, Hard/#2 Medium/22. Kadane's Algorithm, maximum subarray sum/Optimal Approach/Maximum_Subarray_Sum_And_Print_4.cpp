//! Program to find Maximum subarray sum
#include <bits/stdc++.h>
using namespace std;

//?------------------(Optimal Approach)------------------------------

//* T.C = O(N)

//* S.C is O(1).

//! Kadane's Algorithm
vector<int> maximumSubArraySum(vector<int> &v)
{
    long long sum = 0;
    long long maxiSum = INT_MIN;

    int ansStart = -1;
    int ansEnd = -1;

    int start = -1;

    for (int i = 0; i < v.size(); i++)
    {
        // Yadi sum ki value 0 hoti hai toh wo position ko start me store kar dega. Because of we want to store the elements which exceeds maximum sum. to point that starting point.
        if (sum == 0)
            start = i;

        sum += v[i];

        // Jaise mera sum greater than maxiSum hua wo sum ki value ko maxiSum me store kar dega. and point the starting and ending point of the subarray.
        if (sum > maxiSum)
        {
            maxiSum = sum;
            ansStart = start;
            ansEnd = i;
        }

        // Jaise mera sum less than 0 hua wo sum ki value ko 0 kar dega.
        if (sum < 0)
        {
            sum = 0;
        }
    }
    vector<int> array;

    // abb uss subarray ko store kar dega.
    for (int i = ansStart; i <= ansEnd; i++)
    {
        array.push_back(v[i]);
    }
    return array;
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

    vector<int> ans = maximumSubArraySum(arr);

    for (auto it : ans)
    {
        cout << it << " ";
    }

    return 0;
}