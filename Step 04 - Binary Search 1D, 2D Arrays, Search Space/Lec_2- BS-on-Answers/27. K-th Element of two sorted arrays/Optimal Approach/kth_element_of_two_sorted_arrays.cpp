//! Program of K-th element of two sorted arrays

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Optimal Force Approach ---------------------------

//* T.C => O(log(min(m, n)))

// Reason => We are applying binary search on the range [max(0, k-n2), min(k, n1)]. The range length <= min(m, n).

//* S.C => O(1)

//! NOTE: Binary Search is works only on sorted arrays

int kthElement(vector<int> &arr, vector<int> &brr, int m, int n, int k)
{
    if (m > n)
        return kthElement(brr, arr, n, m, k);

    int left = k; // length of left half

    // apply binary search:
    int low = max(0, k - n), high = min(k, m);
    while (low <= high)
    {
        int mid1 = (low + high) >> 1;
        int mid2 = left - mid1;
        // calculate l1, l2, r1 and r2;
        int l1 = INT_MIN, l2 = INT_MIN;
        int r1 = INT_MAX, r2 = INT_MAX;
        if (mid1 < m)
            r1 = arr[mid1];
        if (mid2 < n)
            r2 = brr[mid2];
        if (mid1 - 1 >= 0)
            l1 = arr[mid1 - 1];
        if (mid2 - 1 >= 0)
            l2 = brr[mid2 - 1];

        if (l1 <= r2 && l2 <= r1)
        {
            return max(l1, l2);
        }

        // eliminate the halves:
        else if (l1 > r2)
            high = mid1 - 1;
        else
            low = mid1 + 1;
    }
    return 0; // dummy statement
}

int main()
{
    int n1;
    cout << "Enter the size of array: ";
    cin >> n1;

    vector<int> arr(n1);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n1; i++)
        cin >> arr[i];

    int n2;
    cout << "Enter the size of second array: ";
    cin >> n2;

    vector<int> brr(n2);
    cout << "Enter the elements of the second array: ";
    for (int i = 0; i < n2; i++)
        cin >> brr[i];

    int k;
    cout << "Enter the value of k: ";
    cin >> k;

    cout << "The k-ht element of two sorted array is: " << kthElement(arr, brr, arr.size(), brr.size(), k) << '\n';

    return 0;
}