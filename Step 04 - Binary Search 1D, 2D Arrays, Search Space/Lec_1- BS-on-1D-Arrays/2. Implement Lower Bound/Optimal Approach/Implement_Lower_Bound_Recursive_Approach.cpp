//! Program to Implement Lower Bound in an array using Optimal Approach

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Optimal Approach ---------------------------

//* T.C => O(logN)
//* S.C => O(logN)

//! NOTE: Binary Search is works only on sorted arrays

int lowerBoundRecursive(vector<int> &arr, int low, int high, int target, int ans)
{
    if (low > high)
        return ans; // Base case: return the current answer

    int mid = low + (high - low) / 2;

    // If arr[mid] >= target, update answer and search on the left side

    if (arr[mid] >= target)
        return lowerBoundRecursive(arr, low, mid - 1, target, mid);

    // If arr[mid] < target, search on the right side
    return lowerBoundRecursive(arr, mid + 1, high, target, ans);
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

    int ans = lowerBoundRecursive(arr, 0, n - 1, target, n);

    cout << "The lower bound of " << target << " is at index: " << ans << endl;

    return 0;
}