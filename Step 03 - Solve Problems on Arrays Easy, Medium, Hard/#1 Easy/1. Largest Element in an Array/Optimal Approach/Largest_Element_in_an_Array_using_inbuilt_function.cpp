//! Program to find largest element in an array

#include <bits/stdc++.h>
using namespace std;

//?------------------(Optimal Force Approach)------------------------------

//* T.C is the time taken to sort the array and then return the last element as the largest element, which takes O(n) time.

//* S.C is the time taken to sort the array and then return the last element as the largest element, which takes O(1) space.
int largestElement(vector<int> &v, int n)
{
    int maxx = *max_element(v.begin(), v.end());

    return maxx;
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