//! Remove duplicates from sorted array

#include <bits/stdc++.h>
using namespace std;

//?------------------(Optimize Force Approach)------------------------------

//* T.C is O(n) in (One Pass)
//* S.C is O(1)

//? Two Pointer Approach
int removeDuplicatesfromSortedArray(vector<int> &v, int n)
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

    return v.size();
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

    int afterRemoveDuplicatesSize = removeDuplicatesfromSortedArray(arr, n);

    cout << "After Remove Duplicates Element in Sorted Array Size will be:- " << afterRemoveDuplicatesSize << endl;

    return 0;
}