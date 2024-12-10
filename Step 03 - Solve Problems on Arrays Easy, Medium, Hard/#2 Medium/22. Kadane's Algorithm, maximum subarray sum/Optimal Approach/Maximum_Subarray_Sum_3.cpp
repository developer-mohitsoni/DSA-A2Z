//! Program to find Maximum subarray sum
#include <bits/stdc++.h>
using namespace std;

//?------------------(Optimal Approach)------------------------------

//* T.C = O(N)

//* S.C is O(1).

//! Kadane's Algorithm
int maximumSubArraySum(vector<int> &v)
{
    long long sum = 0;
    long long maxiSum = INT_MIN;

    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];

        if (sum > maxiSum)
        {
            maxiSum = sum;
        }

        if (sum < 0)
        {
            sum = 0;
        }
    }
    return maxiSum;
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

    int ans = maximumSubArraySum(arr);

    cout << "\nThe Longest Subarray with Sum in the array is: " << ans << endl;

    return 0;
}