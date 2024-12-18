//! Program of K-th element of two sorted arrays

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Brute Force Approach ---------------------------

//* T.C => O(m+n)

//* S.C => O(m+n)

//! NOTE: Binary Search is works only on sorted arrays

int kthElement(vector<int> &arr, vector<int> &brr, int m, int n, int k)
{
    vector<int> crr;

    // apply the merge step:
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (arr[i] < brr[j])
            crr.push_back(arr[i++]);
        else
            crr.push_back(brr[j++]);
    }

    // copy the left-out elements:
    while (i < m)
        crr.push_back(arr[i++]);
    while (j < n)
        crr.push_back(brr[j++]);

    return crr[k - 1];
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