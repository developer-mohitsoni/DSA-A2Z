//! Program to Search Insert Position in an array using Brute Force Approach

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Brute Force Approach ---------------------------

//* T.C => O(n)
//* S.C => O(1)

//! NOTE: Binary Search is works only on sorted arrays

int searchInsert(vector<int> &arr, int n, int value)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= value)
            return i; // return the index of the first element which is greater than or equal to the target element
    }

    // return the hypothetical index
    return n;
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

    int ans = searchInsert(arr, n, element);

    cout << "The search insert position of " << element << " is at index: " << ans << endl;

    return 0;
}