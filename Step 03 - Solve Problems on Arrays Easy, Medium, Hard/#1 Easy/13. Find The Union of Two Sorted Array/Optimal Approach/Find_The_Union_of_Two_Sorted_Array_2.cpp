//! Program to find the union of two sorted arrays

#include <bits/stdc++.h>
using namespace std;

//?------------------(Optimal Approach)------------------------------

//* T.C is O(n1 + n2).
//* S.C is O(n1+n2) for returning the union of two sorted arrays

vector<int> unionOfTwoSortedArray(vector<int> &v1, vector<int> &v2)
{
    int n1 = v1.size();
    int n2 = v2.size();

    vector<int> unionTwoSortedArray;

    int i = 0;
    int j = 0;

    // Traverse both arrays until we reach the end of either array
    // Compare the elements of both arrays and add the smaller one to the union array
    while (i < n1 && j < n2)
    {
        if (v1[i] <= v2[j])     // Compare the elements of both arrays
        {
            // If the element is not already present in the union array, add it to the union array
            // This check is done to avoid duplicates in the union array
            if (unionTwoSortedArray.size() == 0 || unionTwoSortedArray.back() != v1[i])
            {
                unionTwoSortedArray.push_back(v1[i]);
            }
            i++;
        }
        else
        {
            // If the element is not already present in the union array, add it to the union array
            // This check is done to avoid duplicates in the union array
            if (unionTwoSortedArray.size() == 0 || unionTwoSortedArray.back() != v2[j])
            {
                unionTwoSortedArray.push_back(v2[j]);
            }
            j++;
        }
    }

    // If there are remaining elements in either of the arrays, add them to the union array
    while (j < n2)
    {
        if (unionTwoSortedArray.size() == 0 || unionTwoSortedArray.back() != v2[j])
        {
            unionTwoSortedArray.push_back(v2[j]);
        }
        j++;
    }

    while (i < n1)
    {
        if (unionTwoSortedArray.size() == 0 || unionTwoSortedArray.back() != v1[i])
        {
            unionTwoSortedArray.push_back(v1[i]);
        }
        i++;
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