//! Program to find Maximum subarray sum
#include <bits/stdc++.h>
using namespace std;

//?------------------(Better Approach)------------------------------

//* T.C = O(N^2)

//* S.C is O(1).

int maximumSubArraySum(vector<int> &v)
{
    int n = v.size();

    int maxiSum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += v[j];
            maxiSum = max(maxiSum, sum);
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