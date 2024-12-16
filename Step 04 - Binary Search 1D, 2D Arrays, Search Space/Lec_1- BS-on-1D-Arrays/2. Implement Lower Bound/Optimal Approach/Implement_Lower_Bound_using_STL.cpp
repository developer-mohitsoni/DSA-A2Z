//! Program to Implement Lower Bound in an array using STL

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Optimal Approach ---------------------------

//* T.C => O(logN)
//* S.C => O(1)

//! NOTE: Binary Search is works only on sorted arrays

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

    // lower_bound(arr.begin(), arr.end(), target): Returns an iterator pointing to the first element ≥ target

    // arr.begin(): Iterator pointing to the first element

    // - arr.begin(): Gives the 0-based index of the iterator returned by lower_bound.

    //! NOTE:- The lower_bound function uses binary search internally.

    int ans = lower_bound(arr.begin(), arr.end(), target) - arr.begin(); // Returns iterator pointing to the first occurrence of target in arr or last position where target could be inserted.

    cout << "The lower bound of " << target << " is at index: " << ans << endl;

    return 0;
}