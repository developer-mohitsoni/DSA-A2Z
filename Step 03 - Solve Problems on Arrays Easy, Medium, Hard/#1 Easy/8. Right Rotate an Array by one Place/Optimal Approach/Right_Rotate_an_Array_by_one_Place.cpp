//! Right rotate an array by one place

#include <bits/stdc++.h>
using namespace std;

//?------------------(Optimal Approach)------------------------------

//* T.C is O(n)
//* S.C is O(n) in order to solve the problem
//* S.C is O(1) because no extra space takes

void rightRotateByOne(vector<int> &v, int n)
{
    int temp = v[n - 1]; // temporary variable to store the last element of the array

    for (int i = n - 1; i >= 1; i--)
    {
        v[i] = v[i - 1]; // shifting the elements of the array to the left by one place
    }
    v[0] = temp; // storing the last element of the array at the first position
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

    rightRotateByOne(arr, n);

    cout << endl;

    cout << "Array After Right Rotating By One Place: " << endl;

    for (auto it : arr)
    {
        cout << it << " ";
    }

    return 0;
}