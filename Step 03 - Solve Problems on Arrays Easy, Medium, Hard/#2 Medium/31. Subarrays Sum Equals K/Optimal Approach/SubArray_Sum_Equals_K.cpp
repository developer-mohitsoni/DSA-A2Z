//! Program to find Number of Subarrays whose Sum Equals to K
#include <bits/stdc++.h>
using namespace std;

//?------------------(Optimal Force Approach)------------------------------

//* T.C = O(N * logN)

//* S.C is O(N).

int subArraySumEqualK(vector<int> &v, int K)
{
    int n = v.size();

    map<int, int> mpp;

    mpp[0] = 1;

    int preSum = 0, count = 0;

    // O(N * log N)
    for (int i = 0; i < n; i++)
    {
        preSum += v[i];

        int remove = preSum -   K;

        count += mpp[remove];

        mpp[preSum] += 1;
    }

    return count;
}

int main()
{

    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int k;
    cout << "Enter The Sum Equal K Value:- " << endl;
    cin >> k;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = subArraySumEqualK(arr, k);

    cout << "Number of subarrays whose sum equals to K: " << ans << endl;

    return 0;
}