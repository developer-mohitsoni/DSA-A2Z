//! Program to return second largest and second smallest element in an array

#include <bits/stdc++.h>
using namespace std;

//?------------------(Optimal Approach)------------------------------

//* T.C is O(n) in (One Pass)

//* S.C is O(1)
int secondLargestElement(vector<int> &v, int n)
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
    return secondLargestElement;
}

int secondSmallestElement(vector<int> &v, int n)
{
    int smallest = v[0];

    int secondSmallestElement = INT_MAX;

    for (int i = 1; i < n; i++)
    {
        if (v[i] < smallest)
        {
            secondSmallestElement = smallest;
            smallest = v[i];
        }
        else if (v[i] > smallest && v[i] < secondSmallestElement)
        {
            secondSmallestElement = v[i];
        }
    }
    return secondSmallestElement;
}

vector<int> secondLargest_secondSmallest(vector<int> &v, int n)
{
    int secondLargest = secondLargestElement(v, n);
    int secondSmallest = secondSmallestElement(v, n);

    return {secondLargest, secondSmallest};
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

    vector<int> secondLargestElement_secondSmallestElement = secondLargest_secondSmallest(arr, n);

    cout << "\nThe first largest and second largest element in the array is: " << endl;

    for (auto i : secondLargestElement_secondSmallestElement)
    {
        cout << i << " ";
    }

    return 0;
}