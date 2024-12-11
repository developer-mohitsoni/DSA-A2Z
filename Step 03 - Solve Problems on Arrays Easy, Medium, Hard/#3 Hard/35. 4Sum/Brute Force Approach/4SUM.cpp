//! Program to find out the 4SUM Problem.

#include <bits/stdc++.h>
using namespace std;

//?------------------(Brute Force Approach)------------------------------

//* T.C is O(n^4)

//* S.C is 2 * (Number of quadruplets)

vector<vector<int>> fourSum(vector<int> &v, int target)
{
    int n = v.size();

    set<vector<int>> st;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                for (int l = k + 1; l < n; l++)
                {
                    long long sum = v[i] + v[j];

                    sum += v[k];
                    sum += v[l];

                    if (sum == target)
                    {
                        vector<int> temp = {v[i],
                                            v[j],
                                            v[k],
                                            v[l]};

                        sort(temp.begin(), temp.end());

                        st.insert(temp);
                    }
                }
            }
        }
    }

    vector<vector<int>> ans(st.begin(), st.end());
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