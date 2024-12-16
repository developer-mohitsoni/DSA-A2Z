//! Program to Search Element in Rotated and Sorted Array [duplicate elements]

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Optimal Approach ---------------------------

//* T.C => O(logN) for best and average case
//* T.C => O(N/2) for worst case where all array elements are the same but not the target
//* S.C => O(1)

//! NOTE: Binary Search is works only on sorted arrays

int searchInARotatedSortedArrayII(vector<int> &arr, int n, int element)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        // if mid points the target
        if (arr[mid] == element)
            return true;

        // Edge case:
        if (arr[low] == arr[mid] && arr[mid] == arr[high])
        {
            low = low + 1;
            high = high - 1;
            continue;
        }

        // if left part is sorted:
        if (arr[low] <= arr[mid])
        {
            if (arr[low] <= element && element <= arr[mid])
            {
                // element exists:
                high = mid - 1;
            }
            else
            {
                // element does not exist:
                low = mid + 1;
            }
        }
        else
        { // if right part is sorted:
            if (arr[mid] <= element && element <= arr[high])
            {
                // element exists:
                low = mid + 1;
            }
            else
            {
                // element does not exist:
                high = mid - 1;
            }
        }
    }
    return false;
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

    int element;
    cout << "Enter the element to find: ";
    cin >> element;

    bool ans = searchInARotatedSortedArrayII(arr, n, element);

    if (ans)
        cout << "Element is present in the array";
    else
        cout << "Element is not present in the array";

    return 0;
}