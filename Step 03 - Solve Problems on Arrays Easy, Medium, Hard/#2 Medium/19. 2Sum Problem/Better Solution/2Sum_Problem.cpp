//! Program to find out the 2SUM Problem.

#include <bits/stdc++.h>
using namespace std;

//?------------------(Better Solution)------------------------------

//* T.C is O(nlogn)

//* S.C is O(n).

//* Using Hashing
int twoSum(vector<int> &v, int key)
{
    map<int, int> mpp;

    for (int i = 0; i < v.size(); i++)
    {
        int a = v[i];
        int more = key - a;

        if (mpp.find(more) != mpp.end())
        {
            return 1;
        }
        // Logic: Har element ke liye check karte hain ki key - current element pehle se map mein hai ya nahi.
        mpp[a] = i;
    }
    return -1;
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

    int k;
    cout << "Enter the value of target: " << endl;
    cin >> k;

    int ans = twoSum(arr, k);

    if (ans)
        cout << "Target is Present: " << endl;
    else
        cout << "Target is not Present: " << endl;

    return 0;
}