//! Program to find majority element in an array.
#include <bits/stdc++.h>
using namespace std;

//?------------------(Better Approach)------------------------------

//* T.C  = O(N logN) + O(N)
//* S.C = O(N)
int majorityElement(vector<int> &v)
{
    unordered_map<int, int> mpp;

    // N log N
    for (int i = 0; i < v.size(); i++)
    {
        mpp[v[i]]++;
    }

    // O(N)
    for (auto it : mpp)
    {
        if (it.second > (v.size() / 2))
        {
            return it.first;
        }
    }
    return -1;
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