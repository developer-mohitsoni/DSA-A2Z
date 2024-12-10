//! Program to Replace Elements with Greatest Element on Right Side (Leetcode:- 1299)
#include <bits/stdc++.h>
using namespace std;

//?------------------(Optimal Force Approach)------------------------------

//* T.C = O(N)

//* S.C is O(1).

vector<int> replaceElements(vector<int> &v)
{
    int n = v.size();

    int currLeader = v[n - 1];

    v[n - 1] = -1;

    for (int i = n - 2; i >= 0; i--)
    {
        // Agar koi bhi mera element currLeader se bda milta hai toh mai uss element ko swapped kar dunga currLeader se
        if (v[i] > currLeader)
            swap(v[i], currLeader);

        // Otherwise, mai uss element ko currLeader se replace kar dunga
        else
            v[i] = currLeader;
    }
    return v;
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

    replaceElements(arr);

    for (auto it : arr)
    {
        cout << it << " ";
    }

    return 0;
}