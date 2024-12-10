//! Program to find out the 2SUM Problem.

#include <bits/stdc++.h>
using namespace std;

//?------------------(Brute Force Approach)------------------------------

//* T.C is O(n^2)

//* S.C is O(1).

vector<int> twoSum(vector<int> &v, int key)
{
    vector<int> res;

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[i] + v[j] == key)
            {
                res.push_back(i);
                res.push_back(j);

                return res;
            }
        }
    }
    return {-1};
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

    vector<int> ans = twoSum(arr, k);

    if (ans[0] == -1)
        cout << "Target is not Present: " << ans[0] << endl;

    else
    {
        for (int i : ans)
            cout << i << " ";
    }

    return 0;
}