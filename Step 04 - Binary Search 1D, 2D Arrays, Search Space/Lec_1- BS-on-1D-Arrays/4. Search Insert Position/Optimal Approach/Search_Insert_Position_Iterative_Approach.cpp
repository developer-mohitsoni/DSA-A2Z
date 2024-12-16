//! Program to Search Insert Position in an array using Optimal Approach

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Optimal Approach ---------------------------

//* T.C => O(logN)
//* S.C => O(1)

//! NOTE: Binary Search is works only on sorted arrays

int searchInsert(vector<int> &arr, int n, int value)
{
    int low = 0, high = n - 1;
    int ans = n; // hypothetical index if target is greater than the last element of the array

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        // if the mid element is greater than or equal to the target element then update the answer and search in the left half of the array
        if (arr[mid] >= value)
        {
            ans = mid; // update the answer with the current index

            // Look for the smaller index on the left
            high = mid - 1;
        }
        else
            low = mid + 1; // if the mid element is less than the target element then search in the right half of the array
    }
    return ans;
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