//! Program to Rearrange Array Elements by Sign
#include <bits/stdc++.h>
using namespace std;

//?------------------(Optimal Force Approach)------------------------------

//* T.C = O(N)

//* S.C is O(N).

vector<int> rearrangeArrayElementsBySign(vector<int> &v)
{
    int n = v.size();

    vector<int> ans(n, 0);

    int posIndex = 0, negIndex = 1;

    for (int i = 0; i < n; i++)
    {
        if (v[i] < 0)
        {
            ans[negIndex] = v[i];
            negIndex += 2;
        }
        else
        {
            ans[posIndex] = v[i];
            posIndex += 2;
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

    vector<int> ans = rearrangeArrayElementsBySign(arr);

    for (auto it : ans)
    {
        cout << it << " ";
    }

    return 0;
}