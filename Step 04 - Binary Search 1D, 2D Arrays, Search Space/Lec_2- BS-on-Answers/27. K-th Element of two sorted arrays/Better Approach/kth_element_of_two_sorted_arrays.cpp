//! Program of K-th element of two sorted arrays

#include <bits/stdc++.h>
using namespace std;

//? ---------------------------- Better Force Approach ---------------------------

//* T.C => O(m+n)

//* S.C => O(1)

//! NOTE: Binary Search is works only on sorted arrays

int kthElement(vector<int> &arr, vector<int> &brr, int m, int n, int k)
{
    int ele = -1;
    int cnt = 0; // counter
    // apply the merge step:
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (arr[i] < brr[j])
        {
            if (cnt == k - 1)
                ele = arr[i];
            cnt++;
            i++;
        }
        else
        {
            if (cnt == k - 1)
                ele = brr[j];
            cnt++;
            j++;
        }
    }

    // copy the left-out elements:
    while (i < m)
    {
        if (cnt == k - 1)
            ele = arr[i];
        cnt++;
        i++;
    }
    while (j < n)
    {
        if (cnt == k - 1)
            ele = brr[j];
        cnt++;
        j++;
    }
    return ele;
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