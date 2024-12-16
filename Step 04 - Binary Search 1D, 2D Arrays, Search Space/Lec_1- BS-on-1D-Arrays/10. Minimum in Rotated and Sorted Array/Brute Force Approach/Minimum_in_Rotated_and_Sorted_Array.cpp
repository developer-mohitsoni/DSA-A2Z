//! Program to find Minimum in Rotated and Sorted Array

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Brute Force Approach ---------------------------

//* T.C => O(N)
//* S.C => O(1)

//! NOTE: Binary Search is works only on sorted arrays

int findMin(vector<int> &arr, int n)
{
    int mini = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        // Always keep the minimum.
        mini = min(mini, arr[i]);
    }
    return mini;
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