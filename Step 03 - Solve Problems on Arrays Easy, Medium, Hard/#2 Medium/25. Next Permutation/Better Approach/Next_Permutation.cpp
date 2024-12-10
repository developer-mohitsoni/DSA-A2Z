//! Program to find the Next Permutation
#include <bits/stdc++.h>
using namespace std;

//?------------------(Better Force Approach)------------------------------

//* T.C = O(N)

//* S.C is O(1).

void nextPermuation(vector<int> &v)
{
    next_permutation(v.begin(), v.end());
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

    nextPermuation(arr);

    for (auto it : arr)
    {
        cout << it << " ";
    }

    return 0;
}