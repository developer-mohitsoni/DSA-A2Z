//! Program to Implement Upper Bound in an array using Optimal Approach

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Optimal Approach ---------------------------

//* T.C => O(logN)
//* S.C => O(logN)

//! NOTE: Binary Search is works only on sorted arrays

int upperBoundRecursive(vector<int> &arr, int low, int high, int target, int ans)
{
    if (low > high)
        return ans; // Base case: return the current answer

    int mid = low + (high - low) / 2;

    // If arr[mid] > target, update answer and search on the left side

    if (arr[mid] > target)
        return upperBoundRecursive(arr, low, mid - 1, target, mid);

    // If arr[mid] < target, search on the right side
    return upperBoundRecursive(arr, mid + 1, high, target, ans);
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

    int target;
    cout << "Enter the target element: ";
    cin >> target;

    int ans = upperBoundRecursive(arr, 0, n - 1, target, n);

    cout << "The upper bound of " << target << " is at index: " << ans << endl;

    return 0;
}