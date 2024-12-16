//! Program to find out how many times array has been rotated

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Brute Force Approach ---------------------------

//* T.C => O(N)
//* S.C => O(1)

//! NOTE: Binary Search is works only on sorted arrays

int findKRotation(vector<int> &arr)
{
    int n = arr.size(); // size of array.
    int ans = INT_MAX, index = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < ans)
        {
            ans = arr[i];
            index = i;
        }
    }
    return index;
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

    int ans = findKRotation(arr);

    cout << "Array has been rotated " << ans << " times." << endl;

    return 0;
}