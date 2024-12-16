//! Program to Search Element in Rotated and Sorted Array

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Brute Force Approach ---------------------------

//* T.C => O(N)
//* S.C => O(1)

//! NOTE: Binary Search is works only on sorted arrays

int search(vector<int> &arr, int n, int element)
{
    for (int i = 0; i < n; i++)
        if (arr[i] == element)
            return i;

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

    int element;
    cout << "Enter the element to find: ";
    cin >> element;

    int ans = search(arr, n, element);

    if (ans == -1)
        cout << "Element not found in the array" << endl;
    else
        cout << "Element found at index: " << ans << endl;

    return 0;
}