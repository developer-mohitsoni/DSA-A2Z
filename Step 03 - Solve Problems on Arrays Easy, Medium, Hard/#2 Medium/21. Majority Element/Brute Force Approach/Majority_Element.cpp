//! Program to find majority element in an array.
#include <bits/stdc++.h>
using namespace std;

//?------------------(Brute Approach)------------------------------

//* Time Complexity: O(n^2)
//* Space Complexity: O(1)

int majorityElement(vector<int> &v)
{
    int n = v.size();

    for (int i = 0; i < n; i++)
    {
        int count = 0;

        for (int j = 0; j < n; j++)
        {
            if (v[i] == v[j])
                count++;
        }
        if (count > n / 2)
            return v[i];
    }
    return {};
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

    int majorityElem = majorityElement(arr);

    cout << "Majority Element in an Array is: " << majorityElem << endl;

    return 0;
}