//! Program to Longest Consecutive Sequence in an Array
#include <bits/stdc++.h>
using namespace std;

//?------------------(Better Force Approach)------------------------------

//* T.C = O(N logN) + O(N)

//* S.C is O(1).

int longestConsecutiveSequenceInAnArray(vector<int> &v)
{
    int n = v.size();

    if (n == 0)
        return 0;

    // sort the array:-

    sort(v.begin(), v.end());

    int lastSmaller = INT_MIN;
    int count = 0;
    int longest = 1;

    // find longest sequence:

    for (int i = 0; i < n; i++)
    {
        if (v[i] - 1 == lastSmaller)
        {
            count++;
            lastSmaller = v[i];
        }
        else if (v[i] != lastSmaller)
        {
            count = 1;
            lastSmaller = v[i];
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