//! Program to Search Insert Position in an array using Optimal Approach

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Optimal Approach ---------------------------

//* T.C => O(logN)
//* S.C => O(1)

//! NOTE: Binary Search is works only on sorted arrays

int searchInsertRecursive(vector<int> &arr, int low, int high, int value, int ans)
{
    if (low > high)
        return ans; // Base case: return the current answer

    int mid = low + (high - low) / 2;

    // If arr[mid] >= target, update answer and search on the left side

    if (arr[mid] >= value)
        return searchInsertRecursive(arr, low, mid - 1, value, mid);

    // If arr[mid] < target, search on the right side
    return searchInsertRecursive(arr, mid + 1, high, value, ans);
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
    cout << "Enter the element to search for: ";
    cin >> element;

    int ans = searchInsertRecursive(arr, 0, n - 1, element, n);

    cout << "The search insert position of " << element << " is at index: " << ans << endl;

    return 0;
}