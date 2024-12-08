//! Remove duplicates from sorted array

#include <bits/stdc++.h>
using namespace std;

//?------------------(Optimize Force Approach)------------------------------

//* T.C is O(n) in (One Pass)
//* S.C is O(1)

//? Two Pointer Approach
void removeDuplicatesfromSortedArray(vector<int> &v, int n)
{
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (v[i] != v[j])
        {
            v[i + 1] = v[j];
            i++;
        }
    }
    v.resize(i + 1);
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

    removeDuplicatesfromSortedArray(arr, n);

    cout << endl;

    cout << "After Removing Duplicates from Sorted Array: " << endl;

    for (auto it : arr)
    {
        cout << it << " ";
    }

    return 0;
}