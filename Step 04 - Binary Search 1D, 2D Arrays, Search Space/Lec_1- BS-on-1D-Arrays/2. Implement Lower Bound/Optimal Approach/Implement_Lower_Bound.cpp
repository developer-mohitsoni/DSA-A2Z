//! Program to Implement Lower Bound in an array using Optimal Approach

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Optimal Approach ---------------------------

//* T.C => O(n)
//* S.C => O(1)

//! NOTE: Binary Search is works only on sorted arrays

int lowerBound(vector<int> &arr, int n, int target)
{
    int low = 0, high = n - 1;
    int ans = n; // hypothetical index if target is greater than the last element of the array

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        // if the mid element is greater than or equal to the target element then update the answer and search in the left half of the array
        if (arr[mid] >= target)
        {
            ans = mid;

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

    int target;
    cout << "Enter the target element: ";
    cin >> target;

    int ans = lowerBound(arr, n, target);

    cout << "The lower bound of " << target << " is at index: " << ans << endl;

    return 0;
}