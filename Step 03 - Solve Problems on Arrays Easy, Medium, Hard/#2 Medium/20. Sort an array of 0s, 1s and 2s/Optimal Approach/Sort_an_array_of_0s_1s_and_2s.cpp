//! Program to Sort and array of 0s, 1s and 2s.

#include <bits/stdc++.h>
using namespace std;

//?------------------(Optimal Approach)------------------------------

//* T.C is O(2n)

//* S.C is O(1).

//! Dutch National Flag Alogirthm

//! Three Pointer Approach
void sortOs1sAnd2s(vector<int> &v)
{
    int n = v.size();

    int low = 0, mid = 0, high = n - 1;

    while (mid <= high)
    {
        if (v[mid] == 0)
        {
            swap(v[mid], v[low]);
            low++;
            mid++;
        }
        else if (v[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(v[mid], v[high]);
            high--;
        }
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