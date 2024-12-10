//! Program to Longest Consecutive Sequence in an Array
#include <bits/stdc++.h>
using namespace std;

//?------------------(Brute Force Approach)------------------------------

//* T.C = O(N^2)

//* S.C is O(1).

bool ls(vector<int> &v, int num)
{
    int n = v.size();

    for (int i = 0; i < n; i++)
    {
        if (v[i] == num)
            return true;
    }
    return false;
}

int longestConsecutiveSequenceInAnArray(vector<int> &v)
{
    int n = v.size();

    if (n == 0)
        return 0;

    int longest = 1;

    int count;

    for (int i = 0; i < n; i++)
    {
        int x = v[i];

        count = 1;

        while (ls(v, x + 1) == true)
        {
            x++;
            count++;
        }
        longest = max(longest, count);
    }
    return longest;
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

    int ans = longestConsecutiveSequenceInAnArray(arr);

    cout << "The length of the longest consecutive sequence is: " << ans << endl;

    return 0;
}