//! Program to find out the single element in sorted array

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Brute Force Approach ---------------------------

//* T.C => O(N)
//* S.C => O(1)

//! NOTE: Binary Search is works only on sorted arrays

int singleNonDuplicate(vector<int> &arr)
{
    int n = arr.size();

    if (n == 1)
        return arr[0];

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            if (arr[i] != arr[i + 1])
                return arr[0];
        } // first element
        else if (i == n - 1)
        {
            if (arr[i] != arr[i - 1])
                return arr[i];
        } // last element
        else
        {
            if (arr[i] != arr[i + 1] && arr[i] != arr[i - 1])
                return arr[i];
        }
    }
    // dummy return statement:
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

    int ans = singleNonDuplicate(arr);

    cout << "Single Element in the array is: " << ans << endl;

    return 0;
}