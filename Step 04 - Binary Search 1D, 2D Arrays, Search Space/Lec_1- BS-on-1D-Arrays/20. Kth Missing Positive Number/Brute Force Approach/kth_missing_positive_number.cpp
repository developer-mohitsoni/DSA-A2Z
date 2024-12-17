//! Program the find the kth missing positive number Leetcode:- 1539

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Brute Force Approach ---------------------------

//* T.C => O(N)

//* S.C => O(1)

//! NOTE: Binary Search is works only on sorted arrays

int missingK(vector<int> vec, int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (vec[i] <= k)
            k++; // shifting k
        else
            break;
    }
    return k;
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

    int k;
    cout << "Enter the value of k: ";
    cin >> k;

    int ans = missingK(arr, n, k);

    cout << "The missing number is: " << ans << "\n";

    return 0;
}