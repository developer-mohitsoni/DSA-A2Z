//! Into to Binary Search Code

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Recursive Approach ---------------------------

//* T.C => O(logn)
//* S.C => O(logn) // due to recursive call stack

//! NOTE: Binary Search is works only on sorted arrays

int bSearch(vector<int> &arr, int left, int right, int target)
{
    if (left > right)
        return -1;

    int mid = left + (right - left) / 2;

    if (arr[mid] == target)
        return mid;

    else if (arr[mid] < target)
        return bSearch(arr, mid + 1, right, target);

    return bSearch(arr, left, mid - 1, target);
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

    int ans = bSearch(arr, 0, n - 1, target);

    if (ans == -1)
        cout << "Element not found" << endl;
    else
        cout << "Element found at index " << ans << endl;

    return 0;
}