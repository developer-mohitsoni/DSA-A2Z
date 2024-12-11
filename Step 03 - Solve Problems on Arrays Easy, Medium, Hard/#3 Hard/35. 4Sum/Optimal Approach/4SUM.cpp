//! Program to find out the 4SUM Problem.

#include <bits/stdc++.h>
using namespace std;

//?------------------(Optimal Force Approach)------------------------------

//* T.C is O(N^2 * N) => O(N^3)

//* S.C is O(1)

//* Two Pointer Approach

vector<vector<int>> fourSum(vector<int> &v, int target)
{
    int n = v.size();

    vector<vector<int>> ans;

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
        // avoid the duplicates while moving i:
        if (i != 0 && v[i] == v[i - 1])
            continue;

        for (int j = i + 1; j < n; j++)
        {
            // avoid the duplicates while moving j:
            if (j != i + 1 && v[j] == v[j - 1])
                continue;

            // moving 2 pointers:
            int k = j + 1;
            int l = n - 1;

            while (k < l)
            {
                long long sum = v[i];

                sum += v[j];
                sum += v[k];
                sum += v[l];

                if (sum < target)
                {
                    k++;
                }
                else if (sum > target)
                {
                    l--;
                }
                else
                {
                    vector<int> temp = {v[i], v[j], v[k], v[l]};
                    ans.push_back(temp);
                    k++;
                    l--;
                    // skip the duplicates:
                    while (k < l && v[k] == v[k - 1])
                        k++;
                    while (k < l && v[l] == v[l + 1])
                        l--;
                }
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

    cout << "Enter the target sum: ";
    int key;
    cin >> key;

    vector<vector<int>> ans = fourSum(arr, key);

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