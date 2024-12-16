//! Program to Implement Lower Bound in an array using Brute Force Approach

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Brute Force Approach ---------------------------

//* T.C => O(n)
//* S.C => O(1)

//! NOTE: Binary Search is works only on sorted arrays

int lowerBound(vector<int> &arr, int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= target)
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

    int target;
    cout << "Enter the target element: ";
    cin >> target;

    int ans = lowerBound(arr, n, target);

    cout << "The lower bound of " << target << " is at index: " << ans << endl;

    return 0;
}