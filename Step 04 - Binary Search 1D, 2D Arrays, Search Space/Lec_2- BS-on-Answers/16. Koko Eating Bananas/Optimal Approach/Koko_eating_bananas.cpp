//! Program of Koko Eating Bananas Leetcode:- 875.

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Optimal Approach ---------------------------

//* T.C => O(log(max(a[])) * N)
//* S.C => O(1)

//! NOTE: Binary Search is works only on sorted arrays

int calculateTotalHours(vector<int> &arr, int hourly)
{
    int totalH = 0;

    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        totalH += ceil((double)arr[i] / (double)(hourly));
    }

    return totalH;
}

int minimumRateToEatBananas(vector<int> &arr, int h)
{
    // Find the maximum element in the array

    int maxi = *max_element(arr.begin(), arr.end());

    int low = 1, high = maxi;

    // apply binary search

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        int reqTime = calculateTotalHours(arr, mid);

        if (reqTime <= h)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return low;
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int hour;
    cout << "Enter the total hours: ";
    cin >> hour;

    int ans = minimumRateToEatBananas(arr, hour);

    cout << "Koko should eat atleast " << ans << " bananas/hr.\n";

    return 0;
}