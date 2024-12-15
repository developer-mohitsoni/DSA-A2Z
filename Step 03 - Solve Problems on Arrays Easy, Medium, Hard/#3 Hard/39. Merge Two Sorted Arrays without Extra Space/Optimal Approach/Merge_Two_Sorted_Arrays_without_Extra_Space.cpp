//! Program to Merge Two Sorted Arrays without using Extra Space

#include <bits/stdc++.h>
using namespace std;

//?------------------(Optimal Force Approach)------------------------------

//* T.C is O(min(n,m)) + O(n*logn) + O(m*logm)
// Reason:- O(min(n, m)) is for swapping the array elements. And O(n*logn) and O(m*logm) are for sorting the two arrays.

//* S.C is O(1)
void mergeTwoSortedArrays(vector<long long> &arr, vector<long long> &brr, int n, int m)
{
    int left = n - 1;
    int right = 0;

    // Swap the elements until arr1[left] is
    //  smaller than arr2[right]:
    while (left >= 0 && right < m)
    {
        if (arr[left] > brr[right])
        {
            swap(arr[left], brr[right]);
            left--;
            right++;
        }
        else
        {
            break;
        }
    }

    // Sorting the arrays
    sort(arr.begin(), arr.end());
    sort(brr.begin(), brr.end());
}

int main()
{
    int n;
    cout << "Enter the number of elements in the first array: ";
    cin >> n;

    vector<long long> arr(n);
    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int m;
    cout << "Enter the number of elements in the second array: ";
    cin >> m;

    vector<long long> brr(m);
    cout << "Enter the elements of the second array: ";
    for (int i = 0; i < m; i++)
    {
        cin >> brr[i];
    }

    mergeTwoSortedArrays(arr, brr, n, m);

    cout << "The Merged Arrays are:" << endl;

    cout << "arr[] = ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "brr[] = ";
    for (int i = 0; i < m; i++)
    {
        cout << brr[i] << " ";
    }
    cout << endl;

    return 0;
}