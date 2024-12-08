//! Program to find second largest element in an array without sorting

#include <bits/stdc++.h>
using namespace std;

//?------------------(Better Approach)------------------------------

//* T.C is O(n+n) => O(2n) => O(n) in (Two Pass)

//* S.C is O(1)
int secondLargestElement(vector<int> &v, int n)
{
    int firstLargestElement = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > firstLargestElement)
        {
            firstLargestElement = v[i];
        }
    }

    int secondLargestElement = -1;

    for (int i = 0; i < n; i++)
    {
        if (v[i] > secondLargestElement && v[i] != firstLargestElement)
        {
            secondLargestElement = v[i];
        }
    }
    return secondLargestElement;
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

    int secondLargest = secondLargestElement(arr, n);

    cout << "\nThe second largest element in the array is: " << secondLargest << endl;

    return 0;
}