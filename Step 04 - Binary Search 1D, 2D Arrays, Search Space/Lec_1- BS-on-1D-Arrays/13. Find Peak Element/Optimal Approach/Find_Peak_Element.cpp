//! Program to find the Peak Element in an Array

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Optimal Approach ---------------------------

//* T.C => O(logN)
//* S.C => O(1)

//! NOTE: Binary Search is works only on sorted arrays

int findPeakElement(vector<int> &arr)
{
    int n = arr.size(); // Size of array.

    // Edge cases:
    if (n == 1)
        return 0;
    if (arr[0] > arr[1])
        return 0;
    if (arr[n - 1] > arr[n - 2])
        return n - 1;

    int low = 1, high = n - 2;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        // If arr[mid] is the peak:
        if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1])
            return mid;

        // If we are in the left:
        else if (arr[mid] > arr[mid - 1])
            low = mid + 1;

        // If we are in the right:
        // Or, arr[mid] is a common point:
        else if (arr[mid] > arr[mid + 1])
            high = mid - 1;

        // If we are in the lowest peak:
        else
            low = mid + 1;
    }
    // Dummy return statement
    return -1;
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

    int ans = findPeakElement(arr);

    cout << "Peak Element at the index " << ans << " is: " << arr[ans] << endl;

    return 0;
}