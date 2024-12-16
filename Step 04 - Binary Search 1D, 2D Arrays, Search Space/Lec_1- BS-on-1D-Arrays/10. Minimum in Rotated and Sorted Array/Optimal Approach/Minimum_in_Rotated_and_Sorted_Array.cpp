//! Program to find Minimum in Rotated and Sorted Array

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Optimal Force Approach ---------------------------

//* T.C => O(logN)
//* S.C => O(1)

//! NOTE: Binary Search is works only on sorted arrays

int findMin(vector<int> &arr, int n)
{
    int low = 0, high = n - 1;

    int ans = INT_MAX;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        // if left part is sorted:
        if (arr[low] <= arr[mid])
        {
            // keep the minimum:
            ans = min(ans, arr[low]);

            // Eliminate left half:
            low = mid + 1;
        }
        else
        { // if right part is sorted:

            // keep the minimum:
            ans = min(ans, arr[mid]);

            // Eliminate right half:
            high = mid - 1;
        }
    }
    return ans;
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

    int ans = findMin(arr, n);

    cout << "Minimum element in the array is: " << ans << endl;

    return 0;
}