//! Program to find out the 4SUM Problem.

#include <bits/stdc++.h>
using namespace std;

//?------------------(Better Force Approach)------------------------------

//* T.C is O(n^3) * log(number of elements in the set M)

//* S.C is O(N) + 2 * O(Number of unique quadruplets)

vector<vector<int>> fourSum(vector<int> &v, int target)
{
    int n = v.size();

    set<vector<int>> st;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            set<long long> hashset;

            for (int k = j + 1; k < n; k++)
            {
                long long sum = v[i] + v[j];

                sum += v[k];

                long long fourth = target - sum;

                if (hashset.find(fourth) != hashset.end())
                {
                    vector<int> temp = {v[i], v[j], v[k], (int)(fourth)};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
                hashset.insert(v[k]);
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