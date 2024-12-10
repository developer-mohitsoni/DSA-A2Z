//! Program to Rearrange Array Elements by Sign
#include <bits/stdc++.h>
using namespace std;

//?------------------(Brute Force Approach)------------------------------

//* T.C = O(N) + O(N)

//* S.C is O(N).

vector<int> rearrangeArrayElementsBySign(vector<int> &v)
{
    vector<int> pos;
    vector<int> neg;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > 0)
            pos.push_back(v[i]);
        else
            neg.push_back(v[i]);
    }

    for (int i = 0; i < v.size() / 2; i++)
    {
        v[2 * i] = pos[i];
        v[2 * i + 1] = neg[i];
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

    rearrangeArrayElementsBySign(arr);

    for (auto it : arr)
    {
        cout << it << " ";
    }

    return 0;
}