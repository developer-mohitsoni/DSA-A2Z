//! Program to Merge Two Sorted Arrays without using Extra Space Leetcode:- 88

#include <bits/stdc++.h>
using namespace std;

//?------------------(Brute Force Approach)------------------------------

//* T.C is O(m+n)

//* S.C is O(1)
void mergeTwoSortedArrays(vector<int> &arr, vector<int> &brr, int n, int m)
{
    int i = m - 1;     // Pointer for the last valid element in nums1
    int j = n - 1;     // Pointer for the last element in nums2
    int k = m + n - 1; // Pointer for the last position in nums1

    // Merge nums1 and nums2 from the end
    while (i >= 0 && j >= 0)
    {
        if (arr[i] > brr[j])
        {
            arr[k--] = arr[i--];
        }
        else
        {
            arr[k--] = brr[j--];
        }
    }

    // If any elements left in nums2, copy them
    while (j >= 0)
    {
        arr[k--] = brr[j--];
    }

    // No need to copy the remaining elements of nums1 since they are already in place.
}

int main()
{
    int m, n;

    // Taking input for nums1 and nums2
    cout << "Enter the number of elements in arr (m): ";
    cin >> m;
    cout << "Enter the number of elements in brr (n): ";
    cin >> n;

    vector<int> arr(m + n, 0); // nums1 will have space for both arrays
    vector<int> brr(n);

    cout << "Enter the elements of arr: ";
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the elements of brr: ";
    for (int i = 0; i < n; i++)
    {
        cin >> brr[i];
    }

    // Call the merge function
    mergeTwoSortedArrays(arr, brr, m, n);

    // Output the merged array
    cout << "Merged Array: ";
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}