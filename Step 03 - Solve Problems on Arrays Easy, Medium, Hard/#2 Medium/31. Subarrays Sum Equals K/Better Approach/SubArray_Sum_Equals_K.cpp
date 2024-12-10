//! Program to find Number of Subarrays whose Sum Equals to K
#include <bits/stdc++.h>
using namespace std;

//?------------------(Better Force Approach)------------------------------

//* T.C = O(N^2)

//* S.C is O(1).

int subArraySumEqualK(vector<int> &v, int K)
{
    int n = v.size();

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += v[j];
            if (sum == K)
            {
                count++;
            }
        }
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