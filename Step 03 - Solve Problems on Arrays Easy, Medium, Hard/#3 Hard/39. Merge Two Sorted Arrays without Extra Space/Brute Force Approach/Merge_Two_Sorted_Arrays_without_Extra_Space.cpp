//! Program to Merge Two Sorted Arrays without using Extra Space

#include <bits/stdc++.h>
using namespace std;

//?------------------(Brute Force Approach)------------------------------

//* T.C is O(n+m) + (n+m)

//* S.C is O(n+m)
void mergeTwoSortedArrays(vector<long long> &arr, vector<long long> &brr, int n, int m)
{
    vector<long long> crr(n + m);

    int left = 0, right = 0, index = 0;

    while (left < n && right < m)
    {
        if (arr[left] <= brr[right])
        {
            crr[index] = arr[left];
            left++;
        }
        else
        {
            crr[index] = brr[right];
            right++;
        }
        index++;
    }
    //? Copy remaining elements of arr[]
    while (left < n)
    {
        crr[index] = arr[left];
        left++;
        index++;
    }
    //? Copy remaining elements of brr[]
    while (right < m)
    {
        crr[index] = brr[right];
        right++;
        index++;
    }

    // Copying elements of crr[] to arr[] and brr[]
    for (int i = 0; i < n + m; i++)
    {
        if (i < n)
            arr[i] = crr[i];
        else
            brr[i - n] = crr[i];
    }
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