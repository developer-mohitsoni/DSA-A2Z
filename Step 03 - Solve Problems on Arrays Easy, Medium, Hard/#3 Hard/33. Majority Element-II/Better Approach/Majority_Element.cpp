//! Program to find majority element which is greater than > n/3 times in an array.
#include <bits/stdc++.h>
using namespace std;

//?------------------(Better Approach)------------------------------

//* Time Complexity: O(n * logn)
//* Space Complexity: O(n)

vector<int> majorityElement(vector<int> &v)
{
    int n = v.size();

    vector<int> ls;

    map<int, int> mpp;

    int mini = int(n / 3) + 1;

    for (int i = 0; i < n; i++)
    {
        mpp[v[i]]++;

        if (mpp[v[i]] == mini)
        {
            ls.push_back(v[i]);
        }
        if (ls.size() == 2)
            break;
    }
    return ls;
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

    vector<int> ans = majorityElement(arr);

    cout << "Majority Element in an Array are: ";

    for (auto it : ans)
        cout << it << " ";
    cout << "\n";

    return 0;
}