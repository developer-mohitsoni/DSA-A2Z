//! Program to find out the 3SUM Problem.

#include <bits/stdc++.h>
using namespace std;

//?------------------(Better Force Approach)------------------------------

//* T.C is O(n^2) * log(size of set) => O(n^2)

//* S.C is O(N) + 2 * O(Number of unique triples)

vector<vector<int>> threeSum(vector<int> &v, int n)
{
    set<vector<int>> st;
    for (int i = 0; i < n; i++)
    {
        set<int> hashset;
        for (int j = i + 1; j < n; j++)
        {
            int third = -(v[i] + v[j]);

            if (hashset.find(third) != hashset.end())
            {
                vector<int> temp = {v[i], v[j], third};
                sort(temp.begin(), temp.end());
                st.insert(temp);
            }
            hashset.insert(v[j]);
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