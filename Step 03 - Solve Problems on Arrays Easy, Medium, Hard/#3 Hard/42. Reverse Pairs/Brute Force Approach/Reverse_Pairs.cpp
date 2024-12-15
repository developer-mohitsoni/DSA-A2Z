//! Program to Reverse Pairs

#include <bits/stdc++.h>
using namespace std;

//?------------------(Brute Force Approach)------------------------------

//* T.C is O(n^2)

//* S.C is O(1)
int countPairs(vector<int> &v)
{
    int n = v.size(); // size of the array
    // Count the number of pairs:
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] > 2 * v[j])
                cnt++;
        }
    }
    return cnt;
}

int team(vector<int> &skill)
{
    int n = skill.size();

    return countPairs(skill);
}

int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = team(arr);

    cout << "The number of inversions are: " << ans << endl;

    return 0;
}