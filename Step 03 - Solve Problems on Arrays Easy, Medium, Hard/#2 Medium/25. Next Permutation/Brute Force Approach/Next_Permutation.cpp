//! Program to find the Next Permutation
#include <bits/stdc++.h>
using namespace std;

//?------------------(Brute Force Approach)------------------------------

//* T.C = O(N! * N)

//* S.C is O(1).

void nextPermuation(vector<int> &v)
{
    //! Takes lot of time
    // 1st:- Generate all possible permutations in sorted order
    // 2nd:- Apply Linear Search
    // 3rd:- Next index of that search element
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