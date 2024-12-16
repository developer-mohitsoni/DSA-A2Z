//! Program to find the Peak Element in an Array

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Brute Force Approach ---------------------------

//* T.C => O(N)
//* S.C => O(1)

//! NOTE: Binary Search is works only on sorted arrays

int findPeakElement(vector<int> &arr)
{
    int n = arr.size(); // Size of array.

    for (int i = 0; i < n; i++)
    {
        // Checking for the peak:
        if ((i == 0 || arr[i - 1] < arr[i]) && (i == n - 1 || arr[i] > arr[i + 1]))
        {
            return i;
        }
    }
    // Dummy return statement
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

    int ans = findPeakElement(arr);

    cout << "Peak Element at the index " << ans << " is: " << arr[ans] << endl;

    return 0;
}