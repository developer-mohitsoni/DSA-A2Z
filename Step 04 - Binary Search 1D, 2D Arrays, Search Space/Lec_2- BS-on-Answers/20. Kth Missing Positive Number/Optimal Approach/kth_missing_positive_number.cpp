//! Program the find the kth missing positive number Leetcode:- 1539

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Optimal Approach ---------------------------

//* T.C => O(logN)

//* S.C => O(1)

//! NOTE: Binary Search is works only on sorted arrays

int missingK(vector<int> vec, int n, int k)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int missing = vec[mid] - (mid + 1);
        if (missing < k)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    // Or return return (low + k)
    return k + high + 1;
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