//! Program to find out the 3SUM Problem.

#include <bits/stdc++.h>
using namespace std;

//?------------------(Brute Force Approach)------------------------------

//* T.C is O(n^3) * log(number of logarithmic triplets)

//* S.C is 2 * (Number of triplets)

vector<vector<int>> threeSum(vector<int> &v, int n)
{
    set<vector<int>> st;
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; j < n; j++)
            {
                if (v[i] + v[j] + v[k] == 0)
                {
                    vector<int> temp = {v[i],
                                        v[j],
                                        v[k]};

                    sort(temp.begin(), temp.end());

                    st.insert(temp);
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