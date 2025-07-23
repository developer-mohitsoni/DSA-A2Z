//! Program to find the intersection of two sorted arrays

#include <bits/stdc++.h>
using namespace std;

//?------------------(Brute Force Approach)------------------------------

//* T.C is O(n1*n2)
//* S.C is O(n2)

vector<int> intersectionOfTwoSortedArray(vector<int> &v1, vector<int> &v2)
{
    int n1 = v1.size();
    int n2 = v2.size();

    vector<int> visitedArray(n2, 0);

    vector<int> intersectionOfTwoSortedArray;

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (v1[i] == v2[j] && visitedArray[j] == 0)
            {
                intersectionOfTwoSortedArray.push_back(v1[i]);
                visitedArray[j] = 1;
                break;
            }
            if (v1[i] < v2[j])
            {
                break; // Since both arrays are sorted, we can break the loop if v1[i] is less than v2[j]
            }
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