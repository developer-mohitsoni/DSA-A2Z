//! Program to find out the 2SUM Problem.

#include <bits/stdc++.h>
using namespace std;

//?------------------(Brute Force Approach)------------------------------

//* T.C is O(n^2)

//* S.C is O(1).

int twoSum(vector<int> &v, int key)
{
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[i] + v[j] == key)
            {
                return 1;
            }
        }
    }
    return 0;
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

    int k;
    cout << "Enter the value of target: " << endl;
    cin >> k;

    int ans = twoSum(arr, k);

    if (ans)
        cout << "Target is Present: " << endl;
    else
        cout << "Target is not Present: " << endl;

    return 0;
}