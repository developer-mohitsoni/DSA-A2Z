//! Program to Sort and array of 0s, 1s and 2s.

#include <bits/stdc++.h>
using namespace std;

//?------------------(Better Approach)------------------------------

//* T.C is O(2n)

//* S.C is O(1).

void sortOs1sAnd2s(vector<int> &v)
{
    int n = v.size();

    int count0 = 0, count1 = 0, count2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
            count0++;
        else if (v[i] == 1)
            count1++;
        else
            count2++;
    }

    for (int i = 0; i < count0; i++)
    {
        v[i] = 0;
    }
    for (int i = count0; i < count0 + count1; i++)
    {
        v[i] = 1;
    }
    for (int i = count0 + count1; i < n; i++)
    {
        v[i] = 2;
    }
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