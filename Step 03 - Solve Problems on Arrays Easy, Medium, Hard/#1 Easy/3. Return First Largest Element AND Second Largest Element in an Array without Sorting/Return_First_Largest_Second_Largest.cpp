//! Program to return first largest and second largest element in an array

#include <bits/stdc++.h>
using namespace std;

//?------------------(Optimal Approach)------------------------------

//* T.C is O(n) in (One Pass)

//* S.C is O(1)
vector<int> firstLargest_SecondLargest(vector<int> &v, int n)
{
    int firstLargestElement = v[0];

    // int secondLargestElement = INT_MIN; // If array elements contains negative elements
    int secondLargestElement = -1;

    for (int i = 1; i < n; i++)
    {
        if (v[i] > firstLargestElement)
        {
            secondLargestElement = firstLargestElement;
            firstLargestElement = v[i];
        }
        else if (v[i] < firstLargestElement && v[i] > secondLargestElement)
        {
            secondLargestElement = v[i];
        }
    }
    return {firstLargestElement, secondLargestElement};
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

    vector<int> firstLargestElement_SecondLargestElement = firstLargest_SecondLargest(arr, n);

    cout << "\nThe first largest and second largest element in the array is: " << endl;

    for (auto i : firstLargestElement_SecondLargestElement)
    {
        cout << i << " ";
    }

    return 0;
}