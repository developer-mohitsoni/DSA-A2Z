//! Program to find out the 3SUM Problem.

#include <bits/stdc++.h>
using namespace std;

//?------------------(Optimal Force Approach)------------------------------

//* T.C is O(NlogN)+O(N2), where N = size of the array.

//* S.C is O(1)

//* Two Pointer Approach

vector<vector<int>> threeSum(vector<int> &v, int n)
{
    vector<vector<int>> ans;

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
        // remove duplicates:
        if (i != 0 && v[i] == v[i - 1])
            continue;

        // moving 2 pointers:
        int j = i + 1;
        int k = n - 1;
        while (j < k)
        {
            int sum = v[i] + v[j] + v[k];
            if (sum < 0)
            {
                j++;
            }
            else if (sum > 0)
            {
                k--;
            }
            else
            {
                vector<int> temp = {v[i], v[j], v[k]};
                ans.push_back(temp);
                j++;
                k--;
                // skip the duplicates:
                while (j < k && v[j] == v[j - 1])
                    j++;
                while (j < k && v[k] == v[k + 1])
                    k--;
            }
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

    vector<vector<int>> ans = threeSum(arr, n);

    for (auto it : ans)
    {
        cout << "[";
        for (auto i : it)
        {
            cout << i << " ";
        }
        cout << "] ";
    }
    cout << "\n";

    return 0;
}