//! Program to Sort and array of 0s, 1s and 2s.

#include <bits/stdc++.h>
using namespace std;

//?------------------(Brute Force Approach)------------------------------

//* T.C is O(nlogn)

//* S.C is O(n).

void sortOs1sAnd2s(vector<int> &v)
{
    sort(v.begin(), v.end());
}

int main()
{

    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sortOs1sAnd2s(arr);

    for (int i : arr)
    {
        cout << i << " ";
    }

    return 0;
}