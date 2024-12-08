//! Program to find the union of two sorted arrays

#include <bits/stdc++.h>
using namespace std;

//?------------------(Brute Force Approach)------------------------------

//* T.C is O(n1logn + n2logn) + O(n1+n2)
//* S.C is O(n1+n2) if both array are unique elements
//* S.C is O(n1+n2) for returning the union of two sorted arrays

vector<int> unionOfTwoSortedArray(vector<int> &v1, vector<int> &v2)
{
    int n1 = v1.size();
    int n2 = v2.size();

    vector<int> unionTwoSortedArray;

    set<int> st;

    for (int i = 0; i < n1; i++)
    { // T.C is O(n1logn)
        st.insert(v1[i]);
    }
    for (int i = 0; i < n2; i++)
    { // T.C is O(n2logn)
        st.insert(v2[i]);
    }

    for (auto it : st)
    { // T.C is O(n1+n2) if both array contains distinct elements
        unionTwoSortedArray.push_back(it);
    }
    return unionTwoSortedArray;
}

int main()
{

    int n;
    cout << "Enter the number of elements in the First Array: ";
    cin >> n;

    vector<int> arr1(n);
    cout << "Enter the elements of the array in sorted order: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    int m;
    cout << "Enter the number of elements in the Second Array: ";
    cin >> m;

    vector<int> arr2(m);
    cout << "Enter the elements of the array in sorted order: ";
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    cout << endl;

    cout << "Array After Union of Two Array: " << endl;

    vector<int> unionOfArrays = unionOfTwoSortedArray(arr1, arr2);

    for (auto it : unionOfArrays)
    {
        cout << it << " ";
    }

    return 0;
}