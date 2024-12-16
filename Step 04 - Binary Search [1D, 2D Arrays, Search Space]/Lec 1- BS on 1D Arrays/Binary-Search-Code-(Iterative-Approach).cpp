//! Into to Binary Search Code

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Iterative Approach ---------------------------

//* T.C => O(logn)
//* S.C => O(1)

//! NOTE: Binary Search is works only on sorted arrays

int bSearch(vector<int> &arr, int n, int target)
{
    int left = 0, right = n - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1; // Element not found
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

    int ans = bSearch(arr, n, target);

    if (ans == -1)
        cout << "Element not found" << endl;
    else
        cout << "Element found at index " << ans << endl;

    return 0;
}