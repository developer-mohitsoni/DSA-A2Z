//! Program to Rearrange Array Elements by Sign (Alternate Numbers)
#include <bits/stdc++.h>
using namespace std;

//! Not solvable by (Optimal Approach)

//?------------------(Brute Force Approach)------------------------------

//* T.C = O(N) + O(min(pos, neg)) + O(leftOvers) => O(N) + O(N) = O(2N) if all pos & neg

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

    if (pos.size() > neg.size())
    {
        for (int i = 0; i < neg.size(); i++)
        {
            v[i * 2] = pos[i];
            v[i * 2 + 1] = neg[i];
        }

        // remaining elements
        int index = neg.size() * 2;
        for (int i = neg.size(); i < pos.size(); i++)
        {
            v[index] = pos[i];
            index++;
        }
    }
    else
    {
        for (int i = 0; i < pos.size(); i++)
        {
            v[i * 2] = pos[i];
            v[i * 2 + 1] = neg[i];
        }
        // remaining elements

        int index = pos.size() * 2;
        for (int i = pos.size(); i < neg.size(); i++)
        {
            v[index] = neg[i];
            index++;
        }
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