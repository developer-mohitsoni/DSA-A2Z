//! Program to find Leaders in an Array
#include <bits/stdc++.h>
using namespace std;

//?------------------(Optimal Force Approach)------------------------------

//* T.C = O(N)

//* S.C is O(N).

vector<int> leadersInAnArray(vector<int> &v)
{
    int n = v.size();

    vector<int> ans;

    int maxx = INT_MIN;

    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i] >= maxx)
        {
            maxx = v[i];
            ans.push_back(maxx);
        }
    }

    reverse(ans.begin(), ans.end());

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