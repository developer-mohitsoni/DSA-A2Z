//! Program of Median of Two Sorted Arrays

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Optimal Approach ---------------------------

//* T.C =>   O(log(min(n1,n2)))
// Reason => We are applying binary search on the range [0, min(n1, n2)].

//* S.C => O(1)

//! NOTE: Binary Search is works only on sorted arrays

double median(vector<int> &arr, vector<int> &brr)
{
    int n1 = arr.size(), n2 = brr.size();
    // if n1 is bigger swap the arrays:
    if (n1 > n2)
        return median(brr, arr);

    int n = n1 + n2;              // total length
    int left = (n1 + n2 + 1) / 2; // length of left half
    // apply binary search:
    int low = 0, high = n1;
    while (low <= high)
    {
        int mid1 = (low + high) >> 1;
        int mid2 = left - mid1;
        // calculate l1, l2, r1 and r2;
        int l1 = INT_MIN, l2 = INT_MIN;
        int r1 = INT_MAX, r2 = INT_MAX;
        if (mid1 < n1)
            r1 = arr[mid1];
        if (mid2 < n2)
            r2 = brr[mid2];
        if (mid1 - 1 >= 0)
            l1 = arr[mid1 - 1];
        if (mid2 - 1 >= 0)
            l2 = brr[mid2 - 1];

        if (l1 <= r2 && l2 <= r1)
        {
            if (n % 2 == 1)
                return max(l1, l2);
            else
                return ((double)(max(l1, l2) + min(r1, r2))) / 2.0;
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

    cout << "The median of two sorted array is " << fixed << setprecision(1)
         << median(arr, brr) << '\n';

    return 0;
}