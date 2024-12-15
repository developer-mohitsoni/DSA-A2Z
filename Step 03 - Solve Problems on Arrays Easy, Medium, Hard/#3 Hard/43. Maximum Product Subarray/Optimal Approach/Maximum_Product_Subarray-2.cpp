//! Program to Find the Maximum Product of Subarray

#include <bits/stdc++.h>
using namespace std;

//?------------------(Optimal Force Approach)------------------------------

//* T.C is O(N)

//* S.C is O(1)
int maxProductSubArray(vector<int> &nums, int n)
{
    int n = nums.size(); // size of array.

    int prod1 = nums[0], prod2 = nums[0], result = nums[0];

    for (int i = 1; i < n; i++)
    {
        int temp = max({nums[i], prod1 * nums[i], prod2 * nums[i]});
        prod2 = min({nums[i], prod1 * nums[i], prod2 * nums[i]});
        prod1 = temp;

        result = max(result, prod1);
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