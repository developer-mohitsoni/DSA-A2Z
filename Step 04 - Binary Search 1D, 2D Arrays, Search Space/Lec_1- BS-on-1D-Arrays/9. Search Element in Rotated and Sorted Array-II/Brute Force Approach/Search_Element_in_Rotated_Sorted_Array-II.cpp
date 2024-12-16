//! Program to Search Element in Rotated and Sorted Array-II [duplicate elements]

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Brute Force Approach ---------------------------

//* T.C => O(N)
//* S.C => O(1)

//! NOTE: Binary Search is works only on sorted arrays

bool searchInARotatedSortedArrayII(vector<int> &arr, int n, int element)
{
    for (int i = 0; i < n; i++)
        if (arr[i] == element)
            return true;

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