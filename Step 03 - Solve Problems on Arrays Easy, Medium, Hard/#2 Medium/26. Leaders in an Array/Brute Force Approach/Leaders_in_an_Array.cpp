//! Program to find Leaders in an Array
#include <bits/stdc++.h>
using namespace std;

//?------------------(Brute Force Approach)------------------------------

//* T.C = O(N^2)

//* S.C is O(N).

vector<int> leadersInAnArray(vector<int> &v)
{
    int n = v.size();

    int leader;

    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        leader = true;

        for (int j = i + 1; j < n; j++)
        {
            if (v[j] > v[i])
            {
                leader = false;
                break;
            }
        }
        if (leader == true)
        {
            ans.push_back(v[i]);
        }
    }
    return ans;
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

    vector<int> ans = leadersInAnArray(arr);

    for (auto it : ans)
    {
        cout << it << " ";
    }

    return 0;
}