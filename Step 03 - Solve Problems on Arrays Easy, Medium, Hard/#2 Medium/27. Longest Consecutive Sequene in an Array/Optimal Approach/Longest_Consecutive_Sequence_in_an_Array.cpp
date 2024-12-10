//! Program to Longest Consecutive Sequence in an Array
#include <bits/stdc++.h>
using namespace std;

//?------------------(Optimal Force Approach)------------------------------

//* T.C = O(2N + N) => O(3N)

//* S.C is O(N).

int longestConsecutiveSequenceInAnArray(vector<int> &v)
{
    int n = v.size();

    if (n == 0)
        return 0;

    int longest = 1;

    unordered_set<int> st;

    for (int i = 0; i < n; i++)
    {
        st.insert(v[i]);
    }

    // Find the longest sequence:-

    for (auto it : st)
    {
        // if 'it' is starting number then,

        // Jo bhi previous sequence nai hoga usko ye starting number manta hai.
        if (st.find(it - 1) == st.end())
        {
            int count = 1;

            int x = it;

            while (st.find(x + 1) != st.end())
            {
                x++;
                count++;
            }
            longest = max(longest, count);
        }
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