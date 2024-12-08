//! Program to find second largest element in an array without sorting

#include <bits/stdc++.h>
using namespace std;

//?------------------(Brute Force Approach)------------------------------

//* T.C is O(n logn) + O(n)

//* S.C is O(1)
int secondLargestElement(vector<int> &v, int n)
{
    sort(v.begin(), v.end()); // Sort the vector in ascending order

    int firstLargestElement = v[n - 1]; // Assign the last element as the first largest element

    int secondLargestElement = -1; // Initialize the second largest element as -1 (Impossible value). If there is no secondLargestElement exist.

    // Iterate from the second last element to the first element
    for (int i = n - 2; i >= 0; i--)
    {
        // If an element is found that is not equal to the first largest element
        if (v[i] != firstLargestElement)
        {
            // Assign it as the second largest element
            secondLargestElement = v[i];
            break; // Terminate the loop
        }
    }
    // Return the second largest element
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