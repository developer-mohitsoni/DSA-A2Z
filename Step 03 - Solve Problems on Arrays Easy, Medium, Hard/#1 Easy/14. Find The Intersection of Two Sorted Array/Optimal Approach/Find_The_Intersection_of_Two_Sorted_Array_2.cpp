//! Program to find the intersection of two sorted arrays

#include <bits/stdc++.h>
using namespace std;

//?------------------(Optimal Approach)------------------------------

//* T.C is O(n1+n2)
//* S.C is O(1) because no extra space needed
//* S.C is O(n1+n2) in case of returning the intersection of two sorted arrays

vector<int> intersectionOfTwoSortedArray(vector<int> &v1, vector<int> &v2)
{
    int n1 = v1.size();
    int n2 = v2.size();

    vector<int> intersectionOfTwoSortedArray;

    int i = 0;
    int j = 0;

    while (i < n1 && j < n2)
    {
        // If the elements are equal, add it to the intersection array
        // and move both pointers forward
        if (v1[i] == v2[j])
        {
            intersectionOfTwoSortedArray.push_back(v1[i]);
            i++;
            j++;
        }
        // If the element in v1 is less than the element in v2, move the pointer of v1 forward
        // Otherwise, move the pointer of v2 forward
        else if (v1[i] < v2[j])
        {
            i++;
        }
        // If the element in v1 is greater than the element in v2, move the pointer of v2 forward
        else
        {
            j++;
        }
    }

    return intersectionOfTwoSortedArray;
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

    cout << "Array After Intersection of Two Array: " << endl;

    vector<int> intersectionOfArrays = intersectionOfTwoSortedArray(arr1, arr2);

    for (auto it : intersectionOfArrays)
    {
        cout << it << " ";
    }

    return 0;
}