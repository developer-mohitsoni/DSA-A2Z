//! Remove duplicates from sorted array

#include <bits/stdc++.h>
using namespace std;

//?------------------(Brute Force Approach)------------------------------

//* T.C is O(nlogn) + O(n)  => O(nlogn) + O(n) => O(nlogn)
//* S.C is O(n) if all elements are uniue
void removeDuplicatesfromSortedArray(vector<int> &v, int n)
{
    set<int> st;

    for (int i = 0; i < n; i++)
    {
        st.insert(v[i]); // T.C is O(nlogn)
    }

    int index = 0;

    // T.C is O(n)
    for (auto it : st)
    {
        v[index] = it;

        index++;
    }

    v.resize(index); // Resize the vector to its actual size
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