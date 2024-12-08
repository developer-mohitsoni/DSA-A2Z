//! Program to find largest element in an array

#include <bits/stdc++.h>
using namespace std;

//?-----------------(Optimal Force Approach)-----------------------------

//* T.C is the time taken to iterate through the array and find the largest element, which takes O(n) time.

//* S.C. is the time taken to iterate through the array and find the largest element, which takes O(1) space.

int largestElement(vector<int> &v, int n)
{
    int max_element = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > max_element)
        {
            max_element = v[i];
        }
    }
    return max_element;
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

    int largest = largestElement(arr, n);

    cout << "\nThe largest element in the array is: " << largest << endl;

    return 0;
}